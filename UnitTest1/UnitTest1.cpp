#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\дфи 5.3\дфи 5.3\source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double result  = (cos(sin(x)) + 1) / (exp(-x) + 1);
			double actual = compute_expression(x);

			Assert::AreEqual(result, actual);
		}
	};
}
