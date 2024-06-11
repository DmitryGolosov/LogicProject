#include "logsData.h"

const std::string nameFile = "logs.txt";
const std::string printStarting (70, '=');

void recordFirstIteration(firstLevel level, int countLevels)
{
	std::ofstream file(nameFile, std::ios::app);

	if (file.is_open())
	{
		int size = level.countNumbers();
		std::time_t const now_c = std::time(nullptr);

		file << printStarting << std::endl;
		#pragma warning(suppress : 4996)
		file << "ALGORITHM OF BITWISE FUNCTIONS WITH TWO VARIABLES, " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;
		file << printStarting << std::endl;

		file << "Count levels: " << countLevels << ". Elements zero level (" << size << "):" << std::endl;
		file << "\nIndex\tSystem\tOrig\tBinary\tDecimal" << std::endl;

		for (int i = 0; i < size; i++)
		{
			numberData data = level.getDataOfIndex(i);
			file << i << "\t" << data.getNumberSystem() << "\t" << data.getNamberOriginalSystem() << "\t" 
				<< data.getNumberBinarySystem() << "\t" << data.getNumberDecimalSystem() << std::endl;
		}
	}

	file.close();
}

void recordSubsequentIteration(otherLevel currentlevel)
{
	std::ofstream file(nameFile, std::ios::app);

	if (file.is_open())
	{
		auto operations = currentlevel.getCopyOperation();
		int size = operations.size();

		file << "\nCurrent level: " << currentlevel.getNumberLevel() << ". Generation functions (" << size << "):\n" << std::endl;

		file << "func\t";
		for (int i = 0; i < size; i++) 
			file << "f" << i << "\t";

		file << "\noper\t";
		for (int i = 0; i < size; i++)
			file << operations[i].getFunctionName() << "\t";

		file << "\nsystem\t";
		for (int i = 0; i < size; i++)
			file << operations[i].getNumberSystem() << "\t";

		file << "\n\nOperations for calculations:" << std::endl;

		auto lastData = currentlevel.getCopyPreviousData();
		int lastSize = lastData.size();

		for (int i = 0; i < size; i++)
		{
			file << "Operation: " << operations[i].getFunctionName() << ", system: " << operations[i].getNumberSystem() << ", numbers-system: ";
			auto numbers = operations[i].getCopyNumbersAtFunction();
			int coutNumbersAtFunction = operations[i].countNumbersAtFunction();
			for (int j = 0; j < coutNumbersAtFunction; j++)
			{
				file << numbers[j].getNamberOriginalSystem() << "-" << numbers[j].getNumberSystem() << ", ";
			}

			file << "result: "
				<< operations[i].getResultOperation().getNamberOriginalSystem() << "-"
				<< operations[i].getResultOperation().getNumberSystem() << ", "
				<< operations[i].getResultOperation().getNumberBinarySystem() << "-2" << std::endl;
		}
	}

	file.close();
}

void endRecording()
{
	std::ofstream file(nameFile, std::ios::app);

	if (file.is_open())
		file << printStarting << "\n\n\n\n" << std::endl;

	file.close();
}