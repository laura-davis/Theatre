//
// Created by Laura Davis on 06/03/2020.
//

#ifndef UNTITLED_SHOWSEAT_H
#define UNTITLED_SHOWSEAT_H

#endif //UNTITLED_SHOWSEAT_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class showSeat {
public:
    showSeat();

    ~showSeat();

    void initialiseFloorPlan();

    int getNumSeats();

    double getSeatSelection();

private:
    void displayFloorPlan(int r, int c);

    void calculatePrice(double &price);

protected:
    char floorPlan[7][6];
    int numSeats;
    int rNum;
    double price;
};

showSeat::showSeat() {
    for (int r = 0; r < 7; r++)
        for (int c = 0; c < 6; c++)
            floorPlan[r][c] = '0';
    numSeats = 0;
    rNum = 0;
    price = 0;
};

showSeat::~showSeat() {

}

void showSeat::initialiseFloorPlan() {
    for (int r = 0; r < 7; r++)
        for (int c = 0; c < 6; c++)
            floorPlan[r][c] = 'A';
}

int showSeat::getNumSeats() {
    system("CLS");
    std::cout << "\n---------- SELECT SEATS INTERACTIVELY ----------\n" << std::endl;
    do {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "\nHow many tickets would you like to purchase (max. 8)?: ";
        std::cin >> numSeats;
        std::cout << std::endl;
    } while (numSeats != 1 && numSeats != 2 && numSeats != 3 && numSeats != 4 & numSeats != 5 &&
             numSeats != 6 & numSeats != 7 && numSeats != 8);
    return numSeats;
}