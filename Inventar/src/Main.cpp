//============================================================================
// Name        : Inventar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Item.h"
#include <iostream>

using namespace std;

int main() {
	Item schwert("Schwert", 10, 5);
	cout << schwert.toString();
	return 0;
}
