#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramLogowanie.h"

using namespace std;
string WprowadzonyLogin, WprowadzoneHaslo, LoginDoKonta = "admin", HasloDoKonta = "admin";
void menu();
void Logowanie() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zaloguj si�" << endl << "---------------------" << endl << "Podaj Login: ";
    cin >> WprowadzonyLogin;
    if (WprowadzonyLogin == "0") {
        exit(0);
    }
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zaloguj si�" << endl << "---------------------" << endl<< "Podaj has�o: ";
    cin >> WprowadzoneHaslo;
    if (WprowadzoneHaslo == "0") {
        exit(0);
    }
    system("cls");
    if ((WprowadzonyLogin == LoginDoKonta) && (WprowadzoneHaslo == HasloDoKonta)) {
        system("cls");
        cout << "Zalogowano pomy�lnie" << endl;
        cout << endl << "Naci�nij Enter aby przej�� dalej." << endl;
        _getch();
        menu();


    }
    else {
        system("cls");
        cout << "Nieprawid�owy login lub has�o, spr�buj ponownie." << endl;
        cout << endl << "Naci�nij Enter aby przej�� dalej." << endl; _getch();
        Logowanie();
    }
}