#include "MultipleChoiceQuestion.h"
#include <iostream>

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText,
											const std::vector<std::string>& possibleAnswersText,
											const std::string& answerText)
	: Question(questionText, answerText),
	possibleAnswers(possibleAnswersText)
{
	//Nothing goes here...
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText()
{
	std::string toReturn;
	int index = 1;

	for (std::string& s : possibleAnswers)
	{
		toReturn += std::to_string(index);
		toReturn += (") " + s + "\n");
		++index;
	}
	return toReturn;
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(const std::string& answer)
{
	if (answer == CorrectAnswer) {
		return true;
	}
	if (possibleAnswers[atoi(CorrectAnswer.c_str()) - 1] == answer) {
		return true;
	}
	return false;
}
