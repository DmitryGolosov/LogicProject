#include "mathb.h"

// ��� ������� ������������ � ��������� 2-�� ���������� � �������� ����

std::bitset<MAX_BIT_DEPTH_NUMBER> disjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::bitset<MAX_BIT_DEPTH_NUMBER> result;
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator { dataBits.begin() };

    while (iterator != dataBits.end())
    {
        result |= *iterator;
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> conjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator { dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result &= *iterator;
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> XOR(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator { dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result ^= *iterator;
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> identicallyEqual(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator { dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = ~(result ^ *iterator);
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> implication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator { dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = ~result | *iterator;
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> arrowPier(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = ~(result | *iterator);
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> strokeSchaeffer(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = ~(result & *iterator);
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = result & (~*iterator);
        iterator++;
    }

    return result;
}

// ...

std::bitset<MAX_BIT_DEPTH_NUMBER> reverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = result | (~*iterator);
        iterator++;
    }

    return result;
}

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaReverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits)
{
    std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>::iterator iterator{ dataBits.begin() };

    std::bitset<MAX_BIT_DEPTH_NUMBER> result = *iterator;
    iterator++;

    while (iterator != dataBits.end())
    {
        result = ~result & *iterator;
        iterator++;
    }

    return result;
}