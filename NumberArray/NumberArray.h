#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumberArray {

private:

	int size;
	double* data; // point to the array val

	static const int maxSize = 10; // max size is a shared constant variable. size of 10 elements.

public:

	// ----- Constructor

	NumberArray(int size = maxSize);

	// = Op Overload

	NumberArray(const NumberArray& other);
	NumberArray& operator=(const NumberArray& other);


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