#include <iostream>

char getGrade(const int score, const int maxScore);

int main()
{

	int numOfStudents{};
	std::cout << "Enter the number of students: ";
	std::cin >> numOfStudents;

	int* scores = new int[numOfStudents];

	std::cout << "Enter " << numOfStudents << " scores: ";

	int maxScore = scores[0];
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
		std::cout << "Student " << (i + 1) << " score is " << scores[i] << " and grade is " << getGrade(scores[i], maxScore) << "\n";
	}

	delete[] scores;

	return 0;
}

char getGrade(const int score, const int maxScore)
{
	if (score >= (maxScore - 10))
	{
		return 'A';
	}
	else if (score >= (maxScore - 20))
	{
		return 'B';
	}
	else if (score >= (maxScore - 30))
	{
		return 'C';
	}
	else if (score >= (maxScore - 40))
	{
		return 'D';
	}
	return 'F';
}