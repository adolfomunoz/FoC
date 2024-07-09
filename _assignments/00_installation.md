---
title: Software installation
---
# Required Software

For this course, you will need specific software installed in your machine:

- **g++**: a C++ compiler, that will interpret C++ source code and transform it into binary (executable) files.
- **cmake**: a C++ project build system, that will help compiling larger C++ projects.
- **git**: a version control software, that will enable you to download and update source code from the course's repository, as well as share source code with your team and control how is it updated.
- **Visual Studio code**: an integrated development environment, which is basically a source code editor with code highlighting features, that integrates compilation (with g++), build system (cmake) and version control (git) into the same user interface, to facilitate tasks.


# Software installation on Windows

There are two options for installing the compilers and software for the course on Windows:
- **Manual installation**: downloading each of the installers, executing them, configuring the system to understand them.
- **Package manager**: downloading the package manager *Chocolatey* and use it to automatically install all required software.

We recommend the second option (the package manager) because we consider it to be more streamlined.

## Manual installation

### g++

For manually installing 'g++' on Windows, you need to download *MinGW*, which is the the version of the C++ compliler that better works on Windows. You can download the installer from [here](https://nuwen.net/mingw.html), particularly the file 'mingw-19.0.exe' (or newer if there is one). You need to execute the installer, following the [instructions](https://nuwen.net/mingw.html#install).

We recommend to install it on the default folder, 'C:\', which will create 'C:\MinGW'. 

You will then need to set up some *environment variables* (search for "environment variables" on Windows):
- Add 'C:\MinGW\bin' to the 'PATH' environment variable.


## Package manager