#pragma once

#include <string>
#include <vector>

class Question
{
public:
	// Set up the question and everything needed moving forward
	Question(const std::string& questionText,
		const std::string& correctAnswer);

	// Needed only because of inheritance causing possible memory leaks
	virtual ~Question();

	// Return text for the question itself
	std::string GetQuestionText();

	// Virtual function and default behavior can be overridden by derived classes
	// Return a nicely formatted list of possible answers, if there is one to give
	virtual std::string GetPossibleAnswersText();

	// Pure virtual function and must be implemented by all derived classes
	// Return whether or not the answer given is correct
	virtual bool IsThisAnswerCorrect(const std::string& answer) = 0;

protected:
	// std::string {"What is 16 * 3?"}
	std::string QuestionText;

	// std::string {"48"}
	std::string CorrectAnswer;
};
