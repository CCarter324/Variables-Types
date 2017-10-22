// VariablesandTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cout;
#include <string>
using std::string;
#include <cstddef>
using std::size_t;

int maxPoints = 400;
double minGradePercent = 0.60;
int minPoints = 240;

int *pointsPtr = &maxPoints;

int pointsEarned = 350;


int main()
{
	std::cout << "You can earn " << maxPoints << " points in this course." << std::endl;
	std::cout << "You need at least " << minPoints << " points to pass this course." << std::endl;
	std::cout << "I believe I will earn " << pointsEarned << " in this course." << std::endl;

	string finalGrade = (pointsEarned <= minPoints) ? "I will not pass." : "I will pass this course.";
	cout << finalGrade << std::endl;

	cout << "'pointsPtr' points to adress " << &maxPoints << std::endl;
	cout << "'pointsPtr' points to the value " << *pointsPtr << std::endl;

	int *pointsPtr = &minPoints;
	cout << "'pointsPtr' now points to adress " << &minPoints << std::endl;
	cout << "'pointsPtr' now points to the value " << *pointsPtr << std::endl;

	cout << "the size of a signed integer is " << sizeof(int) << " bytes." << std::endl;
	cout << "the size of an unsigned integer is " << sizeof(unsigned) <<  " bytes." << std::endl;
	cout << "the size of a double is " << sizeof(double) << " bytes." << std::endl;

    return 0;
}

