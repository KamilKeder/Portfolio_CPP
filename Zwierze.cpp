#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include "Zwierze.h"
using namespace std;

void Zwierze::dodawaniezwierzecia(string a, string b, int c) {

	nazwa = a;
	nazwa[0] = toupper(nazwa[0]);
	rasa = b;
	rasa[0] = toupper(rasa[0]);
	wiek = c;
}
void Zwierze::wyswietlaniezwierzecia() {

	cout << nazwa << " " << rasa << " " << wiek;
}