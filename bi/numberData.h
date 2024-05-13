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
    int getNumberDecimalSystem();
    std::string getNamberOriginalSystem();
private:
    int numberSystem;
    int numberDecimalSystem;
    std::string numberOriginalSystem;
};


int rnd(int minNumber, int maxNamber);
int convertBinaryToDecimal(std::bitset<MAX_BIT_DEPTH_NUMBER> bit_number);
std::bitset<MAX_BIT_DEPTH_NUMBER> convertDecimalToBinary(int dec_number);
std::string convertNumberInOriginalSystem(int number, int originalNumberSystem);