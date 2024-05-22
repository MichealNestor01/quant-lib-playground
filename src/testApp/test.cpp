#include <ql/quantlib.hpp>
#include <iostream>

int main() {
    QuantLib::Date d(1, QuantLib::January, 2015);
    std::cout << "The day of the week on 1st January 2015 was: " << d.weekday() << std::endl;
    return 0;
}