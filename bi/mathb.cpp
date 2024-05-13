#include "mathb.h"

// ÂÑÅ ĞÀÑ×ÅÒÛ ÏĞÎÈÇÂÎÄßÒÑß Ñ ÔÓÍÊÖÈßÌÈ 2-ÓÕ ÏÅĞÅÌÅÍÍÛÕ Â ÄÂÎÈ×ÍÎÌ ÂÈÄÅ

std::bitset<MAX_BIT_DEPTH_NUMBER> processBits(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits, std::function<std::bitset<MAX_BIT_DEPTH_NUMBER>(std::bitset<MAX_BIT_DEPTH_NUMBER>, std::bitset<MAX_BIT_DEPTH_NUMBER>)> operation)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = operation(result, *iterator);
        iterator++;
    }

    return result;
}


std::bitset<MAX_BIT_DEPTH_NUMBER> disjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return a | b; });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> conjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return a & b; });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> additionModuloTwo(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return a ^ b; });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> identicallyEqual(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return ~(a ^ b); });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> implication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return ~a | b; });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> arrowPier(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return ~(a | b); });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> strokeSchaeffer(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return ~(a & b); });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return a & (~b); });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> denialFirstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return ~dataBits[0];
}

std::bitset<MAX_BIT_DEPTH_NUMBER> firstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return dataBits[0];
}

std::bitset<MAX_BIT_DEPTH_NUMBER> secondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return dataBits.back();
}

std::bitset<MAX_BIT_DEPTH_NUMBER> reverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return a | (~b); });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaReverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return processBits(dataBits, [](std::bitset<MAX_BIT_DEPTH_NUMBER> a, std::bitset<MAX_BIT_DEPTH_NUMBER> b) { return ~a & b; });
}

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaSecondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    return ~dataBits.back();
}
