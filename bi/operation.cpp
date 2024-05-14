#include "operation.h"

operation::operation(functionPointer func, std::vector<numberData> numbers, int numberSystem, numberData resultOperation)
{
	function = func;
	operation::numbers = numbers;
	operation::numberSystem = numberSystem;
	operation::resultOperation = resultOperation;
}

std::string operation::getFunctionName()
{
	return functionNameMap[function];
}

int operation::getNumberSystem()
{
	return numberSystem;
}

int operation::countNumbersAtFunction()
{
	return numbers.size();
}

std::vector<numberData> operation::getCopyNumbersAtFunction()
{
	std::vector<numberData> copyNumbers(numbers);
	return copyNumbers;
}

numberData operation::getResultOperation()
{
	return resultOperation;
}