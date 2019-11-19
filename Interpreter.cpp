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
	
	for(predicate scheme: dL.getSchemes()){
		
		Scheme header;
		for(string list: scheme.getAttributes()){
			header.push_back(list);
		}

		Relation r = Relation(scheme.getName(), header);
		db.insert({r.getName(), r});
	}
	
	for(predicate fact: dL.getFacts()){
	
		Tuple t;
		for(string attribute: fact.getAttributes()){
		
			t.push_back(attribute);
		}
		db.at(fact.getName()).addTuple(t);
	}

}

void Interpreter::evalQueries(){
	
	for(Query q: dL.getQueries()){
//new relation
//loop over each param in query
//-flowchart
	}
}
