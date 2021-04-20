#include "Money.h"

Money::Money()
{
	nominal = 0;
	number = 0;
}
Money::Money(int value, int value2) throw(invalid_argument)
{
	if (value < 0 || value2 < 0)
		throw invalid_argument("negative argument");
	nominal = value;
	number = value2;
}
Money::Money(const Money& copy)
{
	nominal = copy.nominal;
	number = copy.number;
}
Money::operator string() const
{
	stringstream ss;
	ss << "nominal= " << nominal << "   number= " << number << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Money& b)
{
	out << (string)b;
	return out;
}
istream& operator >> (istream& in, Money& b)
{
	do {
		cout << "Ââåä³òü íîì³íàë êóïþðè: "; in >> b.nominal;
		cout << "Ââåä³òü ê³ëüê³ñòü êóïþð: "; in >> b.number;
	} while (b.nominal < 0 || b.number < 0);
	cout << endl;
	return in;
}
void Money::SetFirst(int value) throw (invalid_argument)
{
	if (value < 0)
		throw invalid_argument("negative argument");
	nominal = value;
}
void Money::SetSecond(int value) throw (myerror)
{
	if (value < 0)
		throw new myerror("negative argument");
	else
		number = 0;
}
Money& Money::operator = (const Money& b)
{
	nominal = b.nominal;
	number = b.number;
	return *this;
}
Money& Money::operator --() throw(myerror_base)
{
	if (nominal == 0)
		throw new myerror_base();
	--nominal;
	return *this;
}
Money& Money::operator ++()
{
	++nominal;
	return *this;
}
Money Money::operator --(int) throw (myerror_base)
{
	Money a(*this);
	if (nominal == 0) 
		throw myerror_base();
	nominal--;
	return a;
}
Money Money::operator ++(int)
{
	Money a(*this);
	number++;
	return a;
}