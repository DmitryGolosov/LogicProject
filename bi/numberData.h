#include <iostream>
#include <vector>
#include <string>

#pragma once
const int MIN_NUMBER_SYSTEM = 2;
const int MAX_NUMBER_SYSTEM = 10;
const int MAX_BIT_DEPTH_NUMBER = pow(2, 4) - 1; // 15

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
int convertNumberInBinSystem(int number, int initialNumberSystem);
int convertNumberInDecimalSystem(int number, int initialNumberSystem);
std::string convertNumberInOriginalSystem(int number, int originalNumberSystem);