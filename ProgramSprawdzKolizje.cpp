#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramSprawdzKolizje.h"
#include "ObiektySprawdzane.h"

using namespace std;
Prostokat prs(0, 0, 6, 4);
Punkt pkt(3, 1);
void sprawdzanie(Punkt pkt, Prostokat p) {

    if (pkt.x >= p.x1 && pkt.y >= p.y1 && pkt.x <= p.x1 + p.x2 && pkt.y <= p.y1 + p.y2) {
        system("cls");
        cout << "Sprawdzanie Kolizji" << endl;
        cout << "---------------------" << endl;
        cout << "Sprawdzenie" << endl
            << "---------------------" << endl
            << "Punkt o wspó³rzêdnych x = " << pkt.x << " oraz y = " << pkt.y << endl
            << "Prostok¹t o wspó³rzêdnych x = " <<p.x1 <<" oraz y = " << p.y1 << " szerokoœci = " << p.x2 << " wysokoœci = " << p.y2 << endl
            << "---------------------" << endl
            << "Punkt koliduje z prostok¹tem." << endl
            << "---------------------" << endl
            << endl << "Nacisnij Enter aby przejsc dalej." << endl;
        _getch();
        ProgramSprawdzKolizje();
    }
    else {
        system("cls");
        cout << "Sprawdzanie Kolizji" << endl;
        cout << "---------------------" << endl;
        cout << "Sprawdzenie" << endl
            << "---------------------" << endl
            << "Punkt o wspó³rzêdnych x = " << pkt.x << " oraz y = " << pkt.y << endl
            << "Prostok¹t o wspó³rzêdnych x = " << p.x1 << " oraz y = " << p.y1 << " szerokoœci = " << p.x2 << " wysokoœci = " << p.y2 << endl
            << "---------------------" << endl
            << "Punkt nie koliduje z prostok¹tem." << endl
            << "---------------------" << endl
            << endl << "Nacisnij Enter aby przejsc dalej." << endl;
        _getch();
        ProgramSprawdzKolizje();
    }
}

void ProgramSprawdzKolizje() {
    void menu(), DodajZwierze();
    system("cls");
    cout << "Sprawdzanie Kolizji" << endl;
    cout << "---------------------" << endl;
    cout << "Menu" << endl
        << "---------------------" << endl
        << "Wybierz" << endl
        << "1. Dodaj punkt." << endl
        << "2. Dodaj prostok¹t." << endl
        << "3. Sprawdz kolizje." << endl
        << "0. Powrót" << endl
        << "---------------------" << endl
        << "Wybór: ";
    int wybor = _getch();
    system("cls");
    switch (wybor) {
    case '1':
        pkt.wprowadzenie();
        ProgramSprawdzKolizje();
        break;
    case '2':
        prs.wprowadzenie();
        ProgramSprawdzKolizje();
        break;
    case '3':
        sprawdzanie(pkt, prs);
        break;
    case '0':
        menu();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    ProgramSprawdzKolizje();
}