//============================================================================
// Name        : demo_classes_vector_pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <vector>
#include "Parser.h"
#include "StringResult.h"

using namespace std;

int main() {
	//the string to parse
	char *ps = {"a very good boy Barcly dog and "};

	//the tags to look for
	char *p1 = "very";
	char *p2 = "dog";

	//how far past p1 to look
	int ilen1 = strlen(p1);

	//
	Parser p(ps);

	//begin and end of data
	char *pb= NULL;
	char *pe= NULL;

	//where to plunk the data
	vector<StringResult> myv;

	//pointer to start tag start
	pb = p.findTag(p1,ps);
	if (pb){

		//start the search 1 past the tag
		pb+=ilen1+1;

		//pointer to end tag start
		pe = p.findTag(p2,pb);

		//if here got em both
		if (pe)
		{
			//create a RAII holder for the data
			StringResult myRes(pb,pe);

			//store on the vector
			myv.push_back(myRes);
		}
	}
}
