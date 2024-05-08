#include <iostream>
#include <vector>

#include "numberData.h"

#pragma once
class level
{
public:
    level(int minCountNumbers, int maxCountNumbers);
    int countNumbers();
    numberData getNamberDataOfIndex(int index);
private:
    std::vector<numberData> data;
};