#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramQuiz.h"

using namespace std;
void quizstart(), menu(), pytanie2(), pytanie3();
int numerpytania, nrliniiquiz, wynikquiz;

void Quiz() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Quiz" << endl << "---------------------" << endl;
    cout << "Wybierz akcje:" << endl;
    cout << "1. Rozpocznij Quiz." << endl;
    char quizwybor;
    quizwybor = _getch();
    switch (quizwybor) {
    case '0':
        menu();
        break;
    case '1':
        quizstart();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
    Quiz();
}
void quizstart() {
    system("cls");
    fstream zapis;
    numerpytania = 1, nrliniiquiz = 0, wynikquiz = 0;
    zapis.open("quizpytania.txt", ios::in);
    string zmiennaquiz, wyswietlanepytanie, odpowiedziquiz[12];
    while (getline(zapis, zmiennaquiz)) {
        odpowiedziquiz[nrliniiquiz] = zmiennaquiz;
        nrliniiquiz++;
    };
    zapis.close();
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Quiz" << endl << "---------------------" << endl;
    cout << "Pytanie nr " << numerpytania << "/3" << endl;

    cout << odpowiedziquiz[0] << endl;
    cout << "Wybierz odpowiedz:" << endl;
    cout << "1. " << odpowiedziquiz[1] << endl;
    cout << "2. " << odpowiedziquiz[2] << endl;
    cout << "3. " << odpowiedziquiz[3] << endl;
    char quizwybor;
    quizwybor = _getch();
    switch (quizwybor) {
    case '0':
        Quiz();
        break;
    case '1':
        wynikquiz++;
        pytanie2();
        break;
    case '2':case '3':
        pytanie2();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
    quizstart();
}
void pytanie2() {
    system("cls");
    fstream zapis;
    nrliniiquiz = 0;
    zapis.open("quizpytania.txt", ios::in);
    string zmiennaquiz, wyswietlanepytanie, odpowiedziquiz[12];
    while (getline(zapis, zmiennaquiz)) {
        odpowiedziquiz[nrliniiquiz] = zmiennaquiz;
        nrliniiquiz++;
    };
    zapis.close();
    numerpytania++;
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Quiz" << endl << "---------------------" << endl;
    cout << "Pytanie nr " << numerpytania << "/3" << endl;

    cout << odpowiedziquiz[4] << endl;
    cout << "Wybierz odpowiedz:" << endl;
    cout << "1. " << odpowiedziquiz[5] << endl;
    cout << "2. " << odpowiedziquiz[6] << endl;
    cout << "3. " << odpowiedziquiz[7] << endl;
    char quizwybor;
    quizwybor = _getch();
    switch (quizwybor) {
    case '0':
       Quiz();
        break;
    case '2':
        wynikquiz++;
        pytanie3();
        break;
    case '1':case '3':
        pytanie3();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
    pytanie2();

}
void pytanie3() {
    system("cls");
    fstream zapis;
    nrliniiquiz = 0;
    zapis.open("quizpytania.txt", ios::in);
    string zmiennaquiz, wyswietlanepytanie, odpowiedziquiz[12];
    while (getline(zapis, zmiennaquiz)) {
        odpowiedziquiz[nrliniiquiz] = zmiennaquiz;
        nrliniiquiz++;
    };
    zapis.close();
    numerpytania++;
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Quiz" << endl << "---------------------" << endl;
    cout << "Pytanie nr " << numerpytania << "/3" << endl;

    cout << odpowiedziquiz[8] << endl;
    cout << "Wybierz odpowiedz:" << endl;
    cout << "1. " << odpowiedziquiz[9] << endl;
    cout << "2. " << odpowiedziquiz[10] << endl;
    cout << "3. " << odpowiedziquiz[11] << endl;
    char quizwybor;
    quizwybor = _getch();
    switch (quizwybor) {
    case '0':
        Quiz();
        break;
    case '3':
        wynikquiz++;
        system("cls");
        cout << "Koniec quizu, twoj wynik wynosi: " << wynikquiz << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
        Quiz();
        break;
    case '2':case '1':
        system("cls");
        cout << "Koniec quizu, twoj wynik wynosi: " << wynikquiz << endl;
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
        Quiz();
        break;
    }
    system("cls");
    cout << "Nieprawidlowy wybor, sprobuj ponownie." << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; _getch();
    pytanie3();


}