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
            cout << "Lista zwierz¹t" << endl;
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
        << "3. Policz zwierzêta." << endl
        << "0. Powrót" << endl
        << "---------------------" << endl
        << "Wybór: ";
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
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj imiê zwierzêcia." << endl
        << "Imie: "; cin >> dodawanienazwa;
    system("cls");
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj rasê zwierzêcia." << endl
        << "Rasa: "; cin >> dodawanierasa;
    system("cls");
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Podaj wiek zwierzêcia." << endl
        << "Wiek: "; cin >> dodawaniewiek;
    s[ilosczwierzat].dodawaniezwierzecia(dodawanienazwa, dodawanierasa, dodawaniewiek);
    system("cls");
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Dodano pomyœlnie zwierze" << endl << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ilosczwierzat++;
    Zwierzeta();


}