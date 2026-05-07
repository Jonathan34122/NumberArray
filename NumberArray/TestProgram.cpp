// Test File

#include <iostream>
#include <random>
#include "NumberArray.h"

using namespace std;

int main() {


	// ----- RANDOM NUM -----]

	random_device random;
	mt19937 gen(random());

	// ----------------------]


	//-------------- Testing: Double Data Type -------------------]

	uniform_real_distribution<> dist(1.0, 100.0);

	NumberArray<double> array1(9);

	for (int i = 0; i < 9; i++) {

		array1.setNumber(i, dist(gen));

	}

	array1.print();

	cout << "Max: " << array1.getMaximum() << endl
		<< "Minimum: " << array1.getMinimum() << endl
		<< "Avg: " << array1.getAverage() << endl;

	//---------------------------------------------------------]


	//-------------- Testing: Copy Constructor ----------------]

	NumberArray<double> array2(array1);

	array1.setNumber(0, 999);

	cout << "Original Array\n";
	array1.print();

	cout << "Copied Array\n";
	array2.print();

	//---------------------------------------------------------]


	//-------------- Testing: Assignment Operator ----------------]

	NumberArray<double> array3(5);

	array3 = array1;

	cout << "Assigned Array\n";

	array3.print();


	//---------------------------------------------------------]


	//-------------- Testing: Exceptions ----------------]

	try {

		cout << array1.getNumber(50) << endl;

	}

	catch(const out_of_range& e){

		cout << "Cought: " << e.what() << endl;

	}



	//---------------------------------------------------]


	//-------------- Testing: Set To Ints ----------------]

	cout << "Int Array\n";

	NumberArray<int> intArray(5);

	for (int i = 0; i < 5; i++) {

		intArray.setNumber(i, i * 10);

	}

	intArray.print();

	//---------------------------------------------------]

}