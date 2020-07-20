//============================================================================
// Name        : cpp-types.cpp
// Author      : Tobias Gion
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {

	int i;
	vector<string> vec_str;

	for (i = 0; i < argc; i++)
	{
		vec_str.push_back(argv[i]);
		std::cout << "Argument #" << i << " : " << vec_str[i] << std::endl;
	}
	return 0;
}
