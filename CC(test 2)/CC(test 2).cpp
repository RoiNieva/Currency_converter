// CC(test 2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CurrencyConverter.h"
#include "USD.h"
#include "EUR.h"
#include "JPY.h"
#include "PHP.h"


//pllss
int main() {
   USD* usd = new USD();
    EUR* eur = new EUR();
    JPY* jpy = new JPY();
   PHP* php = new PHP();

    double amount ;
    std::cout << " Enter any Amount (Base amount is php)" << std::endl;
    std::cin >> amount;

    std::cout << amount << " PHP = " << usd->convert(amount) << " " << usd->getCurrencyName() << std::endl;
    std::cout << amount << " PHP = " << eur->convert(amount) << " " << eur->getCurrencyName() << std::endl;
    std::cout << amount << "PHP = " << jpy->convert(amount) << " " << jpy->getCurrencyName() << std::endl;
    std::cout << amount << " PHP = " << php->convert(amount) << " " << php->getCurrencyName() << std::endl;

    delete usd;
    delete eur;
    delete jpy;
    delete php;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
