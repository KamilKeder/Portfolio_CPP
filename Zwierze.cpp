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
	rasa = b;
	wiek = c;
}
void Zwierze::wyswietlaniezwierzecia() {
	cout << nazwa << " " << rasa << " " << wiek;
}