#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <tuple>
#include <conio.h>

#include "logsData.h"
#include "constant.h"
#include "levelData.h"
#include "numberData.h"

void consoleCL()
{
    std::cout << "To continue the program, press any key...";
    _getch();
    system("cls");
}

std::vector<numberData> algorithm()
{
    int countLevels = rnd(MIN_COUNT_LEVELS, MAX_COUNT_LEVELS);

    std::cout << "\nALGORITHM OF BITWISE FUNCTIONS WITH TWO VARIABLES.\nCount levels:"
        << countLevels << std::endl;

    firstLevel fLevel = firstLevel(MIN_COUNT_NUMBERS_ANY_LEVEL, MAX_COUNT_NUMBERS_FIRST_LEVEL);
    recordFirstIteration(fLevel, countLevels);

    consoleCL();

    otherLevel p1Level = otherLevel(MIN_COUNT_NUMBERS_ANY_LEVEL, MAX_COUNT_NUMBERS_INTERMEDIATE_LEVEL, fLevel);
    recordSubsequentIteration(p1Level);

    consoleCL();

    for (int i = 3; i <= countLevels; i++)
    {
        int maxCountNumber;
        if (i == countLevels - 1)
            maxCountNumber = MAX_COUNT_NUMBERS_PENULTIMATE_LEVEL;
        else
            if (i == countLevels)
                maxCountNumber = MAX_COUNT_NUMBERS_LAST_LEVEL;
            else
                maxCountNumber = MAX_COUNT_NUMBERS_INTERMEDIATE_LEVEL;

        otherLevel p2Level = otherLevel(MIN_COUNT_NUMBERS_ANY_LEVEL, maxCountNumber, p1Level);
        p1Level = p2Level;
        recordSubsequentIteration(p2Level);

        consoleCL();
    }

    endRecording();

    return p1Level.getCopyData();
}

void main()
{
    srand(time(0));

    std::string name;
    int countExamples;
    int countUserCorrectAnswers = 0;

    std::cout << "Enter your initials (last/first name, patronymic): ";
    std::getline(std::cin, name);
    std::cout << "Enter the number of examples you want to solve: ";
    std::cin >> countExamples;

    prStartingLogs(name, countExamples);

    for (int i = 0; i < countExamples; i++)
    {
        auto correctAnswers = algorithm();
        int countCorrectAnswers = correctAnswers.size();

        int countUserAnswers;
        std::cout << "You have calculated the last level of the algorithm.\nEnter the number of responses received: ";
        std::cin >> countUserAnswers;

        std::vector<std::string> data;
        if (countCorrectAnswers == countUserAnswers)
        {
            int countUserCorrectAnswersIteration = 0;

            for (int i = 0; i < countCorrectAnswers; i++)
            {
                std::string userAnswer;
                std::cout << "\nEnter the answer in the original number system (exp 32): ";
                std::cin >> userAnswer;
                std::cout << std::endl;

                data.push_back(userAnswer);
                if (correctAnswers[i].getNamberOriginalSystem() == userAnswer)
                    countUserCorrectAnswersIteration++;
            }

            if (countUserCorrectAnswersIteration == countCorrectAnswers)
                countUserCorrectAnswers++;
        }
        else
            data.push_back("The number of outputs was calculated incorrectly");

        prExamplesLogs(data);
        consoleCL();
    }

    std::cout << "You answered " << countUserCorrectAnswers << "/" << countExamples << " of the questions correctly." << std::endl;
    prEndingLogs(countExamples, countUserCorrectAnswers);
}