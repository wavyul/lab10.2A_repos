#include "pch.h"
#include "CppUnitTest.h"
#include "../LB10.2_A/main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            Students student;
            student.grade_math = 90;
            student.grade_physics = 80;
            student.grade_info = 70;

            double result = student_average_evaluation(&student, 0);

            Assert::AreEqual(result, 80.0);
        }

        TEST_METHOD(TestMethod2)
        {
            Students students[3];
            students[0].grade_math = 90;
            students[0].grade_physics = 80;
            students[0].grade_info = 70;

            students[1].grade_math = 85;
            students[1].grade_physics = 75;
            students[1].grade_info = 65;

            students[2].grade_math = 95;
            students[2].grade_physics = 85;
            students[2].grade_info = 75;

            p_sort(students, 3);

            Assert::AreEqual(student_average_evaluation(&students[0], 0), 85.0);
        }
    };
}
