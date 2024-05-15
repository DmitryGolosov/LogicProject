#include "levelData.h"

level::level() {}

level::level(int minCountNumbers, int maxCountNumbers)
{
    int countNumbersAtLevel = rnd(minCountNumbers, maxCountNumbers);

    std::cout << "\nIndex\tSystem\tOrig\tBinary\tDecimal" << std::endl;

    for (int i = 0; i < countNumbersAtLevel; i++)
    {
        data.push_back(numberData());
        std::cout << i << "\t" << data[i].getNumberSystem() << "\t" << data[i].getNamberOriginalSystem() << "\t"
            << data[i].getNumberBinarySystem() << "\t" << data[i].getNumberDecimalSystem() << std::endl;
    }

    std::cout << std::endl;
}

int level::countNumbers()
{
    return data.size();
}

int level::getNumberLevel()
{
    return numberLevel;
}

numberData level::getDataOfIndex(int index)
{
    return data[index];
}

std::vector<numberData> level::getCopyData()
{
    std::vector<numberData> copyData(data);
    return copyData;
}

firstLevel::firstLevel(int minCountNumbers, int maxCountNumbers) : level(minCountNumbers, maxCountNumbers)
{ };


otherLevel::otherLevel(int minCountNumbers, int maxCountNumbers, level lastLevel) : level()
{
    previousData = lastLevel.getCopyData();
    numberLevel = lastLevel.getNumberLevel() + 1;

    std::cout << "Level " << numberLevel << ":" << std::endl;

    int countNumbersAtLevel = rnd(minCountNumbers, maxCountNumbers);

    for (int i = 0; i < countNumbersAtLevel; i++)
    {
        int function = rnd(COUNT_FUNCTIONS - COUNT_FUNCTIONS, COUNT_FUNCTIONS - 1);
        int countNumbersAtFunction = rnd(MIN_COUNT_NUMBERS_AT_FUNCTIONS, lastLevel.countNumbers());
        int numberSystem = rnd(MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
        std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> numbersBinarySystem;
        
        std::random_device rd;
        std::mt19937 g(rd());
        
        std::vector<numberData> previousDats = lastLevel.getCopyData();
        std::shuffle(std::begin(previousDats), std::end(previousDats), g);

        functionPointer selectedFunction = functions[function];
        std::cout << "Operation " << functionNameMap[selectedFunction] << ". Number to calculate (number/system): ";

        std::vector<numberData> numbers;
        for (int i = 0; i < countNumbersAtFunction; i++)
        {
            numbersBinarySystem.push_back(previousDats[i].getNumberBinarySystem());
            numbers.push_back(previousDats[i]);

            std::cout << previousDats[i].getNamberOriginalSystem() << "-" << previousDats[i].getNumberSystem() << " ";
        }

        std::cout << "\nThe answer is in the number system: " << numberSystem << "\n" << std::endl;

        std::bitset<MAX_BIT_DEPTH_NUMBER> numberBinarySystem = selectedFunction(numbersBinarySystem);
        numberData result = numberData(numberSystem, numberBinarySystem);
        
        data.push_back(result);
        operations.push_back(operation(selectedFunction, numbers, numberSystem, result));
    }
}

std::vector<operation> otherLevel::getCopyOperation()
{
    std::vector<operation> copyOperation(operations);
    return copyOperation;
}

std::vector<numberData> otherLevel::getCopyPreviousData()
{
    std::vector<numberData> copyPreviousData(previousData);
    return copyPreviousData;
}