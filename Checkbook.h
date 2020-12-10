#ifndef CHECKBOOK_
#define CHECKBOOK_

#include "Check.h"
#include "LinkedList.h"


class Checkbook {
private:
    LinkedList<Check>* checks;
    double currentBalance;
    int nextCheckNumber = 1;
public:
    Checkbook();
    Checkbook(const double currentBalance);
    Checkbook(const LinkedList<Check>& checks);
    Checkbook(const double currentBalance, const LinkedList<Check>& checks);
    Checkbook(const Check check);
    Checkbook(const double currentBalance, const Check check);

    void setCurrentBalance(const double currentBalance);
    double getCurrentBalance();
    void setCheck(const Check check);
    Check getCheck(const int position = 1);
};

#endif