#include "Checkbook.h"

Checkbook::Checkbook() {
    checks = new LinkedList<Check>();
    currentBalance = 0.;
}
Checkbook::Checkbook(const double currentBalance) {
    this->currentBalance = currentBalance;
    checks = new LinkedList<Check>();
}
Checkbook::Checkbook(const LinkedList<Check>& checks) {
    *(this->checks) = checks;
    currentBalance = 0;
    nextCheckNumber = checks.getLength() + 1;
}
Checkbook::Checkbook(const double currentBalance, const LinkedList<Check>& checks) {
    this->currentBalance = currentBalance;
    *(this->checks) = checks;
    nextCheckNumber = checks.getLength() + 1;
}
Checkbook::Checkbook(const Check check) {
    this->checks->insert(nextCheckNumber, check);
    nextCheckNumber++;
}
Checkbook::Checkbook(const double currentBalance, const Check check) {
    this->currentBalance = currentBalance;
    checks->insert(nextCheckNumber, check);
    nextCheckNumber++;
}

void Checkbook::setCurrentBalance(const double currentBalance) {
    this->currentBalance = currentBalance;
}
double Checkbook::getCurrentBalance() {
    return currentBalance;
}
void Checkbook::setCheck(const Check check) {
    checks->insert(nextCheckNumber, check);
}
Check Checkbook::getCheck(const int position) {
    return checks->getEntry(position);
}