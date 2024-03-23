#include "pch.h"
#include "CppUnitTest.h"
#include "../Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(StudentTests)
	{
	public:

		TEST_METHOD(TestCountProgrammingGrades)
		{
			const int N = 3;
			Student students[N];

			students[0].spec = KN;
			students[0].prog = 5;

			students[1].spec = KN;
			students[1].prog = 4;

			students[2].spec = IN;

			Assert::AreEqual(1, CountProgrammingGrades(students, N, 4));
			Assert::AreEqual(1, CountProgrammingGrades(students, N, 5));
			Assert::AreEqual(0, CountProgrammingGrades(students, N, 3));
		}




		TEST_METHOD(TestPercentagePhysicsMath)
		{
			const int N = 3;
			Student students[N];

			students[0].fiz = 5;
			students[0].mat = 5;

			students[1].fiz = 4;
			students[1].mat = 3;

			students[2].fiz = 3;
			students[2].mat = 4;

			Assert::AreEqual(33.33, percentagePhysicsMath(students, N), 0.01);
		}

	};
}
