// week3opdr1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2;

    cout << "nummer vergelijking, geeff mij 2 getallen en dan kijk ik of deze groter klijner of gelijk zijn aan 2: \n";
    cin >> n1;
    cin >> n2;

    if (n1 < 2)
        cout << "het eerste nummer is minder dan 2\n";
    if (n2 < 2)
        cout << "het tweede nummer is minder dan 2\n";

    if (n1 > 2)
        cout << "het eerste nummer is meer dan 2\n";
    if (n2 > 2)
        cout << "het tweede nummer is meer dan 2\n";

    if (n1 == 2)
        cout << "het eerste nummer is gelijk aan 2\n";
    if (n2 == 2)
        cout << "het tweede nummer is  2\n";
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
