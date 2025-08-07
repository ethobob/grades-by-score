#include <iostream>

int main()
{

	int numOfStudents{};
	std::cout << "Enter the number of students: ";
	std::cin >> numOfStudents;

	int* scores = new int[numOfStudents];

	std::cout << "Enter " << numOfStudents << " scores: ";

	int maxScore{};
	for (int i = 0; i < numOfStudents; i++)
	{
		std::cin >> scores[i];
		if (scores[i] > maxScore)
		{
			maxScore = scores[i];
		}
	}

	for (int i = 0; i < numOfStudents; i++)
	{
		std::cout << "Student " << (i + 1) << " score is " << scores[i] << " and grade is ";

		if (scores[i] >= (maxScore - 10))
		{
			std::cout << "A";
		}
		else if (scores[i] >= (maxScore - 20))
		{
			std::cout << "B";
		}
		else if (scores[i] >= (maxScore - 30))
		{
			std::cout << "C";
		}
		else if (scores[i] >= (maxScore - 40))
		{
			std::cout << "D";
		}
		else
		{
			std::cout << "F";
		}

		std::cout << "\n";
	}

	return 0;
}