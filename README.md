# CAPD example application

An example CAPD-based project that depends on the CAPD library installed already in the system.

## Getting started

In order to perform the build it is necessary to have `git`, `cmake` and `make` tools installed as well as C++ compiler with C++17 support.

Let CAPD library be installed in `<path>` directory. In order to set up and run the example it is necessary to perform the following commands.

1. Clone this repository:

        git clone https://github.com/CAPDGroup/CAPD.example.1

2. Configure and build the project (the option `-DCMAKE_PREFIX_PATH=<path>` is not necessary if CAPD library is installed in standard directory such as `/usr` or `/usr/local`):

        cd CAPD.example.1
        cmake -B build -DCMAKE_PREFIX_PATH=<path>
        cd build
        make

    The build can be made quicker by using `make -j <n>` instead of `make`, where `<n>` is the number of parallel jobs.

3. Run the application

        ./capd_example


### Source code organization

Source files of the example are placed in `src` directory, with the entry point located in `main.cpp` file. In order to extend your project with multiple source files, no changes in `CMakeLists.txt` file are needed. You just put your source files directly into `src` folder and CMake build system will find them automatically. In order to rebuild your application after introducing changes into the code, it is necessary to call `make` in `build` directory only.
