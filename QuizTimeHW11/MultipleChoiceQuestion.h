#pragma once
#include "Question.h"

class MultipleChoiceQuestion : public Question 
{
public:

    MultipleChoiceQuestion(const std::string& questionText,
                           const std::vector<std::string>& possibleAnswersText,
                           const std::string& answerText);

    virtual std::string GetPossibleAnswersText() override;

    virtual bool IsThisAnswerCorrect(const std::string& answer) override;

protected:
    std::vector < std::string> possibleAnswers;
};