# Tetris in C++

A personal project of recreating Tetris in C++ using the Qt framework.

## Dependencies

- C++ compiler (clang, gcc/g++, etc.)
- CMake, minimum ver. 3.30
- Qt6

## Installation

- Clone this repo to an empty directory.

Future mentions of this directory are marked as *dir*.

```
git clone https://github.com/MonarchEXE/Tetris-Qt.git <empty-repo-path>
```

- Generate the CMake build files.
It is recommended to generate the files in a _build_ sub-directory for a clean directory tree.

```
cmake -S <dir> -B <dir>/build 
```

- Compile build files to generate executable. 

As of 09-15-2024, executable is located in the build directory. README will be updated once I figure to write file to another directory.

> Note: executable generation is dependent on Operating System

### Linux

```
make -C <dir>/build
```
