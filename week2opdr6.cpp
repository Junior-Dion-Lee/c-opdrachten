// week2opdr6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int kom1 = 8;
    int kom2 = 11;
    int kom3 = 0;

    // Verplaatsen van vissen van kom1 naar kom3
    while (kom1 > 0) {
        cout << "vissen in david zijn kom: " << kom1 - 1 << ", vissen in derde kom: " << kom3 + 1 << "\n";
        kom1--;
        kom3++;
    }

    // Verplaatsen van vissen van kom2 naar kom3
    while (kom2 > 0) {
        cout << "vissen in david zijn kom: " << kom2 - 1 << ", vissen in derde kom: " << kom3 + 1 << "\n";
        kom2--;
        kom3++;
    }

    // Terugzetten van vissen van kom3 naar kom1
    while (kom1 < 8) {
        cout << "vissen in david zijn kom: " << kom1 + 1 << ", vissen in derde kom: " << kom3 - 1 << "\n";
        kom1++;
        kom3--;
    }

    // Terugzetten van vissen van kom3 naar kom2
    while (kom2 < 11) {
        cout << "vissen in david zijn kom: " << kom2 + 1 << ", vissen in derde kom: " << kom3 - 1 << "\n";
        kom2++;
        kom3--;
    }

    return 0;
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
