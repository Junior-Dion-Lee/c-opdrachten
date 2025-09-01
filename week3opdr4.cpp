// week3opdr4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string>

int main()
{
    int film;
    int std;
    int film1 = 0;
    int film2 = 0;
    int film3 = 0;
    int film4 = 0;
    int film5 = 0;

    cout << "hoeveel studenten zijn er?\n";
    cin >> std;
    cout << "je moet kiezen tussen 5 films als je weet welke je het leukste vind typ dan het bijbehorende getal in.\n";
    cout << "1 - spiderman acros the spiderverse\n";
    cout << "2 - the wolf of walstreet\n";
    cout << "3 - avatar way of the water\n";
    cout << "4 - star wars revenge of the sith\n";
    cout << "5 - batman bigins\n";

    while (std > 0) {

        cout << "welke film kies je (1/5)\n";
        cin >> film;

        switch (film)
        {
        case 1:
            film1++;
            break;
        case 2:
            film2++;
            break;
        case 3:
            film3++;
            break;
        case 4:
            film4++;
            break;
        case 5:
            film5++;
        default:
            cout << "Ongeldige keuze. Kies een getal tussen 1 en 5.\n";
            continue;
        }
        std--;
    }
    cout << "resultaten\n";
    cout << "\nspiderman acros the spiderverse - "; cout << film1; cout << "\n";
    cout << "the wolf of walstreet - "; cout << film2; cout << "\n";
    cout << "avatar way of the water - "; cout << film3; cout << "\n";
    cout << "star wars revenge of the sith - "; cout << film4; cout << "\n";
    cout << "batman bigins - "; cout << film5; cout << "\n";


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
