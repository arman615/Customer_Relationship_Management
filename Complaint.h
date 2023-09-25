#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    std::string name;
    std::string contactInfo;

public:
    Customer(const std::string &name, const std::string &contactInfo);
    const std::string &getName() const;
    const std::string &getContactInfo() const;
};

#endif // CUSTOMER_H
