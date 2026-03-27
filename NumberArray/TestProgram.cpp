// Test File

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

int main() {

	// ------------------ //
	//  input the size    //
	//  for your array    //
	//  in the argument   //
	//  of your object    //
	//   numbers 1-10     //
	// ------------------ //

	NumberArray array1(1); // no input will default to a size of 10
	NumberArray array2(9); // size 9

	// random number generator

	random_device random;
	mt19937 gen(random());
	uniform_real_distribution<> dist(1.0,100.0);

	// complete array with random ints

	for (int i = 0; i < 9; i++) { // Print all elements of the array
		array2.setNumber(i, dist(gen));
	}

	// Print all elements

	array2.print();

}