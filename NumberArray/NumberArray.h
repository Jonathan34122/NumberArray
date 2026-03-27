#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray {

private:

	int size;
	double* data;

	static const int maxSize = 10; // max size is a shared constant variable.

public:

	// ----- Constructor

	NumberArray(int size = maxSize);

	// ----- Setter

	void setNumber(int index, double value);

	// ----- Destructor

	~NumberArray();

};

#endif