// week3opdr6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int keuze;

    // Oneindige lus totdat de gebruiker een geldige keuze maakt
    while (true) {
        // Menu tonen
        cout << "Welkom bij de koffiemachine!\n";
        cout << "Kies een koffievariant:\n";
        cout << "1. Espresso\n";
        cout << "2. Cappuccino\n";
        cout << "3. Latte Macchiato\n";
        cout << "4. Zwarte Koffie\n";
        cout << "5. Afsluiten\n";
        cout << "Maak een keuze (1-5): ";
        cin >> keuze;

        // Switch-statement om de keuze te verwerken
        switch (keuze) {
        case 1:
            cout << "Je hebt gekozen voor Espresso.\n";
            return 0;  // Programma afsluiten na een geldige keuze
        case 2:
            cout << "Je hebt gekozen voor Cappuccino.\n";
            return 0;
        case 3:
            cout << "Je hebt gekozen voor Latte Macchiato.\n";
            return 0;
        case 4:
            cout << "Je hebt gekozen voor Zwarte Koffie.\n";
            return 0;
        case 5:
            cout << "Bedankt voor je bezoek! Tot ziens.\n";
            return 0;
        default:
            cout << "Ongeldige keuze. Probeer opnieuw.\n\n";
            // Omdat we in een while-loop zitten, herhaalt het menu zich automatisch
        }
    }
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
