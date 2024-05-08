#include "mathb.h"

// оепемня пюявернб б дбнхвмсч яхярелс
int disjunction(std::vector<int> numbersDecimalSystem)
{
    int result = 0;
    std::vector<int>::iterator iterator{ numbersDecimalSystem.begin() };

    while (iterator != numbersDecimalSystem.end())
    {
        result += *iterator;
        iterator++;
    }

    return result;
}

int conjunction(std::vector<int> numbersDecimalSystem)
{
    std::vector<int>::iterator iterator{ numbersDecimalSystem.begin() };

    int result = *iterator;
    iterator++;

    while (iterator != numbersDecimalSystem.end())
    {
        result *= *iterator;
        iterator++;
    }

    return result;
}

//XOR явхрюрэ еярэ