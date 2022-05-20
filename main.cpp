#include <iostream>

#include "Admin.h"
#include "AdminReport.h"
#include "CreditCard.h"
#include "CusCareReport.h"
#include "CustomerCareRepresentative.h"
#include "DebitCard.h"
#include "Food.h"
#include "GuestCustomer.h"
#include "Inquiry.h"
#include "Package.h"
#include "Payment.h"
#include "RegisterCustomer.h"
#include "Report.h"
#include "Reservation.h"

using namespace std;

int main()
{
    /* Createting objects */
    Admin *admin = new Admin();
    AdminReport *adminreport = new AdminReport();
    CreditCard *creditcard = new CreditCard();
    CusCareReport *cuscarereport = new CusCareReport();
    CustomerCareRepresentative *cuscarerep = new CustomerCareRepresentative();
    DebitCard *debitcard = new DebitCard();
    Food *food = new Food();
    GuestCustomer *guestcus = new GuestCustomer();
    Inquiry *inquiry = new Inquiry();
    Package *package = new Package();
    Payment *payment = new Payment();
    RegisterCustomer *regcus = new RegisterCustomer();
    Report *report = new Report();
    Reservation *reservation = new Reservation();

    /*Calling methods*/

    // Admin class
    admin->viewReservation();
    admin->viewPayment();
    admin->createPackages();
    admin->addReports();

    // AdminReport class
    adminreport->viewReport();

    // CreditCard class
    creditcard->paymentValidattion();
    creditcard->makeTransaction();
    creditcard->makePaymentInfo();
    creditcard->setDiscount();
    creditcard->getPayment();
    creditcard->displayRecipt();
    creditcard->PaymentInfo();

    // CusCareReport class
    cuscarereport->viewReport();

    // CustomerCareRepresentative class
    cuscarerep->viewInquiry();
    cuscarerep->callCustomer();
    cuscarerep->maintainReport();
    cuscarerep->addReports();
    cuscarerep->viewReservation();
    cuscarerep->viewPayment();
    cuscarerep->createPackages();
    cuscarerep->addReports();

    // DebitCard class
    debitcard->paymentValidattion();
    debitcard->makeTransaction();
    debitcard->makePaymentInfo();
    debitcard->setDiscount();
    debitcard->getPayment();
    debitcard->displayRecipt();
    debitcard->PaymentInfo();

    // Food class
    food->addItems();
    food->deleteItem();

    // GuestCustomer class
    guestcus->viewPackage();
    guestcus->viewContactUs();

    // Inquiry class
    inquiry->getInquiry();
    inquiry->displayInquiry();

    // Package class
    package->managePackage();
    package->displayPackage();
    package->addItemToPackage();
    package->addFood();

    // Payment class
    payment->makePaymentInfo();
    payment->setDiscount();
    payment->getPayment();
    payment->displayRecipt();
    payment->PaymentInfo();

    // RegisterCustomer class
    regcus->reservePackage();
    regcus->viewPackage();
    regcus->customizePackage();
    regcus->viewContactUs();
    regcus->makePayment();
    regcus->getDiscount();
    regcus->viewPackage();
    regcus->viewContactUs();

    // Report class
    report->viewReport();

    // Reservation class
    reservation->displayResinfo();
    reservation->addPackages();

    return 0;
}