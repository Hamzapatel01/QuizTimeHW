#pragma once
#include "MultipleChoiceQuestion.h"

class TrueFalseQuestion : public MultipleChoiceQuestion
{
public:
    TrueFalseQuestion(const std::string& questionText,
                      const std::string& answerText);

    virtual bool IsThisAnswerCorrect(const std::string& answer) override;

protected:
};