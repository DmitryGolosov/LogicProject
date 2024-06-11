#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <tuple>

#include "logsData.h"
#include "constant.h"
#include "levelData.h"
#include "numberData.h"

void main()
{
    srand(time(0));

    int countLevels = rnd(MIN_COUNT_LEVELS, MAX_COUNT_LEVELS);

    firstLevel fLevel = firstLevel(MIN_COUNT_NUMBERS_ANY_LEVEL, MAX_COUNT_NUMBERS_FIRST_LEVEL);
    recordFirstIteration(fLevel, countLevels);

    otherLevel p1Level = otherLevel(MIN_COUNT_NUMBERS_ANY_LEVEL, MAX_COUNT_NUMBERS_INTERMEDIATE_LEVEL, fLevel);
    recordSubsequentIteration(p1Level);

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
    }

    endRecording();

    std::cout << "Detailed information is recorded in the logs!\nFile: \"logs.txt\"" << std::endl;
}