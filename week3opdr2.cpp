// week3opdr2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>
int main()
{
    int dropjes = 10;
    int handjes;
    std :: string will;


    while (dropjes > 0) {
        cout << "er zijn " << dropjes << " dropjes wil jer er een paar zo ja, tiep dan ja, zo niet tiep dan nee\n";
        cin >> will;
        if (will == "ja") {
            cout << "hoe veel? ik heb er 10\n";
            cin >> handjes;

            if (cin.fail()) {
                cout << "ongeldig antwoord je moet mij een aantal geven in nummers\n";
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            if (handjes > 0 && handjes <= dropjes) {
                cout << "hier " << handjes << " dropjes :)\n";
                dropjes -= handjes;
            } else if (handjes <= 0) {
                cout << "okay dan niet\n";
            } else {
                cout << "zo veel heb ik er niet\n";
            };
        }
        if (will == "nee") {
            cout << "okay meschien later\n";
        }
    };
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
