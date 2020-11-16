#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[6] = { 1,-2,12,34,-13,0 };
			int t = Max(a, 6, 0, a[0]);

			Assert::AreEqual(t, 34);
		}
	};
}
