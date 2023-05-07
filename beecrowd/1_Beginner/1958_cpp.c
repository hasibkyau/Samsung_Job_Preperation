#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>


std::string getStrCpy(double dbl) {
    std::ostringstream str;
    str << std::scientific << std::setprecision(10) << dbl;
    std::string s = str.str();
    std::cout << s; // Prints 3.0000000000e+00
    return s;
}

int main() {

    double d = 3.0;
    std::cout.precision(10);
    std::cout << std::scientific;

    std::cout << d << '\n'; // Prints 3.0000000000e+00
    getStrCpy(d); // Will also print 3.0000000000e+00

    return 0;
}
