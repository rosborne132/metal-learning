# Learning Metal with metal-cpp

Learn Metal using **metal-learning**.

## Overview

This project is an example C++ app using the Metal API for graphic rendering.

This README presents how to build the project and describes how each sample accomplishes a specific task using Metal.

## Dependencies

Dependencies include **libs/metal-cpp** and **libs/metal-cpp-extensions** libraries.

Use UNIX make utility to build the project.

This project requires C++17 support (available since Xcode 9.3).

## Building with Make

To build the app using a Makefile, open the terminal and run the `make` command. The build process will put the executables into the `build/` folder.

Pass the following options to make change the build configuration:

* `DEBUG=1` : disable optimizations and include symbols (`-g`).
* `ASAN=1` : build with address sanitizer support (`-fsanitize=address`).

## Building with scripts

To build the app with scripts, run the following commands in the root directory:
```bash
./main.sh debug // Creates a build and runs the app in a new window.
./main.sh clean // Cleans the build directory.
```
