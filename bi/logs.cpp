#include "logsData.h"

const std::string nameFile = "logs.txt";
const std::string printStarting (100, '=');

void recordFirstIteration(firstLevel level, int countLevels)
{
	std::ofstream file(nameFile, std::ios::app);

	if (file.is_open())
	{
		std::time_t const now_c = std::time(nullptr);

		file << printStarting << std::endl;
		#pragma warning(suppress : 4996)
		file << "ALGORITHM OF BITWISE FUNCTIONS WITH TWO VARIABLES, " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;
		file << printStarting << std::endl;

		file << "Count levels: " << countLevels << ". Elements first level:" << std::endl;
		file << "\nIndex\tSystem\tOrig\tBinary\tDecimal" << std::endl;

		int size = level.countNumbers();
		for (int i = 0; i < size; i++)
		{
			numberData data = level.getDataOfIndex(i);
			file << i << "\t" << data.getNumberSystem() << "\t" << data.getNamberOriginalSystem() << "\t" 
				<< data.getNumberBinarySystem() << "\t" << data.getNumberDecimalSystem() << std::endl;
		}

		file << std::endl;
	}

	file.close();
}

void recordSubsequentIteration(otherLevel currentlevel)
{
	std::ofstream file(nameFile, std::ios::app);

	//if (file.is_open())
	//{
	//	int size = level.countNumbers();
	//	file << "Current level: " << currentlevel.numberLevel() << ". Generation function:\n" << std::endl;

	//	/*for (int i = 0; i < size; i++) file << i << "\t";
	//	file << std::endl;*/


	//}

	file.close();
}