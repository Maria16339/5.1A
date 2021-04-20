#pragma once
#include <exception>
#include <iostream>
using namespace std;

class myerror_base : public exception
{
public:
	virtual const char* what() const throw() { return "exception: myerror_base: nominal == 0 "; };
};