#pragma once

#include "Question.h"

class ShortAnswerQuestion : public Question
{
public:
	ShortAnswerQuestion(const std::string& questionText,
			    const std::string& correctAnswer);

	virtual bool IsThisAnswerCorrect(const std::string& answer) override;

private:
	// Nothing to add to the class
};

