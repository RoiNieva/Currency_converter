#ifndef JPY_H
#define JPY_H
#include "CurrencyConverter.h"

class JPY : public CurrencyConverter {
public:
    double convert(double amount) override;
    
     std::string getCurrencyName() override;
};
#endif 

