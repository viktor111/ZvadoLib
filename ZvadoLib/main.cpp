#include <iostream>

#include "List.h"

int main() {
	int k;

	List<char> arr;
	
	arr.push_back('V'); 
	arr.push_back('A');
	arr.push_back('Z');
	arr.push_back('O');

	arr.print('\0');

	int index = arr.first_index_of('Z');

	printf("\n");

	printf("%d\n", index);
	printf("%c", arr[index]);

}