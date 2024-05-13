#include <iostream>
#include <bitset>
#include <vector>
#include <functional>

#include "constant.h"

#pragma once
std::bitset<MAX_BIT_DEPTH_NUMBER> disjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // AND (0) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> conjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // OR (1) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> additionModuloTwo(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Addition modulo two (2) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> identicallyEqual(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Identically equal (3) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> implication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Implication (4) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> arrowPier(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Arrow the Pier (5) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> strokeSchaeffer(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Schaeffer's Stroke (6) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Denial of implication (7) - опнбепемн

std::bitset<MAX_BIT_DEPTH_NUMBER> denialFirstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial first operand (8) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> firstOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The first operand (9) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> secondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The second operand (10) - опнбепемн

std::bitset<MAX_BIT_DEPTH_NUMBER> reverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The reverse implication (11) - опнбепемн
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaReverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial reverse implication (12) - опнбепемн

std::bitset<MAX_BIT_DEPTH_NUMBER> deniaSecondOperand(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial second operand (13) - опнбепемн