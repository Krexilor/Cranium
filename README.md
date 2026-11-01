# Cranium - C++ Learning Journey

A structured, continuously evolving repository documenting my journey toward mastering **C++** — from the fundamentals to more advanced language concepts.

This repository is both a personal learning log and a reference library. It contains study notes, code examples, experiments, and practice work developed while learning the language.

## Repository Overview

- **Obsidian notes:** Structured explanations and topic-by-topic learning notes.
- **C++ practice:** Exercises and code written to reinforce concepts.
- **Examples and experiments:** Small programs used to explore language features and behavior.
- **Learning documentation:** Explanations, observations, and problem-solving approaches.

## Learning Roadmap

The repository is organized around the following areas:

1. **Introduction to C++** — The language, its history, use cases, development tools, and compilation process.
2. **C++ Basics** — Program structure, data types, variables, input/output, operators, and control flow.
3. **Functions** — Function signatures, parameter passing, default arguments, overloading, inline functions, and recursion.
4. **Arrays and Data Handling** — Array fundamentals, multidimensional arrays, memory layout, and the relationship between arrays and pointers.
5. **Pointers, References, and Memory** — Pointers, references, pointer arithmetic, null and dangling pointers, and dynamic memory.

The roadmap may expand as I explore additional areas of C++.

## Repository Structure

```text
Cranium/
├── .vscode/
│   ├── launch.json
│   └── tasks.json
├── 00 Practice/
├── 01 Introduction/
├── 02 C++ Basics/
├── 03 Functions/
├── 04 Arrays & Data Handling/
├── 05 Pointers, References & Memory Basics/
├── .gitignore
├── LICENSE.txt
└── README.md
```

## Building and Running Practice Programs

Each `.cpp` file is a standalone practice program. Compile and run one file at a time from the repository root.

### Using the terminal

For example, to compile and run the first C++ Basics exercise:

```bash
mkdir -p build
g++ "00 Practice/01 C++ Basics/01_personal_intro.cpp" -o build/personal_intro
./build/personal_intro
```

Replace the source path and executable name with the file you want to practice. The `build/` directory is created at the repository root and is ignored by Git, so compiled binaries are not committed.

### Using Visual Studio Code

Open the repository folder in VS Code and make a `.cpp` practice file active. Install the Microsoft **C/C++** extension and make sure `g++` and `gdb` are available in your system's `PATH`.

- Press **F5** to build the active file and run it with the debugger.
- Use **Run → Start Without Debugging** (or **Ctrl+F5**) to build and run without the debugger.
- Press **Ctrl+Shift+B** to build the active file without running it.

The executable is written under `build/`, keeping the source file's folder structure. For example, `00 Practice/01 C++ Basics/01_personal_intro.cpp` is built to `build/00 Practice/01 C++ Basics/01_personal_intro`. The run configurations use the repository root as the program's working directory.

The VS Code build task uses `g++` with C++20 and the launch configuration uses `gdb`. You can still build and run files manually with the terminal commands above, using any compiler or workflow you prefer.

## Learning Goals

- Build a strong foundation in modern C++.
- Understand pointers, references, memory management, and object lifetimes.
- Develop a solid understanding of object-oriented programming (OOP).
- Learn data structures and algorithms using C++.
- Explore the Standard Template Library (STL).
- Write clean, efficient, readable, and maintainable code.
- Apply concepts through practical exercises and real-world projects.
- Progress toward advanced C++ proficiency.

## Progress Philosophy

This repository is a record of an ongoing learning process, not a finished or authoritative tutorial.

The notes and examples reflect what I learn along the way: mistakes, discoveries, experiments, and improvements. Content may be revised, reorganized, or expanded as my understanding develops.

## Why This Repository Exists

Documenting the learning process makes it easier to track progress, revisit concepts, and build a useful reference over time. It also provides a way to share that journey and the material created along the way.

## License

This repository is licensed under the **Creative Commons Attribution 4.0 International (CC BY 4.0)** license.

You are free to use, adapt, and distribute the notes, provided appropriate attribution is given. See [LICENSE.txt](LICENSE.txt) for the full license text.
