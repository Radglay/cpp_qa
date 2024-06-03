#pragma once

#include <string>
#include <ostream>
#include <iostream>


class StringNumber
{
public:
    friend std::ostream& operator<<(std::ostream& out, const StringNumber& str)
    {
        out << "StringNumber: " << str.number;
        return out;
    }

    StringNumber(int n)
        : number{std::to_string(n)}
    {
        std::cout << "int C-Tor\n";
    }

    operator int()
    {
        std::cout << "conversion to int()\n";
        return std::stoi(number);
    }
private:
    std::string number;
};
