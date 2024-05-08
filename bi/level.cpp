#include "levelData.h"

level::level(int minCountNumbers, int maxCountNumbers)
{
    int countNumbersAtLevel = rnd(minCountNumbers, maxCountNumbers);

    for (int i = 0; i < countNumbersAtLevel; i++)
    {
        data.push_back(numberData());
        // ¬опрос: разр€дность числе берем относительно 10 системы счислени€?
        // ѕереполнени€ при операци€х ...
    }
}

int level::countNumbers()
{
    return data.size();
}
numberData level::getNamberDataOfIndex(int index)
{
    return data[index];
}