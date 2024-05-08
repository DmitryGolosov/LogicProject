#include "numberData.h"

numberData::numberData()
{
    numberSystem = rnd(MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
    numberDecimalSystem = rnd(0, MAX_BIT_DEPTH_NUMBER);

    if (numberSystem != 10)
        numberOriginalSystem = convertNumberInOriginalSystem(numberDecimalSystem, numberSystem);
    else
        numberOriginalSystem = numberDecimalSystem;
}
int numberData::getNumberDecimalSystem()
{
    return numberSystem;
}
std::string numberData::getNamberOriginalSystem()
{
    return numberOriginalSystem;
}


int rnd(int minNumber, int maxNamber)
{
    return minNumber + rand() % (maxNamber - minNumber + 1);
}
int convertNumberInBinSystem(int number, int initialNumberSystem)
{
    // ...
    return 1;
}
int convertNumberInDecimalSystem(int number, int initialNumberSystem)
{
    // ...
    return 1;
}
std::string convertNumberInOriginalSystem(int number, int originalNumberSystem)
{
    std::string result = "";
    int g = number;
    while (number > 0)
    {
        int remainder = number % originalNumberSystem;
        result = std::to_string(remainder) + result;
        number /= originalNumberSystem;
    }

    return result;
}