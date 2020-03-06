#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"

int main() {

    std::string a, b, c, f, g, h;
    int d;
    double e;
    char ch,
            terminator;

    showSeat SEAT;
    customer CUST;
    show SHOW;
    ticket *TICK;

    CUST.getLogin();
    CUST.getProfileInfo(f, g, h);

    system("CLS");

    std::cout << "\n---------- MAIN MENU ----------\n" << std::endl;
    std::cout << "1. Buy tickets for upcoming shows" << std::endl;
    std::cout << "2. Log out\n" << std::endl;
    std::cout << "Please enter a menu choice number: ";
    std::cin.get(ch);
    while (ch != '1' && ch != '2') {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Please select a valid menu choice number: ";
        std::cin.get(ch);
    }
    if (ch == '2') {
        return EXIT_SUCCESS;
    }
    do {
        SHOW.selectShow(a, b);
        c = SHOW.selectTime();
        do {
            std::cout << "\nAre you happy with your chouce (Y = Yes, N = No)?: ";
            std::cin.get(ch);
        } while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
        std::cin.get(terminator);
    } while (ch == 'N' || ch == 'n');

    SEAT.initialiserFloorPlan();
    d = SEAT.getNumSeats();
    e = SEAT.getSeatSelection();

}
