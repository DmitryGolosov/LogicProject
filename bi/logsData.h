#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <chrono>

#include "levelData.h"

#pragma once
void recordFirstIteration(firstLevel level, int countLevels);
void recordSubsequentIteration(otherLevel level);
void endRecording();

void prStartingLogs(std::string name, int countIteration);
void prExamplesLogs(std::vector<std::string> usreResponses);
void prEndingLogs(int countExamples, int countUserCorrectAnswers);