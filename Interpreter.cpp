#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
#include <map>
#include "Interpreter.h"

using namespace std;

Interpreter::Interpreter(parser& datalogProgram){

//	this->dL = datalogProgram;
}

void Interpreter::setDatabase(){

	map<string, Relation> relations;

	for(predicate pred: this->dL){
		
		
	}
}
