#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramZwierzeta.h"
#include "Zwierze.h"

using namespace std;
string dodawanienazwa;
string dodawanierasa;
int dodawaniewiek;

Zwierze s[1];
int ilosczwierzat = 0;
void Zwierzeta() {
    void menu(), DodajZwierze();
    system("cls");
    cout << "Zwierzeta" << endl;
        if (ilosczwierzat > 0) {
            cout << "---------------------" << endl;
            cout << "Lista zwierz�t" << endl;
            cout << "---------------------" << endl;
        }
    for (int i = 0; i < ilosczwierzat; i++) {       
        cout << i + 1 << ". "; s[i].wyswietlaniezwierzecia(); cout << endl;

    }
    cout << "---------------------" << endl;
        cout << "Menu" << endl
        << "---------------------" << endl
        << "Wybierz" << endl
        << "1. Dodaj zwierze." << endl
        << "2. Usun zwierze." << endl
        << "3. Policz zwierz�ta." << endl
        << "0. Powr�t" << endl
        << "---------------------" << endl
        << "Wyb�r: ";
    int wybor = _getch();
    system("cls");
    switch(wybor) {
    case '1':
        DodajZwierze();
        break;
    case '2':
        break;
    case '3':
        break;
    case '0':
        menu();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Zwierzeta();
}
void DodajZwierze() {
    system("cls");
    cout << "Zwierz�ta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj imi� zwierz�cia." << endl
        << "Imie: "; cin >> dodawanienazwa;
    system("cls");
    cout << "Zwierz�ta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj ras� zwierz�cia." << endl
        << "Rasa: "; cin >> dodawanierasa;
    system("cls");
    cout << "Zwierz�ta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj wiek zwierz�cia." << endl
        << "Wiek: "; cin >> dodawaniewiek;
    s[ilosczwierzat].dodawaniezwierzecia(dodawanienazwa, dodawanierasa, dodawaniewiek);
    system("cls");
    cout << "Zwierz�ta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Dodano pomy�lnie zwierze" << endl << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ilosczwierzat++;
    Zwierzeta();


}