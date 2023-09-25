#ifndef SALE_H
#define SALE_H

#include <string>

class Sale {
private:
    std::string date;
    std::string user;
    double amount;
    int warrantyPeriod;

public:
    Sale(const std::string& date, const std::string& user, double amount, int warrantyPeriod);
    const std::string& getDate() const;
    const std::string& getUser() const;
    double getAmount() const;
    int getWarrantyPeriod() const;
};

#endif // SALE_H
