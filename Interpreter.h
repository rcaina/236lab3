#pragma once
#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <string>
#include <iostream>
#include <vector>
#include "database.h"
#include "parser.h"
#include "Relation.h"

using namespace std;

//Process schemes into relations

class Interpreter {

	public:
		Interpreter(parser& datalogProgram); //{
		
	//		this->dL = datalogProgram;
	//	}

		void setDatabase();
		
	//	evaluatePredicate(){}  (will need this for lab 4)

	private:

		parser dL = parser();

};
#endif


