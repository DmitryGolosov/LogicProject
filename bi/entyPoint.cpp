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

    std::cout << "Detailed information is recorded in the logs!\nFile: \"logs.txt\"" << std::endl;
}