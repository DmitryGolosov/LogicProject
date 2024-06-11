#include <iostream>
#include <vector>
#include <random>

#include "mathb.h"
#include "functionMap.h"
#include "numberData.h"
#include "operation.h"

#pragma once
class level
{
public:
    level(int minCountNumbers, int maxCountNumbers);
    int countNumbers();
    int getNumberLevel();
    numberData getDataOfIndex(int index);
    std::vector<numberData> getCopyData();
protected:
    std::vector<numberData> data;
    int numberLevel = 0;
};

class firstLevel : public level
{
public:
    firstLevel(int minCountNumbers, int maxCountNumbers);
};

class otherLevel : public level
{
public:
    otherLevel(int minCountNumbers, int maxCountNumbers, level previousLevel);
    std::vector<operation> getCopyOperation();
    std::vector<numberData> getCopyPreviousData();
private:
    std::vector<numberData> previousData;
    std::vector<operation> operations;
};