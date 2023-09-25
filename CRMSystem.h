#ifndef CRMSYSTEM_H
#define CRMSYSTEM_H

#include "Customer.h"
#include "Sale.h"
#include "WarrantyService.h"
#include "Complaint.h"
#include <vector>
#include <string>

class CRMSystem {
private:
    std::vector<Customer> customers;
    std::vector<Sale> sales;
    std::vector<WarrantyService> warrantyServices;
    std::vector<Complaint> complaints;

    void saveReportToFile(const Customer &customer, const std::string &report);

public:
    void registerCustomer(const std::string &name, const std::string &contactInfo);
    void recordSale(const Sale &sale);
    void recordWarrantyService(const WarrantyService &warrantyService);
    void recordComplaint(const Complaint &complaint);
    void generateReport(const std::string &customerName);
    void generateAndSaveReportToFile(const std::string &customerName);
};

#endif // CRMSYSTEM_H
