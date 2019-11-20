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

bool testProject(){

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

        cout << r.toString() << "\n";
        r = r.project({2, 1});
        cout << r.toString() << "\n";

														        return true;
}

int main(){

	testProject();

	return 0;
}

