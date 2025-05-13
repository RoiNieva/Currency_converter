#include "JPY.h"
double JPY:: convert(double amount)  {
    return amount * 2.64; // Example conversion rate
}
std::string JPY:: getCurrencyName()  {
    return "JPY";
}