#ifndef COMPLAINT_H
#define COMPLAINT_H

#include "Sale.h"
#include <string>

class Complaint {
private:
    Sale sale;
    std::string user;
    std::string description;

public:
    Complaint(const Sale &sale, const std::string &user, const std::string &description);
    const Sale &getSale() const;
    const std::string &getUser() const;
    const std::string &getDescription() const;
};

#endif // COMPLAINT_H
