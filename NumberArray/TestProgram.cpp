// Test File

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

int main() {

	// Create random Num generator

	random_device random;
	mt19937 gen(random());

	// Testing: Double Data Type

	uniform_real_distribution<> dist(1.0, 100.0);

	NumberArray<double> array1(9);

	for (int i = 0; i < 9; i++) {

		array1.setNumber(i, dist(gen));

	}

	array1.print();

	cout << "Max: " << array1.getMaximum() << endl
		<< "Minimum: " << array1.getMinimum() << endl
		<< "Avg: " << array1.getAverage() << endl;

}