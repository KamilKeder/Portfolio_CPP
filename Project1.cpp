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
#include "Spoj.h"

using namespace std;
void menu(), MemoryGame();
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
    cout << "0. Zakoncz" << endl;
    cout << endl;
    int WybranaAplikacja = _getch();
    system("cls");
    switch (WybranaAplikacja) {
    case '1':
        ProgramKalkulator();
        break;
    case '2':
        ProgramOdliczanie();
        break;
    case '3':
        KolkoIKrzyzyk();
        break;
    case '4':
        Clicker();
        break;
    case '5':
        Quiz();
        break;
    case '6':
        Sortowanie();
        break;
    case '7':
        Zwierzeta();
        break;
    case '8':
        ProgramSprawdzKolizje();
        break;
    case '0':
        exit(0);
        break;
    }
        system("cls");
        cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
        _getch();
        menu();
    

}

int main(){
    setlocale(LC_CTYPE, "Polish");
    Spoj_Lista();
    Logowanie();
}