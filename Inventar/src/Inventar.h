#include <string>
#include <vector>
#include "Item.h"

using namespace std;

#ifndef INVENTAR_H_
#define INVENTAR_H_

class Inventar {
private:
	double maxGewicht;
	vector<Item*> items;

	Inventar(double maxGewicht);

};

#endif /*INVENTAR_H_*/
