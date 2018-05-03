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

	Node bag;
	bag["name"] = "data_bag";
	bag["chars"] = root;

	cout << bag << endl;

	if(bag["chars"].remove(1)){
		cout << "remove success" << endl;
	}

	cout << bag << endl;

	cout << bag["name"] << endl;
	cout << bag["chars"] << endl;
	cout << bag["asfdasdf"] << endl;

	return 0;
}
