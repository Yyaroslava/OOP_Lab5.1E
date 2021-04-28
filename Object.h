// Object.h
#pragma once
#include "BadException.h"

class Object {
private:
	static unsigned int count;
public:
	static unsigned int Count();
	Object();
};
