/*
 * StringResult.h
 *
 *
 *  Created on: Oct 30, 2017
 *      Author: keith
 */

#ifndef STRINGRESULT_H_
#define STRINGRESULT_H_

class StringResult {
public:
	//want to copy the string from the middle of these 2
	StringResult(char *pb, char *pe);

	virtual ~StringResult();

	// overloaded assignment
	StringResult &operator=(StringResult const &other);

	//copy constructor, destructor
	StringResult(StringResult const &other);
private:
	char *p;

	//EDIT THIS...deallocate and initialize
	void destroy ();
	void copy(const StringResult &rhs );
};

#endif /* STRINGRESULT_H_ */
