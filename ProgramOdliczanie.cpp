#include "ProgramOdliczanie.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
void ProgramOdliczanie() {
    int LiczbaSekund;
    void menu();
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Aplikacja odlicza liczbe sekund wpisana przez uzytkownika." << endl;
    cout << "Podaj ile sekund ma odliczac: ";
    cin >> LiczbaSekund;
    if (LiczbaSekund == 0) {
        menu();
    }
    else {
        system("cls");
        for (int i = 0; i <= LiczbaSekund; i++) {
            Sleep(1000);
            system("cls");
            cout << LiczbaSekund - i << endl;
        }
        Sleep(100);
        system("cls");
        cout << "Koniec odliczania." << endl << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
        ProgramOdliczanie();
    }
}