#include "pch.h"
#include "CppUnitTest.h"
#include "..//Lab 1.6/Solution.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 10;
			Solution l;
			l.setAmount(10);
			Assert::AreEqual(x, l.getAmount());
		}
	};
}
