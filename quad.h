#ifndef __QUADRANGLE__
#define __QUADRANGLE__
#include <string>
using namespace std;
class 	Quadrangle
{
protected:
	string name;
public:
	static int counter;
	Quadrangle(string n = "Quadrangle") :name(n) {}
	virtual float area() = 0;
	virtual void draw() = 0;
	virtual string what() = 0;
};
typedef Quadrangle *QUADPTR;
#endif
