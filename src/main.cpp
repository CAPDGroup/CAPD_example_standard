#include <iostream>
#include "capd/capdlib.h"

using namespace capd;

int main()
{
    std::cout.precision(17);

    IVector x = IVector{ 1.0, 2.0 } / interval(3.0);

    std::cout << x << '\n';

    return 0;
}
