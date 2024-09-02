---
title: Software installation
---
# Required Software

For this course, you will need specific software installed in your machine:

- **g++**: a C++ compiler, that will interpret C++ source code and transform it into binary (executable) files.
- **CMake**: a C++ project build system, that will help compiling larger C++ projects.
- **git**: a version control software, that will enable you to download and update source code from the course's repository, as well as share source code with your team and control how is it updated.
- **Visual Studio code**: an integrated development environment, which is basically a source code editor with code highlighting features, that integrates compilation (with g++), build system (cmake) and version control (git) into the same user interface, to facilitate tasks.

On Linux or MacOSX distributions, you can install it through the package managers/software repositories.

# Software installation on Windows

If you preffer to use a package manager for Windows (such as what you would have by default on Linux distributions or MacOSX) you can use [Chocolatey](https://chocolatey.org/). Here we explain how to install the software of this course on manually on Windows.

## g++

For manually installing `g++` on Windows, you need to download *MinGW*, which is the the version of the C++ compliler that better works on Windows. You can download the installer from [here](https://nuwen.net/mingw.html), particularly the file `mingw-19.0.exe` (or newer if there is one). You need to execute the installer, following the [instructions](https://nuwen.net/mingw.html#install).

We recommend to install it on the default folder, `C:\`, which will create `C:\MinGW`. 

You will then need to set up some *environment variables* (search for "environment variables" on Windows):
- Add `C:\MinGW\bin` to the `PATH` environment variable.
- Create the following two environment variables:
    - `C_INCLUDE_PATH = C:\MinGW\include`
    - `CPLUS_INCLUDE_PATH = C:\MinGW\include`

You can verify the installation by opening PowerShell (the Windows terminal) and typing

```
C:\Users\...> g++ --version
g++.exe (GCC) 13.2.0
```

## CMake

To manually install CMake, you need to download it from [here](https://cmake.org/download/). The easiest way is to download the Windows x64 installer of the latest version (a `.msi` file) and double click it. It will automatically install CMake. When asked for, select "Add CMake to the system PATH for all users" (or for current user). It will automatically set up the `PATH` environment variable without forcing you to do it manually.

## git

To manually install `git`, download it from [here](https://github.com/git-for-windows/git/releases/latest). You probably want the 64-bit installer, which at the moment is named `Git-2.45.2-64-bit.exe`. This will add several quality-of-life additional tools such as shell integration, a user interface and a credential manager.

## Visual Studio Code

Again, for Visual Studio Code, you need to [download the Windows installer](https://code.visualstudio.com/Download), specifically the `x64` one. You decide if you want to install it for all users in your machine (*System Installer*) or only for yourself (*User Installer*). Visual Studio Code includes a graphic user interface that can be expanded through extensions. 

Visual Studio Code can be enhanced through extensions. Open Visual Studio Code, go to the "Extensions" tab and install the *C/C++ Extension Pack*.

# Gathering class materials

All the source code and class materials of this course, are stored on a GitHub repository. In order to download it all, you need to open the terminal or PowerShell console in the parent folder of where you want to download everything and type

```
git clone https://github.com/adolfomunoz/FoC.git
```

This will create a `FoC` folder with all materials. From that moment on you can enter the folder and update all materials (in the event that your teachers update them) by the command

```
git pull
```

Git is a version control system, and GitHub provides a server for such version control system. You might consider using it for the assignments within this or other courses.

To double check you can compile, open a terminal / PowerShell console in the `FoC/src` folder and compile the `hello-world.cpp` source code file by executing

```
g++ hello-world.cpp -o hello-world
```

This will create an executable file (with `.exe` extension if you are in Windows). You can execute it as

```
./hello-world
```

Also, on Windows, you can double-click it, but it will open and close a terminal so fast that you will not see the execution. You can also experiment with compiling and executing other source files too.


