#ifndef CHECK_
#define CHECK_

class Check {
private:
    int checkNumber;
    double amount;
    const char* payTo;
public:
    Check();
    Check(const double amount);
    Check(const char& payTo);
    Check(const double amount, const char& payTo);

    void setAmount(const double amount);
    double getAmount() const;
    void setCheckNumber(const int checkNumber);
    int getCheckNumber() const;
    void setPayTo(const char& payTo);
    const char* getPayTo() const;
};

#endif