#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1_char/8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCountSymbols)
		{
			char testStr1[] = "++--==";
			char testStr2[] = "+-=";
			char testStr3[] = "abc";

			// Перевірка підрахунку символів у рядку з різними символами
			Assert::AreEqual(6, CountSymbols(testStr1));
			Assert::AreEqual(3, CountSymbols(testStr2));
			Assert::AreEqual(0, CountSymbols(testStr3));
		}
	};
}
