/*
 * Parser.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: keith
 */
#include <string.h>
#include "Parser.h"

Parser::Parser(const char *p) {
	if (!p)
		return;
	int len =strlen(p) + 1;
	this->p = new char[len];
	strncpy(this->p,p,len);
}

Parser::~Parser() {
	destroy();
}
char* Parser::findTag(char *p1, char* pstr){
	if (!p1 || !pstr)
		return NULL;
	int ip1 = strlen(p1);
	int ipstr = strlen(pstr);

	for(int j =0;j<ipstr;j++){
		if (*p1 == *(pstr+j))
			if (strncmp(p1,(pstr+j),ip1) ==0)
				return (pstr+j);
	}
	return NULL;
}

void Parser::destroy() {
	if (p)
		delete [] p;
	p=0;
}

//void Parser::copy(Parser const &rhs){
//	//be sure to put POINTER deep copy here
//	//as well as other member variables
//	//ex. memcpy(m_pbString, rhs.m_pbString, m_dwLen);
//	int lenPlusNull = strlen(rhs.p)+1;
//	p = new char[lenPlusNull];
//	memcpy(p,rhs.p,lenPlusNull);
//}

