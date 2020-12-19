#include "Checkbook.h"

Checkbook::Checkbook() {
    checks = new LinkedList<Check>();
    currentBalance = 0.;
}

std::ostream& operator << (std::ostream& out, const Checkbook& c) {
    out << "Current Balance: $" << c.currentBalance << std::endl;
    for (int count = 1; count < c.nextCheckNumber; count++) {
        out << c.checks->getEntry(count);
        out << std::endl;
    }
    return out;
}

Checkbook Checkbook::operator =(const Checkbook& right) {
    if (this != &right) {
        if (checks != NULL)
            delete[] this->checks;
        currentBalance = right.currentBalance;
        nextCheckNumber = right.nextCheckNumber;
        checks = new LinkedList<Check>(*right.checks);
    }
    return *this;
}

bool Checkbook::deposit(double amount) {
    bool return_value = true;
    if (amount <= 0.)
        return_value = false;
    else {
        currentBalance += amount;
    }
    return return_value;
}

bool Checkbook::writeCheck(Check _check) {
    bool return_value = true;
    if (checks == nullptr)
        checks = new LinkedList<Check>();
    if (currentBalance < _check.getAmount()) {
        return_value = false;
        std::cout << "Amount of check exceeds current balance, could not write check.\n";
    }
    else {
        _check.setCheckNumber(nextCheckNumber);
        checks->insert(nextCheckNumber, _check);
        nextCheckNumber++;
        currentBalance -= _check.getAmount();
    }
    return return_value;
}

bool Checkbook::writeCheck(double _amount, string _payTo) {
    bool return_value = true;
    if (checks == nullptr)
        checks = new LinkedList<Check>();
    if (currentBalance < _amount) {
        return_value = false;
        std::cout << "Amount of check exceeds current balance, could not write check.\n";
    }
    else {
        Check check_;
        check_.setCheckNumber(nextCheckNumber);
        check_.setAmount(_amount);
        check_.setPayTo(_payTo);
        checks->insert(nextCheckNumber, check_);
        nextCheckNumber++;
        currentBalance -= _amount;
    }
    return return_value;
}