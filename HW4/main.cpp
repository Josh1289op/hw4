#include <iostream>

int* makeTT(int* scores_start, int* scores_end);

int main(){


	int array[6] = { 5, 32, 49, 2, 1, 12 };

	std::cout << &array[0] - &array[5] << std::endl;


	std::cout << makeTT(&array[0], &array[5])[10];

	int five;
	std::cin >> five;
	return 0;
}



int* makeTT(int* scores_start, int* scores_end){
	int scoreSize = abs(scores_start - scores_end) + 1;
	int size = (abs(scores_start - scores_end) + 1) * 2 - 1;
	std::cout << size << std::endl << std::endl;
	int * array = new int[size];

	for (int i = 0; i < scoreSize; ++i){
		array[(size - scoreSize) + i] = scores_start[i];
	}

	for (int i = 0; i < size; ++i){
		std::cout << array[i] << std::endl;
	}




	std::cout << std::endl;

	return array;
}