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
			c = S0(3);
			Assert::AreEqual(c, 851.117, 0.01);
		}
		TEST_METHOD(TestMethod2)
		{
			double c;
			c = S1(3, 3);
			Assert::AreEqual(c, 851.117, 0.01);
		}
		TEST_METHOD(TestMethod3)
		{
			double c;
			c = S2(19, 3);
			Assert::AreEqual(c, 851.117, 0.01);
		}
		TEST_METHOD(TestMethod4)
		{
			double c;
			c = S3(3, 3);
			Assert::AreEqual(c, 851.117, 0.01);
		}
		TEST_METHOD(TestMethod5)
		{
			double c;
			c = S4(19, 3);
			Assert::AreEqual(c, 851.117, 0.01);
		}
	};
}
