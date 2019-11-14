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

	this->dL = datalogProgram;
	//db = new Database;

	for(predicate scheme: dL.getSchemes()){

		Relation r = Relation(scheme.getName(), scheme.getAttributes());
		db.insert((r.getName(), r));
	}

}

void Interpreter::setDatabase(){

	map<string, Relation> relations;

}
