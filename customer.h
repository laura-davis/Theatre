//
// Created by Laura Davis on 06/03/2020.
//

#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H

#endif //UNTITLED_CUSTOMER_H

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

class customer {
public:
    customer();

    ~customer();

    void getLogin();

    void getProfileInfo(string &fName, string &sName, string &address);

    void getPaymentInfo();

protected:
    string fName;
    string sName;
    string address;
};

customer::customer() {
    fName = "";
    sName = "";
    address = "";
}

customer::~customer() {}

void customer::getLogin() {
    string username;
    string password;
    std::cout
            << "\n---------- Welcome to the Bucks Centre for the Performing Arts Ticket Purchasing System! ----------\n"
            << std::endl;
    std::cout << "          Please log in.          " << std::endl;
    std::cout << "Enter username: ";
    getline(cin, username);
    while (username.length() > 10) {
        std::cout << "Your username should be no more than 10 characters long." << std::endl;
        std::cout << "Please re-enter your usename: ";
        getline(cin, username);
    }
    std::cout << "Enter password: ";
    getline(cin, password);

    while (password.length() > 10) {
        std::cout << "Your password should be no more than 10 characters long." << std::endl;
        std::cout << "Please re-enter your password: ";
        getline(cin, password);
    }
}

void customer::getProfileInfo(string &fName, string &sName, string &address) {
};
