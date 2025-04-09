#include "ShortAnswerQuestion.h"

ShortAnswerQuestion::ShortAnswerQuestion(const std::string& questionText,
										 const std::string& correctAnswer)
	: Question(questionText, correctAnswer)
{
	// Nothing goes here...
}

bool ShortAnswerQuestion::IsThisAnswerCorrect(const std::string& answer)
{
	// Simple test to see if things are on the up and up
	return answer == CorrectAnswer;
}