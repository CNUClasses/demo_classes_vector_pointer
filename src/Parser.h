/*
 * Parser.h
 *
 *  Created on: Oct 30, 2017
 *      Author: keith
 */

#ifndef PARSER_H_
#define PARSER_H_

class Parser {
public:
	Parser(const char *p);
	virtual ~Parser();

	char* findTag(char *p1, char* pstr);

private:
	char *p;
	// overloaded assignment
	Parser &operator=(Parser const &other);

	//copy constructor, destructor
	Parser(Parser const &other);

	//Edit the following
	virtual void destroy();
};

#endif /* PARSER_H_ */
