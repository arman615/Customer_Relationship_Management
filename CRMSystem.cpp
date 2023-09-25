#include "CRMSystem.h"
#include <iostream>
#include <fstream>

void CRMSystem::saveReportToFile(const Customer &customer, const std::string &report) {
    std::ofstream file(customer.getName() + "_report.txt");
    if (file.is_open()) {
        file << report;
        file.close();
        std::cout << "Report generated and saved to file successfully.\n";
    } else {
        std::cout << "Unable to generate report or save to file.\n";
    }
}

void CRMSystem::registerCustomer(const std::string &name, const std::string &contactInfo) {
    Customer newCustomer(name, contactInfo);
    customers.push_back(newCustomer);
    std::cout << "Customer registered successfully.\n";
}

void CRMSystem::recordSale(const Sale &sale) {
    sales.push_back(sale);
}

void CRMSystem::recordWarrantyService(const WarrantyService &warrantyService) {
    warrantyServices.push_back(warrantyService);
}

void CRMSystem::recordComplaint(const Complaint &complaint) {
    complaints.push_back(complaint);
}

void CRMSystem::generateReport(const std::string &customerName) {
    for (const
