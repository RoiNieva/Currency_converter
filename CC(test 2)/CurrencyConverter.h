#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H

#include <iostream>
#include <string>
#include <map>

class CurrencyConverter {
public:
    virtual double convert(double amount) = 0;
    virtual std::string getCurrencyName() = 0;
};
#endif