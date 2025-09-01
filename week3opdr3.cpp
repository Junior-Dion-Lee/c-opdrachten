// week3opdr3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int aantalStudenten;
    double cijfer, totaal = 0;

    // Vraag hoeveel studenten er zijn
    cout << "Hoeveel studenten zijn er? ";
    cin >> aantalStudenten;

    // Controleer of het aantal studenten geldig is
    if (aantalStudenten <= 0) {
        cout << "Ongeldig aantal studenten.\n";
        return 1; // Stop het programma met foutcode
    }

    // Vraag de cijfers van elke student
    for (int i = 1; i <= aantalStudenten; i++) {
        cout << "Voer het cijfer in voor student " << i << ": ";
        cin >> cijfer;

        // Controleer of de invoer geldig is
        if (cin.fail() || cijfer < 0 || cijfer > 10) {
            cout << "Ongeldige invoer! Voer een cijfer tussen 0 en 10 in.\n";
            cin.clear(); // Herstel foutstatus
            cin.ignore(10000, '\n'); // Verwijder foute invoer
            i--; // Probeer opnieuw voor dezelfde student
            continue;
        }

        totaal += cijfer; // Tel het cijfer op
    }

    // Bereken en toon het gemiddelde
    double gemiddelde = totaal / aantalStudenten;
    cout << "Het gemiddelde cijfer van de klas is: " << gemiddelde << endl;

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
