// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Checkbook.h"

int main()
{
    string character = "Fred";
    Check check1;
    check1.setAmount(77.77);
    check1.setPayTo(character);
    Checkbook* checkbook = new Checkbook();
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->deposit(5000.00);
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->writeCheck(check1);
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->writeCheck(80., "Arnold");
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->writeCheck(600., "Pedro");
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->writeCheck(600., "Hamlet");
    std::cout << *checkbook;
    std::cout << std::endl;
    std::cout << std::endl;
    checkbook->writeCheck(10000., "Tim");
    std::cout << *checkbook;
    std::cout << std::endl;
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
