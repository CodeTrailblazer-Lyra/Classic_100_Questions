#!/usr/bin/env python3
"""
Auto-update the README.md problem list table based on C source files in Code/.
Each .c file is expected to have:
  Line 1: // C 练习实例N - <title>
  Line 2: // 题目：<description>
"""

import os
import re

REPO_ROOT = os.path.join(os.path.dirname(__file__), "..", "..")
CODE_DIR = os.path.join(REPO_ROOT, "Code")
README_PATH = os.path.join(REPO_ROOT, "README.md")

TABLE_HEADER = "| 编号 | 文件 | 题目描述 |\n|------|------|----------|"
SECTION_START = "## 📝 题目列表"
SECTION_END = "\n---"


def parse_c_file(filepath):
    """Extract number, title, and description from a C source file."""
    filename = os.path.basename(filepath)
    match = re.match(r"Demo_(\d+)\.c", filename)
    if not match:
        return None
    number = match.group(1)

    title = ""
    description = ""
    try:
        with open(filepath, encoding="utf-8") as f:
            lines = f.readlines()
        # Scan the first 10 lines to find the title and description comments.
        # All Demo_*.c files place these in the opening comment block.
        for line in lines[:10]:
            line = line.strip()
            # First comment: // C 练习实例N - <title>
            m = re.match(r"//\s*C\s*练习实例\d+\s*[-–]\s*(.+)", line)
            if m and not title:
                title = m.group(1).strip()
            # Second comment: // 题目：<description>
            m2 = re.match(r"//\s*题目[：:]\s*(.+)", line)
            if m2 and not description:
                description = m2.group(1).strip()
    except Exception:
        pass

    if title and description:
        desc_cell = f"{title} —— {description}"
    elif title:
        desc_cell = title
    else:
        desc_cell = ""

    return number, filename, desc_cell


def build_table(code_dir):
    """Build markdown table rows for all Demo_*.c files."""
    files = sorted(
        f for f in os.listdir(code_dir) if re.match(r"Demo_\d+\.c$", f)
    )
    rows = []
    for filename in files:
        result = parse_c_file(os.path.join(code_dir, filename))
        if result is None:
            continue
        number, fname, desc = result
        rows.append(
            f"| {number} | [{fname}](Code/{fname}) | {desc} |"
        )
    return TABLE_HEADER + "\n" + "\n".join(rows)


def update_readme(readme_path, new_table):
    """Replace the problem list table in README.md."""
    with open(readme_path, encoding="utf-8") as f:
        content = f.read()

    # Find the section and replace the table inside it
    start_idx = content.find(SECTION_START)
    if start_idx == -1:
        print("Section '## 📝 题目列表' not found in README.md")
        return False

    # Find the next '---' separator after the section heading
    end_idx = content.find(SECTION_END, start_idx)
    if end_idx == -1:
        end_idx = len(content)

    old_section = content[start_idx:end_idx]

    # Build new section: keep heading + blank line + new table
    new_section = f"{SECTION_START}\n\n{new_table}\n"

    if old_section == new_section:
        print("README.md is already up to date.")
        return False

    new_content = content[:start_idx] + new_section + content[end_idx:]
    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(new_content)
    print("README.md updated successfully.")
    return True


if __name__ == "__main__":
    table = build_table(CODE_DIR)
    update_readme(README_PATH, table)
