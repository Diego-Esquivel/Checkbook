// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Check.h"
#include "Checkbook.h"

int main()
{
    ListInterface<int>* lit = new LinkedList<int>();
    lit->insert(1,7);
    std::cout << lit->getEntry(1) << std::endl;
    const char* character = "Fred\0";
    Check* check = new Check(77.77, *character);
    std::cout << check->getAmount() << std::endl;
    std::cout << check->getPayTo() << std::endl;
    Checkbook* checkbook = new Checkbook();
    checkbook->setCheck(*check);
    std::cout << checkbook->getCheck().getAmount() << std::endl;
    std::cout << "Hello World!\n";
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
