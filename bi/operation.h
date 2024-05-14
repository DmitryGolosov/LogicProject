#include "numberData.h"
#include "mathb.h"
#include "functionMap.h"

#pragma once
class operation
{
public:
	operation(functionPointer func, std::vector<numberData> numbers, int numberSystem, numberData resultOperation);
	std::string getFunctionName();
	int getNumberSystem();
	int countNumbersAtFunction();
	std::vector<numberData> getCopyNumbersAtFunction();
	numberData getResultOperation();
private:
	functionPointer function;
	std::vector<numberData> numbers;
	int numberSystem;
	numberData resultOperation;
};
