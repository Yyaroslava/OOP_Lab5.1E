// lab5.1E 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "LongLong.h"

int main() {
	try {
		LongLong A(10, 2);
		LongLong B(3, 4);
		LongLong s;
		cout << "LongLong A " << endl;
		cout << A << endl;
		cout << "LongLong B " << endl; 
		cout << B << endl;
		cout << "Addition " << endl;
		cout << A + B;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "Multiplying: " << endl;
		cout << A * B;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "Comparing high digits: " << endl;
		s.HighCompare(A, B);
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "Comparing low digits: " << endl;
		s.LowCompare(A, B);
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "A++ " << endl;
		cout << A++ << endl;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "A-- " << endl;
		cout << A-- << endl;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "++A " << endl;
		cout << ++A << endl;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;

		cout << "--A " << endl;
		cout << --A << endl;
		cout << "Number of class LongLong elements: " << Object::Count() << endl;
	}
	catch (invalid_argument e) {
		cout << e.what() << endl;
	}
	catch (bad_exception e)	{
		cout << e.what() << endl;
	}
	catch (BadException& e) {
		cout << e.what() << endl;
	}
	catch (const char* e) {
		cerr << e << endl;
	}
}
