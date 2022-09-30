/*
 * Main.cpp
 *
 *  Created on: 2022. 9. 30.
 *      Author: keunholee
 */

#include <stdio.h>
#include <tchar.h>
#include "Calculator.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Calculator c;
	c.Add(1,2);
	c.ShowResult();
	c.Substract(1,2);
	c.ShowResult();
}


