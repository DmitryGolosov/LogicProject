#include <iostream>

#pragma once
static class logs
{
public:
	void recordFirstIteration();
	void recordSubsequentIteration();
private:
	std::string nameFile = "logs.txt";
};