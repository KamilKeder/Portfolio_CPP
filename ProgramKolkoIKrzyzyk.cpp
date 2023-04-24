#include "ProgramKolkoIKrzyzyk.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
int AktualnyRuch = 1, WynikGracz = 0, WynikKomputer = 0;
string WyborGracza, WyborKomputera;
string p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8", p9 = "9";
void menu(), planszakolkoikrzyzyk(), ruchgracza(), ruchkomputera(), sprawdzenie();
void KolkoIKrzyzyk() {
    system("cls");
    int AktualnyRuch = 1;
    p1 = "1", p2 = "2", p3 = "3", p4 = "4", p5 = "5", p6 = "6", p7 = "7", p8 = "8", p9 = "9";
    planszakolkoikrzyzyk();
}
void planszakolkoikrzyzyk() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Gra kolko i krzyzyk" << endl;
    cout << "Gracz: " << WynikGracz << " Komputer: " << WynikKomputer << endl;
    cout << "Plansza" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << endl;
    cout << "     |     |     " << endl;
    cout << "Ktore pole chcesz zaznaczyc kolkiem?" << endl;
    cout << endl;
    WyborGracza = _getch();
    if (WyborGracza == "0") {
        menu();
    }
    else {
        ruchgracza();
    }
}
void ruchgracza() {
    if (WyborGracza == p1) {
        p1 = "O";
    }
    else if (WyborGracza == p2) {
        p2 = "O";
    }
    else if (WyborGracza == p3) {
        p3 = "O";
    }
    else if (WyborGracza == p4) {
        p4 = "O";
    }
    else if (WyborGracza == p5) {
        p5 = "O";
    }
    else if (WyborGracza == p6) {
        p6 = "O";
    }
    else if (WyborGracza == p7) {
        p7 = "O";
    }
    else if (WyborGracza == p8) {
        p8 = "O";
    }
    else if (WyborGracza == p9) {
        p9 = "O";
    }
    else if (WyborGracza != "1" || WyborGracza != "2" || WyborGracza != "3" || WyborGracza != "4" || WyborGracza != "5" || WyborGracza != "6" || WyborGracza != "7" || WyborGracza != "8" || WyborGracza != "9") {
        planszakolkoikrzyzyk();
    }
    AktualnyRuch = 2;
    sprawdzenie();
}
void sprawdzenie() {
    if (p7 == "O" && p8 == "O" && p9 == "O" ||
        p7 == "O" && p5 == "O" && p3 == "O" ||
        p7 == "O" && p4 == "O" && p1 == "O" ||
        p8 == "O" && p5 == "O" && p2 == "O" ||
        p9 == "O" && p6 == "O" && p3 == "O" ||
        p4 == "O" && p5 == "O" && p6 == "O" ||
        p1 == "O" && p2 == "O" && p3 == "O" ||
        p1 == "O" && p5 == "O" && p9 == "O") {
        WynikGracz++;
        system("cls");
        cout << "Gra kolko i krzyzyk" << endl;
        cout << "Gracz: " << WynikGracz << " Komputer: " << WynikKomputer << endl;
        cout << "Plansza" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << endl;
        cout << "     |     |     " << endl;
        cout << "Gratulacje wygrales!!!" << endl;
        cout << endl << "Nacisnij Enter aby zaczac ponownie." << endl; getchar(); getchar();
        KolkoIKrzyzyk();

    }
    else if (p7 == "X" && p8 == "X" && p9 == "X" ||
        p7 == "X" && p5 == "X" && p3 == "X" ||
        p7 == "X" && p4 == "X" && p1 == "X" ||
        p8 == "X" && p5 == "X" && p2 == "X" ||
        p9 == "X" && p6 == "X" && p3 == "X" ||
        p4 == "X" && p5 == "X" && p6 == "X" ||
        p1 == "X" && p2 == "X" && p3 == "X" ||
        p1 == "X" && p5 == "X" && p9 == "X") {
        WynikKomputer++;
        system("cls");
        cout << "Gra kolko i krzyzyk" << endl;
        cout << "Gracz: " << WynikGracz << " Komputer: " << WynikKomputer << endl;
        cout << "Plansza" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << endl;
        cout << "     |     |     " << endl;
        cout << "Przegrales!!!" << endl;
        cout << endl << "Nacisnij Enter aby zaczac ponownie." << endl; getchar(); getchar();
        KolkoIKrzyzyk();
    }
    else if (p1 != "1" && p2 != "2" && p3 != "3" && p4 != "4" && p5 != "5" && p6 != "6" && p7 != "7" && p8 != "8" && p9 != "9") {
        system("cls");
        cout << "Gra kolko i krzyzyk" << endl;
        cout << "Gracz: " << WynikGracz << " Komputer: " << WynikKomputer;
        cout << "Plansza" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << endl;
        cout << "     |     |     " << endl;
        cout << "Remis!!!" << endl;

        cout << endl << "Nacisnij Enter aby zaczac ponownie." << endl; getchar(); getchar();
        KolkoIKrzyzyk();

    }
    else {
        if (AktualnyRuch == 2) {
            AktualnyRuch = 1;
            ruchkomputera();
        }
        else {
            system("cls");
            planszakolkoikrzyzyk();
        }
    }
}
void ruchkomputera() {
    int i = (rand() % 9 + 1);
    WyborKomputera = to_string(i);

    if (WyborKomputera == p1 && p1 != "X" && p1 != "O") {
        p1 = "X";
    }
    else if (WyborKomputera == p2 && p2 != "X" && p2 != "O") {
        p2 = "X";
    }
    else if (WyborKomputera == p3 && p3 != "X" && p3 != "O") {
        p3 = "X";
    }
    else if (WyborKomputera == p4 && p4 != "X" && p4 != "O") {
        p4 = "X";
    }
    else if (WyborKomputera == p5 && p5 != "X" && p5 != "O") {
        p5 = "X";
    }
    else if (WyborKomputera == p6 && p6 != "X" && p6 != "O") {
        p6 = "X";
    }
    else if (WyborKomputera == p7 && p7 != "X" && p7 != "O") {
        p7 = "X";
    }
    else if (WyborKomputera == p8 && p8 != "X" && p8 != "O") {
        p8 = "X";
    }
    else if (WyborKomputera == p9 && p9 != "X" && p9 != "O") {
        p9 = "X";
    }
    else {
        ruchkomputera();
    }
    sprawdzenie();
}