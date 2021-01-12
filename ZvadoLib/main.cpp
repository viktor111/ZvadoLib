#include <iostream>

#include "List.h"

int main() {
	int k;

	List<char> arr;

	for (k = 0; k <= 10; k++) {
		arr.push_back('w');
	}
	printf("CHAR ---- %c", arr[122]);

	arr.push_back('r');
	arr.push_back('2');
	arr.print('|');

	List<char> arr2;

	arr2 = arr;

	arr2.print(' ');

	int index = arr.first_index_of(4);
	printf("\n");
	printf("index of  %d", index);

	printf("CHAR ---- %c",arr[122]);

}