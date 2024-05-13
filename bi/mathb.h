#include <iostream>
#include <bitset>
#include <vector>
#include <functional>

#include "constant.h"

#pragma once
std::bitset<MAX_BIT_DEPTH_NUMBER> disjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // AND (0) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> conjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // OR (1) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> additionModuloTwo(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Addition modulo two (2) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> identicallyEqual(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Identically equal (3) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> implication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Implication (4) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> arrowPier(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Arrow the Pier (5) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> strokeSchaeffer(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Schaeffer's Stroke (6) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Denial of implication (7) - ���������

std::bitset<MAX_BIT_DEPTH_NUMBER> denialFirstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial first operand (8) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> firstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The first operand (9) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> secondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The second operand (10) - ���������

std::bitset<MAX_BIT_DEPTH_NUMBER> reverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The reverse implication (11) - ���������
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaReverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial reverse implication (12) - ���������

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaSecondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial second operand (13) - ���������