#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dell\source\repos\6.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(met_do_stuff)
        {
            int mass[23] = { 58,  16,  57,  33,  57,   6,  21,   8,  64,  43,  63,  9,  65, 41,  17,  22,  45,   6,  15,  54,  26,  63,  23, },
                count = 0,
                sum = 0;
            Random(mass, 23, count, sum);
            Assert::AreEqual(count, 0);
            Assert::AreEqual(sum, 0);
            Assert::AreEqual(mass[0], 0);
            Assert::AreEqual(mass[22], 0);
        }
    };
}