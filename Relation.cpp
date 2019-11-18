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

	return tuples.size();
}

Scheme Relation::getScheme(){

	return scheme;
}

Relation Relation::select1(int column, string val){

	Relation result = Relation(name, scheme);

	for(Tuple t: tuples){

		if(t.at(column).compare(val) == 0){
		
			result.addTuple(t);
		}
	}
	return result;
}

Relation Relation::select2(int column1, int column2){

	Relation result = Relation(name, scheme);

	
	return result;
}

Relation Relation::project(vector <int>){
	
	Relation result = Relation(name, scheme);

	

	return result;
}

Relation Relation::rename(Scheme header){

	Relation result = Relation(name, scheme);
		
	return result;
}

void Relation::addTuple(Tuple tup){

	tuples.insert(tup);
}

string Relation::toString(){

	stringstream ss;

	ss.str("");
	for(Tuple tup: tuples){

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

int Relation::getColumn(string attribute){

	for(unsigned i = 0; i < scheme.size(); i++){
		
		if(scheme.at(i).compare(attribute) == 0){
		
			return i;
		}
	}

	return -1;
}
