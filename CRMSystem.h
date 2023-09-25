#ifndef CRMSYSTEM_H
#define CRMSYSTEM_H

#include "Customer.h"
#include "Sale.h"
#include <vector>
#include <iostream>

class CRMSystem {
private:
    std::vector<Customer> customers;
    std::vector<Sale> sales;

public:
    void registerCustomer(const std::string& name, const std::string& contactInfo);
    void recordSale(const Sale& sale);
    void generateReport(const std::string& customerName);
};

#endif // CRMSYSTEM_H
