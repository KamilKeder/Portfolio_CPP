#include "Spoj.h"
#include <iostream>
#include <conio.h>
using namespace std;
int liczbarozwiazan = 5, wybor_spoj;
void menu();
void Liczby_Pierwsze() {
    int n, sprawdzana;
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Liczby Pierwsze "<< endl << "---------------------" << endl;
    cout << "Sprawdź, które spośród danych liczb są liczbami pierwszymi" << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "n - liczba testów n<100000, w kolejnych liniach n liczb z przedziału [1..10000]" << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Dla każdej liczby słowo TAK, jeśli liczba ta jest pierwsza, słowo: NIE, w przeciwnym wypadku." << endl << "---------------------" << endl;
    cout << "Podaj ile liczb chcesz sprawdzić." << endl << "---------------------" << endl;
    cout << "Ile liczb: "; cin >> n;
    if (n == 0) {
        Spoj_Lista();
    }
    cout << "---------------------" << endl << "Podaj Liczby" << endl;
    for (int i = 1; i <= n; i++) {
        int b = 0;
        cout << "Liczba " << i << " : ";
        cin >> sprawdzana;
        for (int a = 1; a <= sprawdzana; a++) {
            float z = sprawdzana;
            float y = a;
            float x = z / y;
            if (x - int(x) == 0) {
                b++;
            }
            if (b > 2) {
                a = sprawdzana;
                cout << "Liczba "<<sprawdzana <<" nie jest pierwsza." << endl;
            }
        }
        if (b == 2) {
            cout << "Liczba " << sprawdzana << " jest piersza." << endl;
        }
        if (b == 1) {
            cout << "Liczba " << sprawdzana << " nie jest pierwsza." << endl;
        }
    }
    cout << "---------------------" << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl; 
    _getch();
    Spoj_Lista();
}
void Czy_Umiesz_Potegowac() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Czy umiesz potęgować." << endl << "---------------------" << endl;
    cout << "Napisz program, który wczyta ze standardowego wejścia : podstawę a oraz wykładnik b, wyznaczy ostatnią cyfrę liczby ab, wypisze wynik na standardowe wyjście." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku podany jest w jednym wierszu, zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000)." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego przypadku z wejścia) cyfrę jedności liczby ab zapisanej dziesiętnie." << endl << "---------------------" << endl;
    cout << "Podaj ile liczb chcesz sprawdzić." << endl << "---------------------" << endl;
        int d;
        cout << "Ile liczb: "; cin >> d;
        if (d == 0) {
            Spoj_Lista();
        }
        cout << "---------------------" << endl << "Podaj Liczby" << endl;
        for (int i = 0; i < d; i++) {
            int a, b, wynik;
            cout << "Liczba: ";
            cin >> a; cout << "Liczba " << a << " do potęgi: ";
                cin>> b;
            if (b > 0) {
                if (b % 4 == 0) {
                    b = 4;
                }
                else {
                    b = b % 4;
                }
                wynik = a % 10;
                for (int j = 1; j < b; j++) {
                    wynik = (wynik * (a % 10)) % 10;
                }
                cout << "Ostatnia cyfra tej potęgi to: "<< wynik % 10 << endl;
                cout << "---------------------" << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
        cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
        _getch();
        Spoj_Lista();
}
void Flamaster() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Flamaster." << endl << "---------------------" << endl;
    cout << "Twoim zadaniem jest dla zadanego wyrazu, który wymyśliła Kasia, podanie skróconej wersji tego wyrazu." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "W pierwszej linijce wejścia znajduje się liczba naturalna C, 1 ≤ C ≤ 50, oznaczająca ilość zestawów danych. W kolejnych C wierszach wejścia znajdują się zestawy danych. Każdy zestaw składa się z niepustego wyrazu złożonego z samych dużych liter alfabetu amerykańskiego. Długość wyrazu nie przekracza 200 znaków." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Dla każdego zestawu danych, dla zadanego wyrazu, na wyjściu powinna znaleźć się jego skrócona wersja." << endl << "---------------------" << endl;
    cout << "Podaj ile słów chcesz sprawdzić." << endl << "---------------------" << endl;
    int n;
    cout << "Ile słów: "; cin >> n;
    if (n == 0) {
        Spoj_Lista();
    }
    for (int i = 0; i < n; i++) {
        string s;
        cout << "Twoje słowo: "; cin >> s;
        cout << "Twoje słowo po segregacji: ";
        int a = 0;
        for (int i1 = 0; i1 < s.size(); i1++) {
            if (i1 > 0) {
                if (s[i1] == s[i1 - 1] && i1 < s.size() - 1) {
                    a++;
                }
                else if (s[i1] == s[i1 - 1]) {
                    a++;
                    if (a == 1) {
                        cout << s[i1];
                        a = 0;
                    }
                    else {
                        cout << a + 1;
                        a = 0;
                    }
                }
                else if (a > 0) {
                    if (a == 1) {
                        cout << s[i1 - 1] << s[i1];
                        a = 0;
                    }
                    else {
                        cout << a + 1 << s[i1];
                        a = 0;
                    }
                }
                else {
                    cout << s[i1];
                }
            }
            else {
                cout << s[i1];
            }
        }
         cout << endl;
    }

    cout << "---------------------" << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Przedszkolanka() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Przedszkolanka." << endl << "---------------------" << endl;
    cout << "Pomóż sympatycznej przedszkolance i napisz program, który obliczy, ile cukierków powinna kupić." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "W pierwszym i jedynym wierszu zestawu danych znajdują się dwie liczby całkowite a i b(10 <= a, b <= 30), oddzielone pojedynczą spacją, oznaczające odpowiednio liczbę przedszkolaków w grupach, z których jedna zostanie przydzielona pani Agnieszce." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Wyniki programu powinny być wypisywane na standardowe wyjście. W kolejnych wierszach należy podać odpowiedzi obliczone dla kolejnych zestawów danych. Wynikiem dla jednego zestawu jest liczba cukierków, jaką powinna zakupić przedszkolanka." << endl << "---------------------" << endl;
    cout << "Podaj ile zestawów chcesz sprawdzić." << endl << "---------------------" << endl;
    int n;
    cout << "Ile zestawów: "; cin >> n;
    cout << "---------------------" << endl;
    for (int ilosc = 0; ilosc < n; ilosc++) {
        int a, b, c = 2, d = 0, d1 = 0, aa = 1;
        cout << "Podaj ilość dzieci w jednej grupie: "; cin >> a;
        cout << "Podaj ilość dzieci w drugiej grupie: "; cin >> b;
        int* tablica = new int[a];
        int* tablica1 = new int[b];
        int reszta1 = a, reszta2 = b;
        while (reszta1 != 1) {
            if (reszta1 % c == 0) {
                reszta1 = reszta1 / c;
                tablica[d] = c;
                d++;
            }
            else {
                c++;
            }
        }
        c = 2;
        while (reszta2 != 1) {
            if (reszta2 % c == 0) {
                reszta2 = reszta2 / c;
                tablica1[d1] = c;
                d1++;
            }
            else {
                c++;
            }
        }
        for (int i = 0; i < d; i++) {
            aa = aa * tablica[i];
        }
        for (int i = 0; i < d1; i++) {
            aa = aa * tablica1[i];
        }
        for (int i = 0; i < d; i++) {
            for (int i1 = 0; i1 < d1; i1++) {
                if (tablica[i] == tablica1[i1]) {
                    aa = aa / tablica[i];
                    tablica1[i1] = 0;
                    break;
                }
            }
        }
        delete[] tablica;
        delete[] tablica1;
        cout << "Ilość cukierów potrzebnych dla obu grup:" << aa<< endl;
        cout << "---------------------" << endl;
    }
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Proste_Dodawanie() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Proste dodawanie" << endl << "---------------------" << endl;
    cout << "Twoim zadaniem jest dodać wszystkie liczby całkowite podane na wejściu." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "W pierwszym wierszu znajduje się liczba t testów (0 < t < 100) Każdy test opisany jest w następujący sposób. W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania. Następnie podanych jest n liczb pooddzielanych spacją." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Wynik dodawania." << endl << "---------------------" << endl;
    cout << "Podaj ile zestawów chcesz sprawdzić." << endl << "---------------------" << endl;
    int n;
    cout << "Ile zestawów: "; cin >> n;
    cout << "---------------------" << endl;
    int x, b;
    for (int ib = 0; ib < n; ib++){
        cout << "Podaj ile liczb chcesz dodać: ";  cin >> x;
        int wynik = 0;
        for (int i1 = 0; i1 < x; i1++) {
            cout << "Podaj liczbę " << i1 + 1 << " : ";
                cin >> b;
                wynik += +b;
        }
        cout << "Wynik dodawania liczb: " << wynik << endl;
        cout << "---------------------" << endl;
    }
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Zadanie_Probne() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Zadanie Próbne" << endl << "---------------------" << endl;
    cout << "Napisać program do dodawania dwóch liczb całkowitych. Na wejściu podane są w oddzielnych liniach dwie liczby naturalne A oraz B mniejsze od 200. Na wyjściu należy wypisać wartość ich sumy, A + B." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "Dwie cyfry." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Wynik dodawania." << endl << "---------------------" << endl;
    cout << "Podaj cyfre pierwszą: ";
    int a, b;
    cin >> a;
    cout << "Podaj cyfre druga: ";
    cin >> b;
    cout << "---------------------" << endl << "Wynik dodawania: ";
    cout << a + b;
    cout << endl<< "---------------------" << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Predkosc_Srednia() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Prędkość średnia." << endl << "---------------------" << endl;
    cout << "Pociąg z miejscowości A do B jedzie z prędkością v1, a wraca z miejscowości B do A z prędkością v2. Obliczyć średnią prędkość na całej trasie. Uwaga: Dane wejściowe będą tak dobrane, aby wynik był liczba całkowitą." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "Na wejściu znajduje się dokładnie jedna liczba całkowita t (1<=t<=1000) oznaczająca liczbę zestawów danych. W wierszach od 2 do t+1 znajdują się dwie liczby całkowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000)." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Wyjście składa się z t wierszy. W każdym wierszu powinna znaleźć się dokładnie jedna liczba całkowita oznaczająca średnią prędkość." << endl << "---------------------" << endl;
    int n, odcinek = 10;
    cout << "Podaj ile zestawów liczb chcesz sprawdzić: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        float v1, v2, wynik;
        cout << "---------------------" << endl;
        cout << "Podaj pierwszą średnią : ";
        cin >> v1;
        cout << "Podaj drugą średnią : ";
        cin >> v2;
        wynik = (odcinek * 2) / (odcinek / v1 + odcinek / v2);
        cout  <<"Średnia obu średnich na tym odcinku : ";
        cout << wynik << endl;
    }
    cout << "---------------------" << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Tablice() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Tablice." << endl << "---------------------" << endl;
    cout << "Odwróć kolejność elementów w tablicy." << endl;
    cout << "---------------------" << endl;
    cout << "Input" << endl;
    cout << "Najpierw liczba testów t (t ≤ 100). Następnie dla każdego testu liczba n (n ≤ 100) i n liczb oddzielonych spacjami." << endl;
    cout << "---------------------" << endl;
    cout << "Output" << endl;
    cout << "Dla każdego testu n liczb w porządku odwrotnym niż na wejściu." << endl << "---------------------" << endl;
    int t;
    cout << "Podaj ile zestawów chcesz sprawdzić: ";
    cin >> t;
    while(t--) {
        int n;
        cout << "---------------------" << endl;
        cout << "Ile liczb będzie w tym zestawie: ";
        cin >> n;
        string* tablica_tablice = new string[n];
        for (int i = 0; i < n; i++) {
            cout << "Podaj liczbę " << i + 1 << " : ";
            cin >> tablica_tablice[i];
        }
        for (int i = 0; i < n; i++) {
            for (int i1 = 1; i1 < n; i1++) {
                if (tablica_tablice[i] == tablica_tablice[i1 + i]) {
                    tablica_tablice[i] = "";
                }
            }
            cout << tablica_tablice[n - i - 1];
        }
        cout << endl;
        delete[] tablica_tablice;
    }
    cout << "---------------------" << endl;
    cout << endl << "Nacisnij Enter aby przejsc dalej." << endl;
    _getch();
    Spoj_Lista();
}
void Spoj_Lista() {
    system("cls");
    cout << "Wpisz 0 aby wyjsc z aplikacji." << endl << endl;
    cout << "Sphere Online Judge" << endl << "---------------------" << endl;
    cout << "Aktualna liczba rozwiązań: " << liczbarozwiazan << endl << "---------------------" << endl;
    cout << "Wybierz rozwiązanie:" << endl;
    cout << "1. Liczby Pierwsze."<< endl;
    cout << "2. Czy umiesz potęgować." << endl;
    cout << "3. Flamaster." << endl;
    cout << "4. Przedszkolanka." << endl;
    cout << "5. Proste Dodawanie." << endl;
    cout << "6. Zadanie Próbne." << endl;
    cout << "7. Prędkość Średnia." << endl;
    cout << "8. Tablice." << endl;
    cout << endl << "Wybór: "; wybor_spoj = _getch();
    if (wybor_spoj == '1') {
        Liczby_Pierwsze();
        _getch();
    }
    if (wybor_spoj == '2') {
        Czy_Umiesz_Potegowac();
        _getch();
    }
    if (wybor_spoj == '3') {
        Flamaster();
        _getch();
    }
    if (wybor_spoj == '4') {
        Przedszkolanka();
        _getch();
    }
    if (wybor_spoj == '5') {
        Proste_Dodawanie();
        _getch();
    }
    if (wybor_spoj == '6') {
        Zadanie_Probne();
        _getch();
    }
    if (wybor_spoj == '7') {
        Predkosc_Srednia();
        _getch();
    }
    if (wybor_spoj == '8') {
        Tablice();
        _getch();
    }
    if (wybor_spoj == 0) {
        menu();
    }
}