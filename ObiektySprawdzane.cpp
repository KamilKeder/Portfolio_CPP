#include "ObiektySprawdzane.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
Punkt::Punkt(float xx, float yy) {
	x = xx;
	y = yy;
}
void Punkt::wprowadzenie() {
	system("cls");
	cout << "Sprawdzanie Kolizji" << endl;
	cout << "---------------------" << endl;
	cout << "Wprowadz wartosci punktu." << endl
		<< "---------------------" << endl
		<< "Podaj Warto�� x punktu." << endl
		<< "Warto�� x: "; cin >> x;
	cout << endl << "Podaj Warto�� y punktu." << endl
		<< "Warto�� y: "; cin >> y;

}
Prostokat::Prostokat(float xx1, float yy1, float xx2, float yy2) {
	x1 = xx1;
	y1 = yy1;
	x2 = xx2;
	y2 = yy2;
}
void Prostokat::wprowadzenie() {
	system("cls");
	cout << "Sprawdzanie Kolizji" << endl;
	cout << "---------------------" << endl;
	cout << "Wprowadz wartosci prostok�ta." << endl
		<< "---------------------" << endl
		<< "Podaj Warto�� x prostok�ta." << endl
		<< "Warto�� x: "; cin >> x1;
	cout << endl << "Podaj Warto�� y prostok�ta." << endl
		<< "Warto�� y: "; cin >> y1;
	cout << "Podaj Warto�� x1 prostok�ta." << endl
		<< "Warto�� x1: "; cin >> x2;
	cout << endl << "Podaj Warto�� y1 prostok�ta." << endl
		<< "Warto�� y1: "; cin >> y2;
}

