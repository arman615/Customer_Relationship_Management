#include "Complaint.h"

Complaint::Complaint(const Sale &sale, const std::string &user, const std::string &description)
    : sale(sale), user(user), description(description) {}

const Sale &Complaint::getSale() const {
    return sale;
}

const std::string &Complaint::getUser() const {
    return user;
}

const std::string &Complaint::getDescription() const {
    return description;
}
