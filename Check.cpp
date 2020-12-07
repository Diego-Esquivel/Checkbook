#include "Check.h"

Check::Check(){

}
Check::Check(const double amount) : amount(amount){

}
Check::Check(const char* payTo) {
    this->setPayTo(payTo);
}
Check::Check(const double amount, const char* payTo) : amount(amount){
    this->setPayTo(payTo);
}

void Check::setAmount(const double amount){
    this->amount = amount;
}
double Check::getAmount() const{
    return amount;
}
void Check::setCheckNumber(const int checkNumber){
    this->checkNumber = checkNumber;
}
int Check::getCheckNumber() const{
    return checkNumber;
}
void Check::setPayTo(const char* payTo){
    *this->payTo = *payTo;
}
char* Check::getPayTo() const{
    return payTo;
}