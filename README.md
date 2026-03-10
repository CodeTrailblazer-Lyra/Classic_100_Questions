# C 语言经典 100 题

本仓库收录 **C 语言经典 100 道编程练习题**，涵盖基础算法、数学运算、逻辑判断等多个方向，适合 C 语言初学者和进阶学习者参考与练习。

---

## 📁 目录结构

```
Classic_100_Questions/
├── Code/               # 所有题目的 C 源码
│   ├── Demo_001.c
│   ├── Demo_002.c
│   ├── Demo_003.c
│   ├── Demo_004.c
│   └── ...
├── CMakeLists.txt      # CMake 构建配置
└── README.md
```

---

## 🛠️ 编译与运行

### 方式一：使用 CMake（推荐）

```bash
mkdir build && cd build
cmake ..
make
./Demo_001   # 运行第 1 题
```

### 方式二：直接使用 GCC 编译单个文件

```bash
gcc Code/Demo_001.c -o Demo_001
./Demo_001
```

> **环境要求**：GCC 或兼容 C99 标准的编译器，CMake 3.x 及以上（可选）。

---

## 📝 题目列表

| 编号 | 文件 | 题目描述 |
|------|------|----------|
| 001 | [Demo_001.c](Code/Demo_001.c) | 组成无重复数字的三位数 —— 用 1、2、3、4 组成互不重复的三位数 |
| 002 | [Demo_002.c](Code/Demo_002.c) | 阶梯利润提成 —— 根据利润区间计算应发奖金 |
| 003 | [Demo_003.c](Code/Demo_003.c) | 完全平方数 —— 找出加 100 和加 268 后均为完全平方数的整数 |
| 004 | [Demo_004.c](Code/Demo_004.c) | 判断当年第几天 —— 输入年月日，计算该日是当年第几天 |
| 005 ~ 100 | ... | 持续更新中… |

---

## 🤝 贡献

欢迎提交 Issue 或 Pull Request！

1. Fork 本仓库
2. 新建分支：`git checkout -b feature/DemoXXX`
3. 添加题目代码，并在 `CMakeLists.txt` 中注册新的可执行目标
4. 提交并推送：`git commit -m "Add Demo_XXX"` → `git push`
5. 提交 Pull Request

---

## 📄 许可证

本仓库代码仅供学习交流使用。
