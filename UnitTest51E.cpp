#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab5.1E/LongLong.cpp"
#include "../OOP Lab5.1E/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const char* A = "A(10, 10)";
			Assert::AreEqual(A, "A(10, 10)");
		}
	};
}
