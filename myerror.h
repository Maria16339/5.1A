#pragma once
#include <string>
#include <sstream>
using namespace std;
class myerror
{
	string s;
public:
	myerror() throw();
	myerror(const string& s1) throw();
	virtual ~myerror() {};
	string const what() const throw () { return s; };
};