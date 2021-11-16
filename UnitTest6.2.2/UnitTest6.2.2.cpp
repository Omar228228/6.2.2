#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Юра\source\repos\6.2.2\6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int i = 0;
			int S=0;
			int a[n] = { 29, 22, 25, 71, 26, 20, 20, 44, 71, 18 };
			Sum(a, n, S, i);
			int res = S / n;
			Assert::AreEqual(17, res);
		}
	};
}