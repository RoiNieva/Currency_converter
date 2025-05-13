#ifndef PHP_H
#define PHP_H
#include "CurrencyConverter.h"

class PHP : public CurrencyConverter {
public:
    double convert(double amount) override;
    std::string getCurrencyName() override;
};
#endif 
