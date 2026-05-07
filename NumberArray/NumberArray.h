#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
#include <stdexcept>


template <typename T>
class NumberArray {

private:

	int size;
	double* data; // point to the array val

	static const int maxSize = 10; // max size is a shared constant variable. size of 10 elements.

public:

	// ----- Constructor

	NumberArray(int size = maxSize) {

		if (size <= 0 || size > maxSize) {

			this->size = maxSize;

		}
		else {
			this->size = size;
		}

		data = new T[this->size];

		for (int i = 0; i < this->size; i++) {

			data[i] = 0;

		}

		cout << "Constructor Called";

	}

	// ----- Copy Constructor

	NumberArray(const NumberArray<T>& other) {

		size = other.size;
		data = new T[size];

		for (int i = 0; i < size; i++) {

			data[i] = other.data[i];

		}

		cout << "Copy Constructor Called"

	}

	// ----- Assignment Op

	NumberArray<T>& operator=(const NumberArray& other) {

		if (this == &other) {

			return *this;

		}

		delete[] data;
		size = other.size;
		data = new T[size];

		for (int i = 0; i < size; i++) {

			data[i] = other.data[i];

		}

		cout << "Assignment Operator Called";

		return *this;

	}


	// ----- Setter

	void setNumber(int index, double value);

	// ------ Getter

	double getNumber(int index) const;
	double getMinimum() const;
	double getMaximum() const;
	double getAverage() const;

	// ---- Print

	void print() const;

	// ----- Destructor

	~NumberArray();

};

#endif