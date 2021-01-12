#include <iostream>
#include <ostream>

#include "ZList.h"
#include "ZString.h"

int main() {
	int k;

	ZList<char> arr;

	printf("%d", arr.is_empty());
	
	arr.push_back('V'); 
	arr.push_back('A');
	arr.push_back('Z');
	arr.push_back('O');

	arr.print('\0');

	int index = arr.first_index_of('Z');

	printf("\n");

	printf("%d\n", index);
	printf("%c", arr[index]);

	printf("\n");

	printf("%d", arr.is_empty());

	ZString str("Viktor");
	ZString str2(" Draganov");
	ZString result = str + str2;

	printf("\nName - %s", result);
}