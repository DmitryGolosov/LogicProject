#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <tuple>

#include "mathb.h"
#include "constant.h"

#pragma once
typedef std::bitset<MAX_BIT_DEPTH_NUMBER>(*functionPointer)(std::vector<std::bitset<MAX_BIT_DEPTH_NUMBER>>);

static functionPointer functions[COUNT_FUNCTIONS] = {
        disjunction, conjunction, additionModuloTwo, identicallyEqual, implication, arrowPier, strokeSchaeffer, deniaImplication,
        denialFirstOperand, firstOperand, secondOperand,
        reverseImplication, deniaReverseImplication,
        deniaSecondOperand
};

static std::map<functionPointer, std::string> functionNameMap
{
    {disjunction, "OR"}, {conjunction, "AND"}, {additionModuloTwo, "XOR"},
    {identicallyEqual, "=="}, {implication, "->"}, {arrowPier, "V"},
    {strokeSchaeffer, "|"}, {deniaImplication, "~->"},
    {denialFirstOperand, "~x"}, {firstOperand, "x"}, {secondOperand, "y"},
    
    {reverseImplication, "<-"}, {deniaReverseImplication, "~<-"},

    {deniaSecondOperand, "~y"}
};