// week2-opdr2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "hoeveel broodjes heb je mee genomen naar school?\n";
    int b1;
    std::cin >> b1;
    std::cout << "hoeveel broodjes heb je mee genomen naar school?\n";
    int b2;
    std::cin >> b2;
    std::cout << "hoeveel broodjes heb je mee genomen naar school?\n";
    int b3;
    std::cin >> b3;
    std::cout << "hoeveel broodjes heb je mee genomen naar school?\n";
    int b4;
    std::cin >> b4;
    std::cout << "hoeveel broodjes heb je mee genomen naar school?\n";
    int b5;
    std::cin >> b5;

    int bt = b1 + b2 + b3 + b4 + b5;

    std::cout << "totaale aantal proodjes:\n";
    std::cout << bt;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
