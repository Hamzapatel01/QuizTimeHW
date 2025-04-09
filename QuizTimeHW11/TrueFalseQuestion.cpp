#include "TrueFalseQuestion.h"

TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText,
									 const std::string& answerText)
	: MultipleChoiceQuestion(questionText,
		std::vector<std::string> { "True", "False"},
		answerText)
{
	//Nothing goes here... 

}
bool TrueFalseQuestion::IsThisAnswerCorrect(const std::string& answer)
{
	if (answer == CorrectAnswer) {
		return true;
	}
	if (answer == "1" && (CorrectAnswer == "True")) {
		return true;
	}
	if (answer == "2" && (CorrectAnswer == "False")) {
		return true;
	}
	return false;
}
