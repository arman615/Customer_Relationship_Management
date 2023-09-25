#ifndef WARRANTIESERVICE_H
#define WARRANTIESERVICE_H

#include "Sale.h"
#include <string>

class WarrantyService {
private:
    Sale sale;
    std::string user;
    double serviceCost;

public:
    WarrantyService(const Sale &sale, const std::string &user, double serviceCost);
    const Sale &getSale() const;
    const std::string &getUser() const;
    double getServiceCost() const;
};

#endif // WARRANTIESERVICE_H
