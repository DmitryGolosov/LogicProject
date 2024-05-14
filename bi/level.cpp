#include "levelData.h"

level::level(int minCountNumbers, int maxCountNumbers)
{
    int countNumbersAtLevel = rnd(minCountNumbers, maxCountNumbers);

    for (int i = 0; i < countNumbersAtLevel; i++)
    {
        data.push_back(numberData());
    }
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


otherLevel::otherLevel(int minCountNumbers, int maxCountNumbers, level previousLevel) : level(minCountNumbers, maxCountNumbers)
{
    numberLevel = previousLevel.getNumberLevel() + 1;
    int countNumbersAtLevel = rnd(minCountNumbers, maxCountNumbers);

    for (int i = 0; i < countNumbersAtLevel; i++)
    {
        int function = rnd(COUNT_FUNCTIONS - COUNT_FUNCTIONS, COUNT_FUNCTIONS - 1);
        int countNumbersAtFunction = rnd(MIN_COUNT_NUMBERS_AT_FUNCTIONS, previousLevel.countNumbers() - 1);
        int numberSystem = rnd(MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
        std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> numbersBinarySystem;
        
        std::random_device rd;
        std::mt19937 g(rd());
        
        std::vector<numberData> previousDats = previousLevel.getCopyData();
        std::shuffle(std::begin(previousDats), std::end(previousDats), g);

        for (int i = 0; i < countNumbersAtFunction; i++)
            numbersBinarySystem.push_back(previousDats[i].getNumberBinarySystem());

        functionPointer selectedFunction = functions[function];
        
        std::bitset<MAX_BIT_DEPTH_NUMBER> numberBinarySystem = selectedFunction(numbersBinarySystem);
        data.push_back(numberData(numberSystem, numberBinarySystem));
        
        //selectedFunction(numberBinarySystem)
        //functionNameMap[selectedFunction];
        /*std::cout << "name: " << functionNameMap[selectedFunction] << ", result: " << selectedFunction(numbers) << std::endl; */
        //std::cout << deniaImplication(numbers) << std::endl;*/
    }
}