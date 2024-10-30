#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1_char/8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str4[] = "++ab--cd==";
			char* result4 = ReplacePairs(str4);
			Assert::AreEqual("****ab****cd****", result4);
			delete[] result4;
		}
	};
}
