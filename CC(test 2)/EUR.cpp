#include "EUR.h"

double EUR:: convert(double amount)  {
    return amount * 0.016; // Example conversion rate
}
std::string EUR:: getCurrencyName() {
    return "EUR";
}