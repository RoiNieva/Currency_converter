#ifndef EUR_H
#define EUR_H
#include "CurrencyConverter.h"

class EUR : public CurrencyConverter {
public:
    double convert(double amount) override;
    std::string getCurrencyName() override;
};

#endif