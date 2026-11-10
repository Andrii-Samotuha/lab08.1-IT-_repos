#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1(IT)/Lab_08_1(IT).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest08
{
    TEST_CLASS(UnitTest08)
    {
    public:

        TEST_METHOD(TestCount)
        {
            char str[] = "abc,-def,-ghi";

            Assert::AreEqual(2, Count(str));
        }
    };
}