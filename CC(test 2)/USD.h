#ifndef USD_H
#define USD_H
#include "CurrencyConverter.h"

class USD : public CurrencyConverter {
public:
    double convert(double amount) override;
    std::string getCurrencyName() override;
};


#endif 


