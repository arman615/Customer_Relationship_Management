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
    for (const Customer &customer: customers) {
        if (customer.getName() == customerName) {
            std::cout << "Customer Details:\n";
            std::cout << "Name: " << customer.getName() << std::endl;
            std::cout << "Contact Info: " << customer.getContactInfo() << std::endl;
            std::cout << "Interaction History:\n";

            // Sales
            for (const Sale &sale: sales) {
                if (sale.getUser() == customerName) {
                    std::cout << "Sale - Date: " << sale.getDate() << ", Amount: $" << sale.getAmount()
                              << ", Warranty Period: " << sale.getWarrantyPeriod() << " months" << std::endl;
                }
            }

            // Warranty Services
            for (const WarrantyService &warrantyService: warrantyServices) {
                if (warrantyService.getUser() == customerName) {
                    std::cout << "Warranty Service - Sale Date: " << warrantyService.getSale().getDate()
                              << ", Service Cost: $" << warrantyService.getServiceCost() << std::endl;
                }
            }

            // Complaints
            for (const Complaint &complaint: complaints) {
                if (complaint.getUser() == customerName) {
                    std::cout << "Complaint - Sale Date: " << complaint.getSale().getDate()
                              << ", Description: " << complaint.getDescription() << std::endl;
                }
            }

            return;
        }
    }
    std::cout << "Customer \"" << customerName << "\" not found.\n";
}

void CRMSystem::generateAndSaveReportToFile(const std::string &customerName) {
    for (const Customer &customer: customers) {
        if (customer.getName() == customerName) {
            std::string report = "Customer Details:\n";
            report += "Name: " + customer.getName() + "\n";
            report += "Contact Info: " + customer.getContactInfo() + "\n";
            report += "Interaction History:\n";

            for (const Sale &sale: sales) {
                if (sale.getUser() == customerName) {
                    report += "Sale - Date: " + sale.getDate() + ", Amount: $" + std::to_string(sale.getAmount())
                              + ", Warranty Period: " + std::to_string(sale.getWarrantyPeriod()) + " months\n";
                }
            }

            for (const WarrantyService &warrantyService: warrantyServices) {
                if (warrantyService.getUser() == customerName) {
                    report += "Warranty Service - Sale Date: " + warrantyService.getSale().getDate()
                              + ", Service Cost: $" + std::to_string(warrantyService.getServiceCost()) + "\n";
                }
            }

            for (const Complaint &complaint: complaints) {
                if (complaint.getUser() == customerName) {
                    report += "Complaint - Sale Date: " + complaint.getSale().getDate()
                              + ", Description: " + complaint.getDescription() + "\n";
                }
            }

            saveReportToFile(customer, report);
            return;
        }
    }
    std::cout << "Customer \"" << customerName << "\" not found.\n";
}
