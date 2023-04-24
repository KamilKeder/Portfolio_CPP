#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string> 
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
class Prostokat;
class Punkt {
	float x, y;
public:
	Punkt(float=0, float=0);
	void wprowadzenie();

	friend void sprawdzanie(Punkt pkt, Prostokat p);
};
class Prostokat {
	float x1, y1, x2, y2;
public:
	Prostokat(float = 0, float = 0, float = 1, float = 1);
	void wprowadzenie();

	friend void sprawdzanie(Punkt pkt, Prostokat p);
};


