#include "Sale.h"

Sale::Sale(const std::string &date, const std::string &user, double amount, int warrantyPeriod)
    : date(date), user(user), amount(amount), warrantyPeriod(warrantyPeriod) {}

const std::string &Sale::getDate() const {
    return date;
}

const std::string &Sale::getUser() const {
    return user;
}

double Sale::getAmount() const {
    return amount;
}

int Sale::getWarrantyPeriod() const {
    return warrantyPeriod;
}
