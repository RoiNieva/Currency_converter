#include "USD.h"

double USD:: convert(double amount) {
    return amount * 0.018; // PHP to USD
}
std::string USD:: getCurrencyName() {
    return "USD";
}