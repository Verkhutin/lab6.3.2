#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3.2/lab6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 1, 10, 3, 2 };
			int t = Sum(a, 3, 0, 0);
			Assert::AreEqual(t, 12);
		}
	};
}
