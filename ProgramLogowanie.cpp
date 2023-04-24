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
    cout << "Zaloguj siê" << endl << "---------------------" << endl << "Podaj Login: ";
    cin >> WprowadzonyLogin;
    if (WprowadzonyLogin == "0") {
        exit(0);
    }
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zaloguj siê" << endl << "---------------------" << endl<< "Podaj has³o: ";
    cin >> WprowadzoneHaslo;
    if (WprowadzoneHaslo == "0") {
        exit(0);
    }
    system("cls");
    if ((WprowadzonyLogin == LoginDoKonta) && (WprowadzoneHaslo == HasloDoKonta)) {
        system("cls");
        cout << "Zalogowano pomyœlnie" << endl;
        cout << endl << "Naciœnij Enter aby przejœæ dalej." << endl;
        _getch();
        menu();


    }
    else {
        system("cls");
        cout << "Nieprawid³owy login lub has³o, spróbuj ponownie." << endl;
        cout << endl << "Naciœnij Enter aby przejœæ dalej." << endl; _getch();
        Logowanie();
    }
}