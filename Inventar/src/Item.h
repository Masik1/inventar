#include <string>
#include <iostream>
#include <sstream>	//fuer ostingstream

using namespace std;

#ifndef ITEM_H_
#define ITEM_H_

class Item {
private:
	string kongretum;
	double preis;
	double gewicht;

public:
	Item(string kongretum, double preis, double gewicht);
	virtual ~Item();

	const string& getKongretum() const {
		return kongretum;
	};

	double getPreis() {
		return preis;
	};

	double getGewicht() {
		return gewicht;
	};

	string toString() const;
};
#endif /*ITEM_H_*/
