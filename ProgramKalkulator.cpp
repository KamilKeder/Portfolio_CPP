#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramKalkulator.h"
using namespace std;
void ProgramKalkulator(){
char wybor;
int x, y;
void menu();
system("cls");
cout << "Kalkulator" << endl
<< "---------------------" << endl
<< "Menu" << endl
<< "---------------------" << endl
<< "Wybierz" << endl
<< "1. Dodawanie" << endl
<< "2. Odejmowanie" << endl
<< "3. Mno�enie" << endl
<< "4. Dzielenie" << endl
<< "5. Pot�gowanie" << endl
<< "6. Pierwiastkowanie" << endl
<< "0. Powr�t" << endl
<< "---------------------" << endl
<< "Wyb�r: ";
wybor = _getch();
system("cls");
if (wybor == '1') {
    cout << "Dzia�anie x + y " << endl
        << "---------------------" << endl
        << "Podaj Liczb� x:" << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" << endl
        << "Podaj Liczb� y:" << endl << "Liczba y = ";
    cin >> y;
    cout << "---------------------" << endl
        << "Wynik dodawania " << x << " + " << y << " = " << x + y << endl << "---------------------" << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ProgramKalkulator();
}
else if (wybor == '2') {
    cout << "Dzia�anie x - y "<< endl
        << "---------------------" << endl
        << "Podaj Liczb� x: " << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" << endl
        << "Podaj Liczb� y: " << endl << "Liczba y = ";
    cin >> y;
    cout << "---------------------" << endl
        << "Wynik odejmowania " << x << " - " << y << " = " << x - y << endl << "---------------------" << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ProgramKalkulator();
}
else if (wybor == '3') {
    cout << "Dzia�anie x * y " <<endl<< "---------------------" << endl
        << "Podaj Liczb� x: " << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" << endl << "Podaj Liczbe y: " << endl << "Liczba y = ";
    cin >> y;
    cout << "---------------------" <<endl << "Wynik mno�enia " << x << " * " << y << " = " << x * y << endl << "---------------------" << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ProgramKalkulator();

}
else if (wybor == '4') {
    cout << "Dzia�anie x : y "<<endl << "---------------------" << endl << "Podaj Liczb� x: " << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" <<endl << "Podaj Liczbe y: " <<  endl << "Liczba y = ";
    cin >> y;
    cout << "---------------------" << endl << "Wynik dzielenia " << x << " : " << y << " = " << x / y << endl << "---------------------" <<
        endl << "Naci�nij Enter aby przej�� dalej." << endl;
    _getch(); 
    ProgramKalkulator();
}
else if (wybor == '5') {
    cout << "Dzia�anie x^y " <<endl << "---------------------" << endl
        << "Podaj Liczbe x: " << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" << endl << "Podaj Liczbe y: " << endl << "Liczba y = ";
    cin >> y;
    cout << "---------------------" << endl << "Wynik pot�gowania " << x << "^" << y << " = " << pow(x, y) << endl;
    cout << "---------------------" << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ProgramKalkulator();
}
else if (wybor == '6') {
    cout << "Dzialanie pierwiastek z x " <<endl << "---------------------" << endl
        << "Podaj Liczb� x: " << endl << "Liczba x = ";
    cin >> x;
    cout << "---------------------" << endl << "Wynik pierwiastka z x = " << x << " = " << sqrt(x) << endl;
    cout << "---------------------" << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ProgramKalkulator();
}
else if (wybor == '0') {
    menu();
}
else {
    system("cls");
    cout << "Nieprawid�owy wyb�r." << endl << "---------------------"
    << endl << "Nacisnij Enter aby powr�ci�." << endl;
    _getch();
    ProgramKalkulator();
}
}