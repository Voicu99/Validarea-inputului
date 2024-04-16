// Validarea inputului.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numar;
    char continua;

    do {
        do {
            // Solicităm utilizatorului să introducă un număr între 1 și 100
            std::cout << "Introduceti un numar intre 1 si 100: ";
            std::cin >> numar;

            // Verificăm dacă numărul introdus este în intervalul specificat
            if (numar < 1 || numar > 100) {
                std::cout << "Numarul introdus nu este in intervalul specificat. Te rog sa reintroduci.\n";
            }
        } while (numar < 1 || numar > 100);

        std::cout << "Numarul introdus este: " << numar << std::endl;

        // Intrebam utilizatorul daca doreste sa introduca un alt numar
        std::cout << "Doriti sa introduceti alt numar? (Y/N): ";
        std::cin >> continua;
    } while (continua == 'Y' || continua == 'y');

    return 0;
}