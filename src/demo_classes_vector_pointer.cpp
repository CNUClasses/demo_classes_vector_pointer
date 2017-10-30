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
	char *ps = {"a very good boy Barcly dog and "};

	char *p1 = "very";
	char *p2 = "dog";

	int ilen1 = strlen(p1);

	Parser p(ps);

	char *pb= NULL;
	char *pe= NULL;

	vector<StringResult> myv;

	pb = p.findTag(p1,ps);
	if (pb){
		pb+=ilen1+1;	//begginning of string
		pe = p.findTag(p2,pb);

		if (pe)
		{
			StringResult myRes(pb,pe);
			//got em both, lets get
			myv.push_back(myRes);
		}
	}
}
