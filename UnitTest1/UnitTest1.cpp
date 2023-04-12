#include "pch.h"
#include "CppUnitTest.h"
#include "..\Application\Application.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CoolClass coolClass;
			Assert::AreEqual(8, coolClass.Calc(4, 2)); // changes
		}

		TEST_METHOD(TestMethod2)
		{

			CoolClass coolClass;
			Assert::AreEqual(6, coolClass.Calc(3, 2));
		}
	};
}
