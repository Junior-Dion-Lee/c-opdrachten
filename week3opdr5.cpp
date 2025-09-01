// week3opdr5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int uur = 50;  
    int gast = 15; 
    int totaal = 0;
    int y;

    cout << "Hoeveel passagiers zijn er? (Maximaal 50)\n";

    while (true) {
        cin >> y;

        // Controleer of de invoer geldig is
        if (cin.fail() || y < 0 || y > 50) {
            cout << "Ongeldige invoer! Voer een getal in tussen 0 en 50.\n";
            cin.clear();               // Herstel de cin-status
            cin.ignore(10000, '\n');   // Negeer de rest van de invoer
        }
        else {
            break; // Geldige invoer, we gaan verder
        }
    }

    for (int x = 0; x < y; x++) {
        totaal += gast;
    }

    int winst = totaal - uur;

    cout << "De winst is: " << winst << " euro.\n";

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
