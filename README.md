# CAPD example application

An example CAPD-based project.

## Getting started

In order to perform the build, it is necessary to have CAPD library already installed in your system. 

1. Clone this repository:

        git clone https://github.com/CAPDGroup/CAPD.example.1

2. Modify `CMakeLists.txt` file so that `CAPD_PREFIX` variable points to an installation directory of CAPD library.

3. Configure and build the project

        mkdir build
        cd build
        cmake ..
        make

4. Run the application

        ./capd_example

