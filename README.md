# CAPD example application
## Overview
Mini-project demonstrating how to compile cmake application that links to CAPD library using capd-config script.

## Getting started
In order to perform the build, it is necessary to have CAPD library already installed in your system. 

Clone the repository:

    git clone https://github.com/CAPDGroup/CAPD.example.1
    
Enter the repository, create the build folder, configure the repository and then build:

    cd CAPD.example.1
    mkdir build
    cd build
    cmake .. -CAPD_PREFIX=<capd_prefix>
    make

The commands above will build an example executable. We emphasize that `<capd_prefix>` is the path to existing CAPD installation.
