#include "CRMSystem.h"

int main() {
    CRMSystem crmSystem;

    crmSystem.registerCustomer("Arman", "arman@gmail.com");
    crmSystem.registerCustomer("Gago", "gago@gmail.com");

    Sale sale1("2023-07-15", "Arman", 500.0, 12);
    crmSystem.recordSale(sale1);

    Sale sale2("2023-07-16", "Gago", 750.0, 6);
    crmSystem.recordSale(sale2);

    WarrantyService warrantyService1(sale1, "Arman", 50.0);
    crmSystem.recordWarrantyService(warrantyService1);

    Complaint complaint1(sale2, "Gago", "Late delivery");
    crmSystem.recordComplaint(complaint1);

    crmSystem.generateReport("Arman");
    crmSystem.generateAndSaveReportToFile("Gago");

    return 0;
}
