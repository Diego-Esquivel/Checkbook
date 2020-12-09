#include "Checkbook.h"

Checkbook::Checkbook(){

}
Checkbook::Checkbook(const double currentBalance){
    this->currentBalance = currentBalance;
}
Checkbook::Checkbook(const LinkedList<Check>& checks) {
    *(this->checks) = checks;
}
Checkbook::Checkbook(const double currentBalance, const LinkedList<Check>& checks){
    this->currentBalance = currentBalance;
    *(this->checks) = checks;
    nextCheckNumber = checks.getEntry(checks.getLength()).getCheckNumber() + 1;
}
Checkbook::Checkbook(const Check check){
    this->checks->insert(nextCheckNumber, check);
    nextCheckNumber++;
}
Checkbook::Checkbook(const double currentBalance, const Check check){
    this->currentBalance = currentBalance;
    checks->insert(nextCheckNumber, check);
    nextCheckNumber++;
}
        
void Checkbook::setCurrentBalance(const double currentBalance){
this->currentBalance = currentBalance;
}
double Checkbook::getCurrentBalance(){
return currentBalance;
}
void Checkbook::setCheck(const Check check){
    checks->insert(nextCheckNumber, check);
}
Check Checkbook::getCheck(const int position){
    return checks->getEntry(position);
}