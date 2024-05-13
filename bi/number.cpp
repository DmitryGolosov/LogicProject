#include "numberData.h"

numberData::numberData()
{
    numberSystem = rnd(MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
    numberDecimalSystem = rnd(0, MAX_NUMBER_IN_DECIMAL_SYSTEM);

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