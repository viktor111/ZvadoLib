#include <iostream>

#include "IntArray.h"

int main() {
	int k;

	IntArray arr;

	for (k = 0; k <= 10; k++) {
		arr.push_back(k);
	}

	arr.push_back(4);
	arr.push_back(3);
	arr.print('|');

}