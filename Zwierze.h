#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>

using namespace std;
class Zwierze
{
	string nazwa;
	string rasa;
	int wiek;

public:
	void dodawaniezwierzecia(string a, string b, int c);
	void wyswietlaniezwierzecia();

	string getNazwa() const { return nazwa; }
	string getRasa() const { return rasa; }
	int getWiek() const { return wiek; }
};

