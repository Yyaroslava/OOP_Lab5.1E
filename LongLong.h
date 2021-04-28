// LongLong.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "BadException.h"
#include "Object.h"

using namespace std;

class LongLong : public Object {
	long x, y;
public:
	long GetX() const;
	long GetY() const;
	void SetX(long value);
	void SetY(long value);

	LongLong();
	LongLong(long, long)throw(invalid_argument, bad_exception, BadException, const char*);
	LongLong(const LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	void HighCompare(LongLong&, LongLong&);
	void LowCompare(LongLong&, LongLong&);
	
	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
};
