#include "Item.h"



Item::Item(string kongretum, double preis, double gewicht) {
	this->kongretum = kongretum;
	this->preis = preis;
	this->gewicht = gewicht;
}

Item::~Item() {

}

string Item::toString() const {
	ostringstream ausgabe;
	ausgabe << "Item:" << kongretum << '\n'
			<< "Wert:" << preis << '\n'
			<< "Gewicht:" << gewicht << '\n';
	return ausgabe.str();
}
