#pragma once

#include <string>
#include <sstream>
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
    {}

    StringNumber(std::string str)
    {
        std::stringstream ss{str};
        int val {};
        ss >> val;
        number = std::to_string(val);
    }

    explicit operator int()
    {
        std::cout << "conversion to int()\n";
        return std::stoi(number);
    }

    explicit operator std::string()
    {
        std::cout << "conversion to std::string()\n";
        return number;
    }


private:
    std::string number;
};
