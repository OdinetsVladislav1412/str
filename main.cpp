#include<iostream>
#include "String.h"
using namespace std;


int main()
{
	TString name1("aabbbcabatttY");
	TString name2("aTbbTcccTeeee");
	TString name3("");
	TString name4(name2);
	
	cout << "name1: " << name1 << endl << "name2: " << name2 << "\n" << endl;

	//+
	name3 = name1 + name2;
	cout << "name3 = name1 + name2" << endl << "name3: " << name3 << "\n" << endl;

	//=
	name4 = name3;
	cout << "name4 = name3" << endl << "name4: " << name4 << "\n" << endl;

	// < > ==
	if (name4 == name3) {
		cout << "name3 == name4" << endl;
	}
	else{
		cout << "name3 != name4" << endl;
	}

	if (name2 > name1) {
		cout << "name2 > name1" << endl;
	}
	else {
		cout << "name2 <= name1" << endl;
	}

	//[]
	cout << "name1[5]: " << name1[5] << "\n" << endl;

	//first entry char
	cout << "First entry char in name1 \"t\": " << name1.NumChar('t') << endl;


	//first entry lines
	cout << "First entry lines in name1 \"bc\": " << name1.NumPos("bc") << endl;


	//split on char 
	char** arr; //pointer to a pointer that stores subwords
	int check;  //number of elements in the pointer
	check = name2.Split(arr, 'T');
	cout << "Splitting into subwords name2 by the symbol \"T\": \n";
	for (int i = 0; i < check; i++) {
		cout << arr[i] << endl;
	}

	//ADDITIONALA
	
	//repeating a line K times
	cout << "\nRepeating a line 5 times: ";
	name3 = name1 * 5;
	cout << name3 << endl;

	
	//all entry lines
	int num = 0;
	int* nnn = name1.AllNumPos("ab", num);
	cout << "All entry lines\"ab\" in name1: ";
	for (int i = 0; i < num; i++) {
		cout << nnn[i]<< " ";
	}

	//no repetitions
	int k;
	cout << "\nname1: " << name1 << endl;
	name3 = name1.NoRepetition(k);
	cout << "name1 without repetition: ";
	for (int i = 0; i < k; i++) {
		cout << name3[i];

	}

	//quantity
	int* iii;
	char* ccc;
	int f;
	cout << "\n\nThe number of each array element name1:" << endl;
	name1.Quantity(ccc, iii, f);
	for (int i = 0; i < f; i++) {
		cout << ccc[i] << " - " << iii[i] << endl;
	}

	//max quantity
	int* numb;
	char* charr;
	int ff;
	cout << "\nMax Quantity name1: " << endl;
	name1.MaxQuantity(charr, numb, ff);
	for (int i = 0; i < ff; i++) {
		cout << charr[i] << "-" << numb[i] << endl;
	}


	delete[] numb;
	delete[] charr;
	delete[] iii;
	delete[] ccc;
	delete[] nnn;
	delete[] arr;

	return 0;
}


