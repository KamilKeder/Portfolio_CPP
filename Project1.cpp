#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramKalkulator.h"
#include "ProgramOdliczanie.h"
#include "ProgramKolkoIKrzyzyk.h"
#include "ProgramSortowanie.h"
#include "ProgramClicker.h"
#include "ProgramQuiz.h"
#include "ProgramLogowanie.h"
#include "ProgramZwierzeta.h"
#include "ProgramSprawdzKolizje.h"
#include "Bazadanych.h"
#include "Spoj.h"

using namespace std;
void menu();
void menu() {
    system("cls");
    cout << "Wybierz aplikacje" << endl;
    cout << "1. Kalkulator" << endl;
    cout << "2. Odliczanie" << endl;
    cout << "3. Kolko i krzyzyk" << endl;
    cout << "4. Clicker" << endl;
    cout << "5. Quiz" << endl;
    cout << "6. Sortowanie" << endl;
    cout << "7. Zwierzęta" << endl;
    cout << "8. Sprawdzanie kolizji." << endl;
    cout << "9. Polski SPOJ." << endl;
    cout << "10. Baza Danych." << endl;
    cout << "0. Zakoncz" << endl;
    cout << endl;
    string WybranaAplikacja;
    cin >> WybranaAplikacja;
    system("cls");
    if (WybranaAplikacja == "1") {
        ProgramKalkulator();
    }
    else if (WybranaAplikacja == "2") {
        ProgramOdliczanie();
    }
    else if (WybranaAplikacja == "3") {
        KolkoIKrzyzyk();
    }
    else if (WybranaAplikacja == "4") {
        Clicker();
    }
    else if (WybranaAplikacja == "5") {
        Quiz();
    }
    else if (WybranaAplikacja == "6") {
        Sortowanie();
    }
    else if (WybranaAplikacja == "7") {
        Zwierzeta();
    }
    else if (WybranaAplikacja == "8") {
        ProgramSprawdzKolizje();
    }
    else if (WybranaAplikacja == "9") {
        Spoj_Lista();
    }
    else if (WybranaAplikacja == "10") {
        Bazadanych();
    }
    else if (WybranaAplikacja == "0") {
        exit(0);
    }
    else {
        system("cls");
        cout << "Nieprawidlłwy wybór, spróbuj ponownie." << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
        _getch();
        menu();
    }
}

int main(){
    setlocale(LC_CTYPE, "Polish");
    ProgramKalkulator();
    menu();
    Spoj_Lista();
    Logowanie();
}