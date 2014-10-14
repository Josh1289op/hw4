#include <iostream>

int* makeTT(int* scores_start, int* scores_end);

int main(){


	int array[5] = { 1, 2, 3, 4, 5 };

	std::cout << makeTT(&array[0], &array[4])[0];

	return 0;
}



int* makeTT(int* scores_start, int* scores_end){
	int scoreSize = abs(scores_start - scores_end) + 1;
	int size = (abs(scores_start - scores_end) + 1) * 2 - 1;
	int * array = new int[size];

	for (int i = 0; i < scoreSize; ++i){
		array[(size - scoreSize) + i] = scores_start[i];
	}

	for (int i = (size - scoreSize) - 1; i >= 0; --i){
		array[i] = array[i * 2 + 1] > array[i * 2 + 2] ? array[i * 2 + 1] : array[i * 2 + 2];
	}
	return array;
}