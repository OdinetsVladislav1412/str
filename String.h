#pragma once
#include <iostream>
#include <string>
#include<Windows.h>

using namespace std;

class TString
{
private:

	char* str;
	int length;

public:

	TString();
	TString(const char* str);
	TString(const TString& other);
	~TString();

	int GetLength();
	char* GetStr();
	
	TString operator+(const TString& other);
	TString& operator =(const TString& other);
	TString& operator =(const char* other);
	bool operator ==(const TString& other);
	char operator [](int i);
	bool operator>(const TString& s);
	bool operator<(const TString& s);


	friend ostream& operator<<(ostream& ostr, const TString& s);
	friend istream& operator>>(istream& istr, TString& s);

	//int Split(char**& arr, const char* s)const;
	int Split(char**& arr, const char a)const;
	int NumChar(char c);
	int NumPos(const char* s);

	//dopolnitelnie
	TString operator*(int k);

	int* AllNumPos(const char* s, int& num);

	char* NoRepetition(int& r);

	void Quantity(char*& charQan, int*& intQan, int& r);
	void MaxQuantity(char*& charQan, int*& intQan, int& r);
};
