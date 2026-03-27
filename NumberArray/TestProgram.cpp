// Test File

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

int main() {

	// instructions
	// ------------------ //
	//  input the size    //
	//  for your array    //
	//  in the argument   //
	//  of your object    //
	//   numbers 1-10     //
	// ------------------ //

	// functions
	// ----------------------------------------------------------- //
	//  setNumber - assign any index to a new value.               //
	//  getMinimum - return the smallest value in the array.       //
	//  getMaximum - return the largest value in the array.        //
	//  getNumber - return the value at a given index.             //
	//  getAverage - return the average of the array.              //
	// ----------------------------------------------------------- //

	NumberArray array1(9); // size 9

	// random number generator

	random_device random;
	mt19937 gen(random());
	uniform_real_distribution<> dist(1.0,100.0);

	// complete array with random ints

	for (int i = 0; i < 9; i++) { // Print out all elements of the array
		array1.setNumber(i, dist(gen));
	}

	// Print all elements

	array1.print();

	cout << "Minimum: " << array1.getMinimum() << endl;
	cout << "Maximum: " << array1.getMaximum() << endl;
	cout << "Number at given index: " << array1.getNumber(2) << endl;
	cout << "Average: " << array1.getAverage() << endl;

}