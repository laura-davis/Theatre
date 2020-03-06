//
// Created by Laura Davis on 06/03/2020.
//

#ifndef UNTITLED_SHOW_H
#define UNTITLED_SHOW_H

#endif //UNTITLED_SHOW_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class show {
public:
    show();

    ~show();

    void selectShow(string &showName, string &showDate);

    string selectTime();

protected:
    string showName;
    string showDate;
    string showTime;
};

show::show() {
    showName = "";
    showDate = "";
    showTime = "";
}

show::~show() {

}

void show::selectShow(string &showName, string &showDate) {
    char ch;
    char terminator;
    system("CLS");
    std::cout << "\n---------- SELECT AN UPCOMING SHOW ----------\n" << std::endl;
    std::cout << "1. Star Wars: The Musical (20/05/2013)" << std::endl;
    std::cout << "2. Les Miserables (21/05/2013)" << std::endl;
    std::cout << "3. The Phantom of the Opera (22/05/2013)" << std::endl;

    std::cin.clear();
    std::cin.ignore(100, '\n');
    std::cout << "Please select a show number: ";
    std::cin.get(ch);

    while (ch != '1' && ch != '2' && ch != '3') {
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Please select a valid show number: ";
        std::cin.get(ch);
    }
    switch (ch) {
        case '1':
            showName = "Star Wars: The Musical", showDate = "20/05/2013";
            break;
        case '2':
            showName = "Les Miserables", showDate = "21/05/2013";
            break;
        case '3':
            showName = "The Phantom of the Opera", showDate = "22/05/2013";
            break;
    }
    this->showName = showName;
    this->showDate = showDate;

    std::cin.get(terminator);
}

string show::selectTime() {
};