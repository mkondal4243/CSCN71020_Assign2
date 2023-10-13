#include "pch.h"
#include "CppUnitTest.h"

#include "pch.cpp"

extern int getPerimeter(int* length, int* width);
extern int getArea(int* length, int* width);
extern void setLength(int input, int* length);
extern void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		//TASK 1
		TEST_METHOD(getPerimeterTest)
		{
			int length = 5;
			int width = 7;

			int expectedPerimeter = 2 * (length + width);
		int result = getPerimeter(&length, &width);

			Assert::AreEqual(result, expectedPerimeter);
		}

		TEST_METHOD(getAreaTest)
		{
			int length = 5;
			int width = 7;

			int expectedArea = length * width;
			int result = getArea(&length, &width);

			Assert::AreEqual(result, expectedArea);
		}

		//Task 2

		// Tests for : void setLength(int input, int *length);

		TEST_METHOD(Test_SetLengthNormal)
		{

			int length = 0; // Initial length
			int input = 35; // input


			setLength(input, &length); // Calling the function


			Assert::AreEqual(length, input); // Verifying the length is equal to input
		}

		TEST_METHOD(Test_SetLengthLimit)
		{

			int length = 12; // length
			int input = 99; // Maximum valid input


			setLength(input, &length); // Calling function
			Assert::AreEqual(length, input);
		}

		TEST_METHOD(Test_SetLengthInvalid)
		{

			int length = 50; // Initial length
			int input = 100; // Invalid input

			setLength(input, &length); // Calling function


			Assert::AreEqual(length, 50);

		}

		//tests for: void setWidth(int input, int *width);


		TEST_METHOD(Test_SetWidthNormal)
		{
			int width = 0;
			int input = 35;

			setWidth(input, &width); // Calling the setWidth function

			Assert::AreEqual(width, input);

		}

		TEST_METHOD(Test_SetWidthLimit)
		{
			int width = 12;
			int input = 99; // Maximum valid input

			setWidth(input, &width); // Calling the setWidth function

			Assert::AreEqual(width, input);

		}

		TEST_METHOD(TestSetWidthInvalid)
		{
			int width = 50;
			int input = 100; // Invalid input

			setWidth(input, &width); // Calling the setWidth function

			Assert::AreEqual(width, 50);


		}
	};
}
