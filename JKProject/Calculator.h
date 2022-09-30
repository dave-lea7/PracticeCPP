/*
 * Calculator.h
 *
 *  Created on: 2022. 9. 30.
 *      Author: keunholee
 */

#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include <string>

class Calculator 
{
	public:
		Calculator();
		virtual ~Calculator();
		void Add(int x, int y);
		void Substract(int x, int y);
		void ShowResult();
	private:
		int a;
		int b;
		int result;		
	public :
		std::string timeS;
};

#endif /* CALCULATOR_H_ */
