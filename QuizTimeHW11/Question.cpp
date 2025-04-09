#include "Question.h"

// Set up the question and everything needed moving forward
Question::Question(const std::string& questionText,
				   const std::string& correctAnswer)
	: QuestionText(questionText),
	CorrectAnswer(correctAnswer)
{
	// Nothing here...
}

// Since there is no dynamic memory, we generally don't need this...
// Though since we are using inheritance it is needed to avoid memory leaks
// Without this, the MultipleChoiceQuestion derived class will leak like a sieve!
Question::~Question()
{
	// Nothing here...
}

// Return text for the question itself
std::string Question::GetQuestionText()
{
	return QuestionText;
}

// There are no choices for answers by default...  Think short answer
// Actually return an empty string
std::string Question::GetPossibleAnswersText()
{
	return std::string();
}