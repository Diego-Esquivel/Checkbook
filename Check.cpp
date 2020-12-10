#include "Check.h"

Check::Check() : amount(0) {
    payTo = new char();
    checkNumber = 0;
}
Check::Check(const double amount) : amount(amount) {
    payTo = new char();
    checkNumber = 0;
}
Check::Check(const char& payTo) {
    this->payTo = &payTo;
    amount = 0;
    checkNumber = 0;
}
Check::Check(const double amount, const char& payTo) : amount(amount) {
    this->setPayTo(payTo);
    checkNumber = 0;

}

void Check::setAmount(const double amount) {
    this->amount = amount;
}
double Check::getAmount() const {
    return amount;
}
void Check::setCheckNumber(const int checkNumber) {
    this->checkNumber = checkNumber;
}
int Check::getCheckNumber() const {
    return checkNumber;
}
void Check::setPayTo(const char& payTo) {
    this->payTo = &payTo;
}
const char* Check::getPayTo() const {
    return payTo;
}