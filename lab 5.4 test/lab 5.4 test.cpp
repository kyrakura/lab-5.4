#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.4/lab 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab54test
{
	TEST_CLASS(lab54test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = S0(5);
			Assert::AreEqual(c, 0.372776, 0.01);
		}
		TEST_METHOD(TestMethod2)
		{
			double c;
			c = S1(5, 3);
			Assert::AreEqual(c, 0.372776, 0.01);
		}
		TEST_METHOD(TestMethod3)
		{
			double c;
			c = S2(5, 5);
			Assert::AreEqual(c, 0.372776, 0.01);
		}
		TEST_METHOD(TestMethod4)
		{
			double c;
			c = S3(5, 3, 0);
			Assert::AreEqual(c, 0.372776, 0.01);
		}
		TEST_METHOD(TestMethod5)
		{
			double c;
			c = S4(5, 5, 0);
			Assert::AreEqual(c, 0.372776, 0.01);
		}
	};
}
