#ifndef CHECK_
#define CHECK_
#include <iostream>
#include <string>
using std::string;
class Check {
private:
    int checkNumber;
    double amount;
    string payTo;
public:
    Check();
    
    void setAmount(const double amount);
    double getAmount() const;
    void setCheckNumber(const int checkNumber);
    int getCheckNumber() const;
    void setPayTo(const string payTo);
    string getPayTo() const;

    friend std::ostream& operator << (std::ostream& out, const Check& c);
    Check operator =(const Check& right);
};

#endif