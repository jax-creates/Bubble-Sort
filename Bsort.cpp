#include<iostream>
#include<iomanip>

#include"Bsort.h"

int Bsort::SortThis() {
	const short arraySize = 10;
	short arr[arraySize] = { 5, 6, 4, 9, 10, 12, 89, 68, 45, 41 };
	short hold;
	std::cout << "Data items in original order:" << std::endl;
	for (size_t i = 0; i < arraySize; ++i) {
		std::cout << std::setw(4) << arr[i];
	} // for i
	for (size_t pass = 0; pass < arraySize; ++pass) {
		for (size_t j = 0; j < arraySize-1; ++j) {
			if (arr[j] > arr[j + 1]) {
				hold = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = hold;
			} // if
		} // for j
	} // for pass
	std::cout << std::endl << "Data items in ascending order:" << std::endl;
	for (size_t i = 0; i < arraySize; ++i) {
		std::cout << std::setw(4) << arr[i];
	} // for i
	std::cout << std::endl;

	for (size_t pass = 0; pass < arraySize; ++pass) {
		for (size_t j = 0; j < arraySize - 1; ++j) {
			if (arr[j] < arr[j + 1]) {
				hold = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = hold;
			} // if
		} // for j
	} // for pass
	std::cout << std::endl << "Data items in decending order:" << std::endl;
	for (size_t i = 0; i < arraySize; ++i) {
		std::cout << std::setw(4) << arr[i];
	} // for i
	std::cout << std::endl;
	return 0;

}
