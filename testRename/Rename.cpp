#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
#include <map>
#include "Interpreter.h"

using namespace std;

Tuple createTuple(vector<string> tuples){

	Tuple t;

	for(unsigned i = 0; i < tuples.size(); i++){

		t.push_back(tuples.at(i));
	}

	return t;
	
}

bool testRename(){

	Scheme header;

	header.push_back("Football");
	header.push_back("Soccer");
	header.push_back("Racing");
	header.push_back("Water");

	Relation r = Relation("Sports", header);

	r.addTuple(createTuple({"Ball", "Ball", "Baton", "Swim"}));
	r.addTuple(createTuple({"Pass", "Goalie", "Move", "Stroke"}));
	r.addTuple(createTuple({"Run", "Flop", "Sprint", "Swim"}));
	r.addTuple(createTuple({"Kick", "Kick", "Pound", "Kick"}));

	Scheme newHeader;

	newHeader.push_back("Football");
	newHeader.push_back("Soccer");
	newHeader.push_back("Racing");
	newHeader.push_back("Swimming");

	cout << r.toString() << "\n";
	r = r.rename(newHeader);
	cout << r.toString() << "\n";

														        return true;
}

int main(){

	testRename();

	return 0;
}
