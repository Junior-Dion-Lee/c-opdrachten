// week4opdr3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string hobbys[5]; // Array met 5 hobby's

    // Vraag de gebruiker om 5 hobby's in te voeren
    for (int i = 0; i < 5; i++) {
        cout << "Voer hobby " << (i + 1) << " in: ";
        cin >> hobbys[i];

        // Laat de laatste invoer niet zien
        if (i == 4) {
            cout << "Laatste hobby wordt nog niet getoond!\n";
        }
    }

    // Toon alle ingevoerde hobby's
    cout << "\nJe hobby's zijn:\n";
    for (int i = 0; i < 5; i++) {
        cout << "- " << hobbys[i] << endl;
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
