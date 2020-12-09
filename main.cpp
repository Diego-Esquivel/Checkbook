#include <iostream>
#include "Checkbook.h"

using std::cout;
using std::endl;
using std::system;

int main(){
    Checkbook checkbook;
    checkbook.setCheck(Check(9000,"Fredrick Willson"));
    cout << checkbook.getCheck().getAmount() << endl << checkbook.getCheck().getPayTo() << endl;
    system("PAUSE");
}