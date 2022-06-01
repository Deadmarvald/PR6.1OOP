#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT61
{
	TEST_CLASS(UT61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array c = Array(3);

			Array::value_type* a = new Array::value_type[2];
			for (int i = 0; i < 3; i++)
				a[i] = 1;

			Array::iterator l = const_cast<Array::iterator>(c.begin());
			for (int j = 0; j < 3; j++, l++)
				*l = a[j];

			c.Task();

			Assert::AreEqual(c.front(), a[0]);
		}
	};
}