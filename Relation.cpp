#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <ctype.h>
#include "Relation.h"

using namespace std;

Relation::Relation(string name, Scheme scheme) {

	this->name = name;
	this->scheme = scheme;
}

string Relation::getName(){

	return name;
}

int Relation::getSize(){

	return tupleVect.size();
}

Scheme Relation::getScheme(){

	return scheme;
}

Relation Relation::select1(string val, int column){

	return this;
}

Relation Relation::select2(int column1, int column2){

	return this;
}

Relation Relation::project(vector <int>){
	
	return this;
}

Relation Relation::rename(Scheme header){

	return this;
}

void Relation::addTuple(Tuple tup){

	tupleVect.insert(tup);
}

string Relation::toString(){

	stringstream ss;

	ss.str("");
	for(Tuple tup: tupleVect){

		if(tup.size() > 0){
		
			for(unsigned i = 0; i < tup.size(); i++){

				ss << scheme[i] << "=" <<tup.at(i);
				if(i < tup.size() - 1){
				
					ss << " ";
				}
			}
			
			if(tup.size() > 0){
	
				ss << "\n";
			}
		}
	}
	
	return ss.str();
}


