#pragma once
#include <iostream>
#include <sstream>
#include <exception>
#include "myerror.h"
#include "myerror_base.h"

class Money
{
private:
	int nominal;
	int number;
public:
	Money();
	Money(int value, int value2) throw (invalid_argument);
	Money(const Money& copy);
	int summa() { return nominal * number; };
	int GetFirst() const { return nominal; };
	int GetSecond() const { return number; };
	void SetFirst(int value) throw (logic_error);
	void SetSecond(int value) throw(myerror);
	operator string() const;
	friend ostream& operator << (ostream& out, const Money&);
	friend istream& operator >> (istream& in, Money&) throw (invalid_argument);
	Money& operator = (const Money& b);
	Money& operator --() throw (out_of_range);
	Money& operator ++();
	Money operator --(int) throw (myerror_base);
	Money operator ++(int);
};