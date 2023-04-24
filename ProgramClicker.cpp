#include "ProgramClicker.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
int StanKonta = 0, UlepszeniePraca = 1, wyborclicker;
void menu(), zapiszclicker(), wczytajclicker();

void Clicker() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Clicker" << endl << "---------------------" << endl;
    cout << "Stan konta: " << StanKonta << "$" << endl << "---------------------" << endl;
    cout << "Wybierz akcje:" << endl;
    cout << "1. Pracuj. [+" << UlepszeniePraca << "$]" << endl;
    cout << "2. Ulepsz prace [5$] - Kazdy poziom zwieksza przyplwy $ z pracy o 1." << endl;
    cout << "3. Zapisz gre." << endl;
    cout << "4. Wczytaj gre." << endl;
    cout << endl;
    wyborclicker = _getch();
    switch (wyborclicker) {
    case '1':
        StanKonta = StanKonta + UlepszeniePraca;
        Clicker();
        break;
    case '2':
        if (StanKonta >= 5) {
            UlepszeniePraca++;
            StanKonta = StanKonta - 5;
        }
        else {
            cout << "Brakuje ci " << 5 - StanKonta << "$, musisz miec minimum 5$ aby ulepszyc.";
            cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar();
        }
        Clicker();
        break;

    case '3':
        zapiszclicker();
        break;
    case '4':
        wczytajclicker();
        break;
    case '0':
        menu();
        break;
    }

    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    Clicker();



}
void zapiszclicker() {
    fstream zapis;
    zapis.open("zapisclicker.txt", ios::out);
    zapis << StanKonta << endl;
    zapis << UlepszeniePraca << endl;
    zapis.close();
    system("cls");
    cout << "Pomyslnie zapisano gre." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar();
    Clicker();
}
void wczytajclicker() {
    fstream zapis;
    zapis.open("zapisclicker.txt", ios::in);
    if (zapis.good() == false) {
        system("cls");
        cout << "Nie ma zadnego zapisu!!!" << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar();
        Clicker();
    }
    else {
        string zmiennaclicker;
        int nrlinii = 1;
        while (getline(zapis, zmiennaclicker)) {
            switch (nrlinii) {
            case 1: StanKonta = stoi(zmiennaclicker);
                break;

            case 2: UlepszeniePraca = stoi(zmiennaclicker);
                break;
            }
            nrlinii++;
        }
        zapis.close();
        system("cls");
        cout << "Pomyslnie wczytano gre." << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar();
        Clicker();
    }
}