#include <iostream>
#include <bitset>
#include <vector>

#include "constant.h"

#pragma once
std::bitset<MAX_BIT_DEPTH_NUMBER> disjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // AND (0)
std::bitset<MAX_BIT_DEPTH_NUMBER> conjunction(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // OR (1)
std::bitset<MAX_BIT_DEPTH_NUMBER> XOR(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // XOR (2)
std::bitset<MAX_BIT_DEPTH_NUMBER> identicallyEqual(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Identically equal (3)
std::bitset<MAX_BIT_DEPTH_NUMBER> implication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Implication (4)
std::bitset<MAX_BIT_DEPTH_NUMBER> arrowPier(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Arrow the Pier (5)
std::bitset<MAX_BIT_DEPTH_NUMBER> strokeSchaeffer(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Schaeffer's Stroke (6)
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // Denial of implication (7)
// ...
std::bitset<MAX_BIT_DEPTH_NUMBER> reverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The reverse implication (11)
std::bitset<MAX_BIT_DEPTH_NUMBER> deniaReverseImplication(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>> dataBits); // The denial reverse implication (12)
// ...