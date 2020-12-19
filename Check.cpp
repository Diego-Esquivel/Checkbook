#include "Check.h"

Check::Check() : amount(0) {
    payTo = "";
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
void Check::setPayTo(const string payTo) {
    this->payTo = payTo;
}
string Check::getPayTo() const {
    return payTo;
}

std::ostream& operator << (std::ostream& out, const Check& c) {
    out << "\t\tCheck #: " << c.checkNumber << std::endl << "  Pay To: " << c.getPayTo() << "\t  Amount: " << c.amount << std::endl;
    return out;
}

Check Check::operator =(const Check& right) {
    if (this != &right) {
        checkNumber = right.checkNumber;
        amount = right.amount;
        setPayTo(right.payTo);
    }
    return *this;
}