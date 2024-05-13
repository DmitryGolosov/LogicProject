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

    auto b1 = convertDecimalToBinary(13);
    auto b2 = convertDecimalToBinary(9);
    auto b3 = convertDecimalToBinary(6);


    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> numbers { b1, b2, b3 };
    std::cout << deniaSecondOperand(numbers) << std::endl;
}