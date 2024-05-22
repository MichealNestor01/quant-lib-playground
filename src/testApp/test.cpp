#include <iostream>
#include <ql/time/date.hpp>


int main()
{
    std::cout << std::endl << "===Test QuantLib===" << std::endl;

    QuantLib::Date veryFirstDate(1, QuantLib::January, 1901);
    QuantLib::Date anotherVeryFirstDate(367);
    QuantLib::Date yetAnotherVeryFirstDate(veryFirstDate);
    std::cout << (QuantLib::Date(10, QuantLib::December, 1979)).weekday() << std::endl;

    std::cout << veryFirstDate << std::endl;
    std::cout << anotherVeryFirstDate << std::endl;
    std::cout << yetAnotherVeryFirstDate << std::endl;

    std::cout << QuantLib::Date::minDate() << std::endl;
    std::cout << QuantLib::Date::maxDate() << std::endl;
    return 0;
}