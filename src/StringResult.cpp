/*
 * StringResult.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: keith
 */
#include <string.h>
#include "StringResult.h"

StringResult::StringResult(char *pb, char *pe) {
	if (!pb || !pe)
		return;

	//if its an array we are subtracting by index
	int len =pe - pb;
	p = new char[len+1];
	strncpy(this->p,pb,len);
	p[len]='\0';
}

StringResult::~StringResult() {
	destroy();
}

StringResult& StringResult::operator=(StringResult const &rhs){
	//only take action if not auto-assignment
	if ( this != &rhs )
	{
		destroy();
		copy( rhs );
	}
	// return (reference to) current object for
	// chain-assignments
	return *this;
}

//copy constructor, destructor
StringResult::StringResult(StringResult const &other){
	copy(other);
}
//EDIT THIS...copy other objects data
void StringResult::copy (const StringResult &rhs )
{
	//be sure to put POINTER deep copy here
	//as well as other member variables
	//ex. memcpy(m_pbString, rhs.m_pbString, m_dwLen);
	int lenPlusNull = strlen(rhs.p)+1;
	p = new char[lenPlusNull];
	memcpy(p,rhs.p,lenPlusNull);
}

//EDIT THIS...deallocate and initialize
void StringResult::destroy ()
{
	//free memory and initialize
	if (p)
		delete [] p;
	p = NULL;
}


