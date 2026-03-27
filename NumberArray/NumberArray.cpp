// Author: Jonathan Lopez
// Purpose: Dynamically allocate memeory inside of a class

#include <iostream>
#include "NumberArray.h"

using namespace std;

	// ------- Constructor

	NumberArray::NumberArray(int size) {
		
		if (size <= 0 || size > maxSize) { // Validation, no int <= 0 or greater than max size.
			this->size = maxSize; // Default to max size.
		}
		else {
			this->size = size; // otherwise assign it to the size inputted.
		}
		

		data = new double[size]; // allocated to heap

		for (int i = 0; i < size; i++) {
			data[i] = 0;
		}

	}

	// --------- Setter

	void NumberArray::setNumber(int index, double value) {
		if (index >= 0 && index < size) {
			data[index] = value;
		}
		else {
			cout << "Index out of bounds\n";
		}

	}

	// -------- Getters

	double NumberArray::getNumber(int index) const { // Get Number
		static double defaultVal = 0; // shared variable

		if (index >= 0 && index < size) {
			return data[index];
		}
		else {
			cout << "Invalid Index\n";
			return defaultVal;
		}
	}

	double NumberArray::getMinimum() const {
		double minimum = data[0];

		for (int i = 1; i < size; i++) {
			if (data[i] < minimum) {
				minimum = data[i];
			}
		}
		return minimum;
	}

	double NumberArray::getMaximum() const {

		double maximum = data[0];

		for (int i = 1; i < size; i++) {
			if (data[i] > maximum) {
				maximum = data[i];
			}
		}
		return maximum;
	}

	double NumberArray::getAverage() const {
		double sum = 0;

		for (int i = 0; i < size; i++) {
			sum += data[i];
		}
		return sum / size;
	}

	// -------- Print

	void NumberArray::print() const {
		for (int i = 0; i < size; i++) {
			cout << data[i] << ", ";
		}
		cout << endl;
	}

	// -------- Destructor

	NumberArray::~NumberArray() {
		delete[] data;
		static int counter = 1; // count how many times destructor is called. static to persist in a function.
		
		cout << "Destructor called, array deleted from heap x" << counter << endl;

		counter++;
	}