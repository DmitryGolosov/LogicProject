#include "numberData.h"

numberData::numberData()
{
    numberSystem = rnd(MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
    numberDecimalSystem = rnd(0, MAX_NUMBER_IN_DECIMAL_SYSTEM);

    if (numberSystem != 10)
        numberOriginalSystem = convertNumberInOriginalSystem(numberDecimalSystem, numberSystem);
    else
        numberOriginalSystem = numberDecimalSystem;

    numberBinarySystem = convertDecimalToBinary(numberDecimalSystem);
}
numberData::numberData(int numberSystem, std::bitset<MAX_BIT_DEPTH_NUMBER> numberBinSystem)
{
    numberData::numberSystem = numberSystem;
    numberBinarySystem = numberBinSystem;
    numberDecimalSystem = convertBinaryToDecimal(numberBinSystem);

    if (numberData::numberSystem != 2)
        numberOriginalSystem = convertNumberInOriginalSystem(numberDecimalSystem, numberSystem);
    else
        numberOriginalSystem = numberBinSystem.to_string();
}
int numberData::getNumberSystem()
{
    return numberSystem;
}
std::bitset<MAX_BIT_DEPTH_NUMBER> numberData::getNumberBinarySystem()
{
    return numberBinarySystem;
}
std::string numberData::getNamberOriginalSystem()
{
    return numberOriginalSystem;
}
int numberData::getNumberDecimalSystem()
{
    return numberDecimalSystem;
}


int rnd(int minNumber, int maxNamber)
{
    return minNumber + rand() % (maxNamber - minNumber + 1);
}
int convertBinaryToDecimal(std::bitset<MAX_BIT_DEPTH_NUMBER> bit_number)
{
    return bit_number.to_ulong();
}
std::bitset<MAX_BIT_DEPTH_NUMBER> convertDecimalToBinary(int dec_number)
{
    return std::bitset<MAX_BIT_DEPTH_NUMBER>(dec_number);
}
std::string convertNumberInOriginalSystem(int number, int originalNumberSystem)
{
    std::string result = "";

    while (number > 0)
    {
        int remainder = number % originalNumberSystem;
        result = std::to_string(remainder) + result;
        number /= originalNumberSystem;
    }

    return result;
}