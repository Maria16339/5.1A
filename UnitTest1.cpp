#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1А/5.1А/myerror.h"
#include "C://Users/User/source/repos/5.1А/5.1А/myerror.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			myerror a("qq");
			string s = "qq";
			string s2 = a.what();
			Assert::AreEqual(s, s2);
		}
	};
}