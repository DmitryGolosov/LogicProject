#include <iostream>
#include <vector>
#include <string>
#include <bitset>

#include "constant.h"

#pragma once
class numberData
{
public:
    numberData();
    numberData(int numberSystem, std::bitset<MAX_BIT_DEPTH_NUMBER> numberBinarySystem);
    int getNumberSystem();
    std::bitset<MAX_BIT_DEPTH_NUMBER> getNumberBinarySystem();
    std::string getNamberOriginalSystem();
    int getNumberDecimalSystem();
private:
    int numberSystem;
    std::bitset<MAX_BIT_DEPTH_NUMBER> numberBinarySystem;
    std::string numberOriginalSystem;
    int numberDecimalSystem;
};


int rnd(int minNumber, int maxNamber);
int convertBinaryToDecimal(std::bitset<MAX_BIT_DEPTH_NUMBER> bit_number);
std::bitset<MAX_BIT_DEPTH_NUMBER> convertDecimalToBinary(int dec_number);
std::string convertNumberInOriginalSystem(int number, int originalNumberSystem);