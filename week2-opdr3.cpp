// week2-opdr3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float c1, c2, c3, c4, c5;
    std::cout << "hey wat was jou cijfer op de laatste toets? (gebruik in plaats van commaas punten)\n";
    std::cin >> c1;

    std::cout << "hey wat was jou cijfer op de laatste toets? (gebruik in plaats van commaas punten)\n";
    std::cin >> c2;

    std::cout << "hey wat was jou cijfer op de laatste toets? (gebruik in plaats van commaas punten)\n";
    std::cin >> c3;
    
    std::cout << "hey wat was jou cijfer op de laatste toets? (gebruik in plaats van commaas punten)\n";
    std::cin >> c4;

    std::cout << "hey wat was jou cijfer op de laatste toets? (gebruik in plaats van commaas punten)\n";
    std::cin >> c5;

    float gc = (c1 + c2 + c3 + c4 + c5) / 5;
    std::cout << "jullie gemiddelde cijfer is: " << gc << std::endl;


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
