// ListProcessor.cpp

// Ethan Deming 2030 10 Oct 2018

// tom bailey   1030  27 jan 2012

// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;

	cout << "cows sum   :  " << cows.sum() << endl;

	cout << "cows size  :  " << cows.getSize() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "horses sum :  " << horses.sum() << endl;

	horses.removeFirst();
	horses.insertAsLast(5.67);
	horses.insertAsLast(5.46);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "pigs sum   :  " << pigs.sum() << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;

	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "pigs size  :  " << pigs.getSize() << endl;

	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl;

	cout << "End of code" << endl;


	return 0;
}

