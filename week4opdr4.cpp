// week4opdr4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    char word[] = { 'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n' }; // Array met 8 letters
    int length = sizeof(word) / sizeof(word[0]); // Lengte van de array berekenen

    // Toon eerste, vijfde en laatste letter
    cout << "Eerste letter: " << word[0] << endl;
    cout << "Vijfde letter: " << word[4] << endl;
    cout << "Laatste letter: " << word[length - 1] << endl;

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
