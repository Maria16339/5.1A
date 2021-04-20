#include "myerror.h"
myerror::myerror() throw()
{
	s = "";
}
myerror::myerror(const string& s1) throw()
{
	s = s1;
}
