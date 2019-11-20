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
 
bool testProject1(int col1, int col2){

	Scheme header;

	header.push_back("Cat");
	header.push_back("Dog");
	header.push_back("Fish");

	Relation r = Relation("Alpha", header);

	r.addTuple(createTuple({"2", "3", "2"}));
	r.addTuple(createTuple({"3", "3", "2"}));
	r.addTuple(createTuple({"6", "7", "4"}));
	r.addTuple(createTuple({"1", "4", "1"}));
	r.addTuple(createTuple({"1", "2", "5"}));
	
	cout << r.toString() << "\n";
	r = r.project({col1, col2});
	cout << r.toString() << "\n";

	return true;
}

bool testProject2(){

	Scheme header;

	header.push_back("Cat");
	header.push_back("Fish");
	header.push_back("Bird");
	header.push_back("Bunny");

	Relation r = Relation("Alpha", header);

	r.addTuple(createTuple({"1", "5", "2", "4"}));
	r.addTuple(createTuple({"3", "4", "2", "4"}));
	r.addTuple(createTuple({"4", "3", "2", "7"}));
	r.addTuple(createTuple({"1", "5", "8", "3"}));
	r.addTuple(createTuple({"6", "4", "9", "2"}));

	cout << r.toString() << "\n";
	r = r.project({3});
	cout << r.toString() << "\n";

	return true;
}

bool testProject3(){

	Scheme header;

	header.push_back("Cat");
        header.push_back("Fish");
	header.push_back("Bird");
	header.push_back("Bunny");

	Relation r = Relation("Alpha", header);

	r.addTuple(createTuple({"1", "5", "2", "4"}));
	r.addTuple(createTuple({"3", "4", "2", "4"}));
	r.addTuple(createTuple({"4", "3", "2", "7"}));
	r.addTuple(createTuple({"1", "5", "8", "3"}));
	r.addTuple(createTuple({"6", "4", "9", "2"}));

	cout << r.toString() << "\n";
	r = r.project({3, 2, 0});
	cout << r.toString() << "\n";

	return true;
}

int main(){

	testProject1(2, 1);
	cout << "\n\n\n";
	testProject2();
	cout << "\n\n\n";
	testProject3();
	return 0;
}
