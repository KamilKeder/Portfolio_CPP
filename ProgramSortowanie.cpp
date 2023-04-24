#include "ProgramSortowanie.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
void menu(), sortowaniestart();
void Sortowanie() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sortowanie" << endl << "---------------------" << endl;
    cout << "Wybierz akcje:" << endl;
    cout << "1. Rozpocznij sortowanie." << endl;
    char quizwybor;
    quizwybor = _getch();
    switch (quizwybor) {
    case '0':
        menu();
        break;
    case '1':
        sortowaniestart();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    Sortowanie();
}
void sortowaniestart() {
    int sortowanieiloscliczb, sortowaniezmienna, * sortowanietablica;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sortowanie" << endl << "---------------------" << endl;
    cout << "Ile liczb ma posortowac?" << endl;
    cin >> sortowanieiloscliczb;
    sortowanietablica = new int[sortowanieiloscliczb];
    for (int i = 0; i < sortowanieiloscliczb; i++) {
        system("cls");
        cout << "Podaj liczbe nr " << i + 1 << "/" << sortowanieiloscliczb << endl;
        cin >> sortowaniezmienna;
        sortowanietablica[i] = sortowaniezmienna;
    }
    system("cls");
    cout << endl << "Twoje liczby to:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << sortowanietablica[i] << " ";
    }
    for (int i = 1; i < sortowanieiloscliczb; i++) {
        for (int j = sortowanieiloscliczb - 1; j >= 1; j--) {
            if (sortowanietablica[j] > sortowanietablica[j - 1]) {
                int sortowanietablicazmienna = sortowanietablica[j - 1];
                sortowanietablica[j - 1] = sortowanietablica[j];
                sortowanietablica[j] = sortowanietablicazmienna;
            }
        }
    }
    cout << endl << "Twoje liczby posortowane to:" << endl;
    for (int i = 0; i < sortowanieiloscliczb; i++) {
        cout << sortowanietablica[i] << " ";
    }
    delete[] sortowanietablica;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    Sortowanie();
}