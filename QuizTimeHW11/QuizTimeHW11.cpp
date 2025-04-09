#include <iostream>
#include "ShortAnswerQuestion.h"

// Uncomment out the code below as you attempt these implementations
#include "MultipleChoiceQuestion.h"
#include "TrueFalseQuestion.h"


void TestMultipleChoice()
{
	MultipleChoiceQuestion b("What is the element symbol for sodium?",
							 std::vector<std::string> {"Ne", "Na", "So", "Da"},
							 "2");
	std::string answer;
	std::cout << b.GetQuestionText() << std::endl;
	std::cout << b.GetPossibleAnswersText() << std::endl;
	do
	{
		std::cout << "ANSWER: ";
		std::getline(std::cin, answer);
	} while (b.IsThisAnswerCorrect(answer) == false);

	std::cout << "CORRECT!" << std::endl << std::endl;
}



void TestTrueFalseAnswer()
{
	TrueFalseQuestion a("The sky is blue.", "True");

	std::string answer;
	std::cout << a.GetQuestionText() << std::endl;
	std::cout << a.GetPossibleAnswersText() << std::endl;
	do
	{
		std::cout << "ANSWER: ";
		std::getline(std::cin, answer);
	} while (a.IsThisAnswerCorrect(answer) == false);

	std::cout << "CORRECT!" << std::endl << std::endl;
}


void TestShortAnswer()
{
	ShortAnswerQuestion a("What is 9 * 9?", "81");

	std::string answer;
	std::cout << a.GetQuestionText() << std::endl;
	do
	{
		std::cout << "ANSWER: ";
		std::getline(std::cin, answer);
	} while (a.IsThisAnswerCorrect(answer) == false);

	std::cout << "CORRECT!" << std::endl << std::endl;
}


int main()
{
	TestShortAnswer();
	TestMultipleChoice();
	TestMultipleChoice();
	TestTrueFalseAnswer();
	TestTrueFalseAnswer();

	system("pause");
	return 0;
}

// EXPECTED OUTPUT
/*
What is 9 * 9 ?
ANSWER : 99
ANSWER : -192
ANSWER : jokdv
ANSWER : 81
CORRECT!

What is the chemical formula for sodium ?
1) Ne
2) Na
3) So
4) Da
ANSWER : 1
ANSWER : 3
ANSWER : 4
ANSWER : Ne
ANSWER : So
ANSWER : Da
ANSWER : Na
CORRECT!

What is the chemical formula for sodium ?
1) Ne
2) Na
3) So
4) Da
ANSWER : 2
CORRECT!

The sky is blue.
1) True
2) False
ANSWER : 2
ANSWER : False
ANSWER : 1
CORRECT!

The sky is blue.
1) True
2) False
ANSWER : True
CORRECT!

Press any key to continue . . .
*/