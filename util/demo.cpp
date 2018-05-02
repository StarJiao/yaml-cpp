#include "yaml-cpp/yaml.h"                                                                                                                                                          
#include <fstream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <ctime>

using namespace std;
using namespace YAML;
int main(){
	Node root;

	//rooe[0] = 2;
	//root[1] = 5;
	//root[2] = 77;
	//root[3] = 324;


	root[0] = 'h';
	root[1] = 'e';
	root[2] = 'l';
	root[3] = 'o';


	if(root.IsSequence()){
		cout << "sequence" << endl;
		cout << root << endl;
	}

	if(root.remove(1)){
		cout << "remove success" << endl;
	}

	if(root.IsMap()){
		cout << "map" << endl;
	}

	if(root.IsSequence()){
		cout << "sequence" << endl;
	}

	cout << root << endl;

	return 0;
}
