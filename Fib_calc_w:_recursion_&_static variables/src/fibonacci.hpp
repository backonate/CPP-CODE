/*
 * fibonacci.hpp
 *
 *  Created on: Jun. 21, 2023
 *      Author: xubuntu
 */

#pragma once
#include "InfInt.h"


//using fibonacciType1 = long;  // create an alias declaration (a type alias) //typedef
using fibonacciType1 = InfInt;  // create an alias declaration (a type alias)

fibonacciType1 fibonacci(long number);
