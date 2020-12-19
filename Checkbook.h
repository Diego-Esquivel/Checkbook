#ifndef CHECKBOOK_
#define CHECKBOOK_

#include "Check.h"
#include "LinkedList.h"
#include <iostream>
#include <iomanip>


class Checkbook {
private:
    LinkedList<Check>* checks;
    double currentBalance;
    int nextCheckNumber = 1;
public:
    Checkbook();

    bool deposit(double amount);
    bool writeCheck(Check);
    bool writeCheck(double, string);

    friend std::ostream& operator << (std::ostream& out, const Checkbook& c);
    Checkbook operator =(const Checkbook& right);
};

#endif