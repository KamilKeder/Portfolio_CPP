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
		<< "Podaj Wartoœæ x punktu." << endl
		<< "Wartoœæ x: "; cin >> x;
	cout << endl << "Podaj Wartoœæ y punktu." << endl
		<< "Wartoœæ y: "; cin >> y;

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
	cout << "Wprowadz wartosci prostok¹ta." << endl
		<< "---------------------" << endl
		<< "Podaj Wartoœæ x prostok¹ta." << endl
		<< "Wartoœæ x: "; cin >> x1;
	cout << endl << "Podaj Wartoœæ y prostok¹ta." << endl
		<< "Wartoœæ y: "; cin >> y1;
	cout << "Podaj Wartoœæ x1 prostok¹ta." << endl
		<< "Wartoœæ x1: "; cin >> x2;
	cout << endl << "Podaj Wartoœæ y1 prostok¹ta." << endl
		<< "Wartoœæ y1: "; cin >> y2;
}

