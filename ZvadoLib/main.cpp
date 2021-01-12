#include <iostream>

#include "List.h"

int main() {
	int k;

	List<char> arr;

	printf("%d", arr.is_empty());
	
	arr.push_back('V'); 
	arr.push_back('A');
	arr.push_back('Z');
	arr.push_back('O');

	arr.print('\0');

	int index = arr.first_index_of('Z');

	printf("\n");

	printf("%d\n", index);
	printf("%c", arr[10]);

	printf("\n");

	printf("%d", arr.is_empty());
}