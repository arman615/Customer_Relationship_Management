#include "WarrantyService.h"

WarrantyService::WarrantyService(const Sale &sale, const std::string &user, double serviceCost)
    : sale(sale), user(user), serviceCost(serviceCost) {}

const Sale &WarrantyService::getSale() const {
    return sale;
}

const std::string &WarrantyService::getUser() const {
    return user;
}

double WarrantyService::getServiceCost() const {
    return serviceCost;
}
