#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include "Money.h"
void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}


Money makeMoney(int nominal, int number)
{
	Money bb(nominal, number);
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	set_unexpected(_unexpected_to_bad);
	Money b1;
	Money b4;
	try
	{
		Money b2 = makeMoney(1, 3);
		Money b3(5, 5);
		b2 = b3;
		cout << b2;
		cout << b3;
		b3++;
	}
	catch (invalid_argument e)
	{
		cerr << "exception: " << e.what() << endl;
	}
	cin >> b1;
	cout << b1;		cout << "nominal*number= " << b1.summa() << endl;
	try
	{
		--b1;
	}
	catch (myerror_base* e)
	{
		cerr << e->what() << endl;
	}
	try
	{
		int a;
		cout << "enter first: "; cin >> a;
		b1.SetFirst(a);
		cout << "enter second: "; cin >> a;
		b1.SetSecond(a);
		cout << a;
	}
	catch (invalid_argument& a)
	{
		cerr << "exception: " << a.what() << endl;
	}
	catch (myerror a)
	{
		cerr << "exception: " << a.what() << endl;
	}
}