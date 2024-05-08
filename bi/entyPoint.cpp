#include <iostream>
#include <vector>
#include <string>

#include "logsData.h"
#include "constant.h"
#include "levelData.h"
#include "numberData.h"
#include "mathb.h"

void main()
{
    srand(time(0));
    int countLevels = rnd(MIN_COUNT_LEVELS, MAX_COUNT_LEVELS);

    level firstLevel = level(MIN_COUNT_NUMBERS_ANY_LEVEL, MAX_COUNT_NUMBERS_FIRST_LEVEL);

    std::vector<int> numbers{ 10, 20, 30, 40 };
    std::cout << conjunction(numbers) << std::endl;
}