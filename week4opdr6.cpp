// week4opdr6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Verjaardag {
    string naam;
    int dag;
    int maand;
};

vector<Verjaardag> verjaardagen; // Opslag van verjaardagen

void toonVerjaardagen(int maand) {
    cout << "Verjaardagen in maand " << maand << ":\n";
    for (const auto& v : verjaardagen) {
        if (v.maand == maand) {
            cout << v.naam << " is jarig op " << v.dag << endl;
        }
    }
}

void nieuweVerjaardag() {
    Verjaardag v;
    cout << "Naam: ";
    cin >> v.naam;
    cout << "Dag: ";
    cin >> v.dag;
    cout << "Maand: ";
    cin >> v.maand;
    verjaardagen.push_back(v);
}

int main() {
    int keuze;
    while (true) {
        cout << "\nMenu:\n1. Toon verjaardagen\n2. Nieuwe verjaardag toevoegen\n3. Afsluiten\nKeuze: ";
        cin >> keuze;

        switch (keuze) {
        case 1:
            int maand;
            cout << "Welke maand? ";
            cin >> maand;
            toonVerjaardagen(maand);
            break;
        case 2:
            nieuweVerjaardag();
            break;
        case 3:
            return 0;
        default:
            cout << "Ongeldige keuze.\n";
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
