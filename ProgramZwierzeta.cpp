#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "ProgramZwierzeta.h"
#include "Zwierze.h"
#include <vector>

using namespace std;
string dodawanienazwa;
string dodawanierasa;
int dodawaniewiek, wybor;
vector<Zwierze> s(1);
int ilosczwierzat = 0;
void Zwierzeta() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzeta" << endl;
    cout << "---------------------" << endl;
    WyswietlZwierzeta();
        cout << "Menu" << endl
        << "---------------------" << endl
        << "Wybierz" << endl
        << "1. Dodaj zwierze." << endl
        << "2. Usun zwierze." << endl
        << "3. Usuñ wszystkie zwierzêta." << endl
        << "4. Zapisz zwierzêta." << endl
        << "5. Wczytaj zwierzêta." << endl
        << "6. Usuñ zwierze z pliku zapisu." << endl
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
        UsunZwierze();
        break;
    case '3':
        UsunWszystkieZwierzeta();
        break;
    case '4':
        if (ilosczwierzat > 0) {
            ZapiszZwierzeta();
        }
        else {
            system("cls");
            cout << "Nie masz ¿adnych zwierz¹t do zapisania." << endl;
            cout << endl << "Nacisnij Enter aby powróciæ." << endl;
            _getch();
            Zwierzeta();
        }
        break;
    case '5':
        WczytajZwierzeta();
        break;
    case '6':
        UsunZPliku();
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
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
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
    system("cls");
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Dodano pomyœlnie zwierze" << endl << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    s.resize(ilosczwierzat + 1);
    s[ilosczwierzat].dodawaniezwierzecia(dodawanienazwa, dodawanierasa, dodawaniewiek);
    ilosczwierzat++;
    Zwierzeta();

}
void UsunZwierze() {
    int numer_zwierzecia;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzêta" << endl
        << "---------------------" << endl;
    WyswietlZwierzeta();
        cout << "Usuwanie" << endl
        << "---------------------" << endl
        << "Wpisz numer zwierzêcia które chcesz usun¹æ." << endl
        << "Numer: "; cin >> numer_zwierzecia;
        if (numer_zwierzecia == 0) {
            Zwierzeta();
        }
    if (ilosczwierzat > 0) {
        s.erase(s.begin() + numer_zwierzecia - 1);
        s.shrink_to_fit();
    }
    ilosczwierzat--;
    Zwierzeta();
}
void UsunWszystkieZwierzeta() {
    if (ilosczwierzat > 0) {
        s.clear();
        s.shrink_to_fit();
    }
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzêta" << endl
        << "---------------------" << endl
        << "Dodawanie" << endl
        << "---------------------" << endl
        << "Dodano pomyœlnie zwierze" << endl << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; getchar(); getchar();
    ilosczwierzat = 0;
    Zwierzeta();
}
void WyswietlZwierzeta() {
    if (ilosczwierzat > 0) {
        cout << "Lista zwierz¹t" << endl;
        cout << "---------------------" << endl;
        for (int i = 0; i < ilosczwierzat; i++) {
            cout << i + 1 << ". "; s[i].wyswietlaniezwierzecia(); cout << endl;
        }
        cout << "---------------------" << endl;
    }
}
void ZapiszZwierzeta() {
    int wybor;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzeta" << endl
        << "---------------------" << endl
        << "Zapisywanie Zwierz¹t" << endl
        << "---------------------" << endl
        << "Wybierz które zwierze chcesz zapisaæ:" << endl;
    WyswietlZwierzeta();
    cout << "Wybór: "; cin >> wybor;
    if (wybor == 0) {
        Zwierzeta();
    }
    fstream zapis;
    zapis.open("zapiszwierzeta.txt", ios::app);

    zapis << s[wybor-1].getNazwa() <<" " << s[wybor - 1].getRasa() << " " << s[wybor - 1].getWiek() << endl;
    zapis.close();
    system("cls");
    cout << "Pomyslnie zapisano zwierze "<< s[wybor - 1].getNazwa() << "." << endl;
    cout << endl << "Nacisnij Enter aby powróciæ." << endl; _getch();
    ZapiszZwierzeta();
}
void WczytajZwierzeta() {
    int wybor;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzeta" << endl
        << "---------------------" << endl
        << "Wczytywanie Zwierz¹t." << endl
        << "---------------------" << endl
        << "Wybierz które zwierze chcesz wczytaæ:" << endl;
    fstream zapis;
    zapis.open("zapiszwierzeta.txt");
    string imie, rasa;
    int wiek, numer = 1;
        while (zapis >> imie >> rasa >> wiek) {
        cout << numer << " Imie: " << imie << ", Rasa: " << rasa << ", Wiek: " << wiek << endl;
        numer++;
        }
        zapis.close();
    cout << "Wybór: "; cin >> wybor;
    numer = 1;
    zapis.open("zapiszwierzeta.txt");
    while (zapis >> imie >> rasa >> wiek) {
        if (numer == wybor) {
            dodawanienazwa = imie;
            dodawanierasa = rasa;
            dodawaniewiek = wiek;
            s.resize(ilosczwierzat + 1);
            s[ilosczwierzat].dodawaniezwierzecia(dodawanienazwa, dodawanierasa, dodawaniewiek);
            ilosczwierzat++;
        }
        numer++;
    }
    zapis.close();
    Zwierzeta();
}
void UsunZPliku() {
    int wybor;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Zwierzeta" << endl
        << "---------------------" << endl
        << "Usuwanie zwierz¹t z pliku." << endl
        << "---------------------" << endl
        << "Wybierz które zwierze chcesz usun¹æ:" << endl;
    fstream zapis;
    zapis.open("zapiszwierzeta.txt");
    string imie, rasa;
    int wiek, numer = 1;
    while (zapis >> imie >> rasa >> wiek) {
        cout << numer << " Imie: " << imie << ", Rasa: " << rasa << ", Wiek: " << wiek << endl;
        numer++;
    }
    zapis.close();
    cout << "Wybór: "; cin >> wybor;
    numer = 0;
    ifstream plikwejsciowy("zapiszwierzeta.txt");
    ofstream pliktymczasowy("temp.txt");
    string linia;
    while (getline(plikwejsciowy, linia)) {
        numer++;
        if (numer != wybor) {
            pliktymczasowy << linia << endl;
        }

    }
    plikwejsciowy.close();
    pliktymczasowy.close();
    string nazwapliku = "zapiszwierzeta.txt";
    remove(nazwapliku.c_str());
    rename("temp.txt", nazwapliku.c_str());
    Zwierzeta();
}