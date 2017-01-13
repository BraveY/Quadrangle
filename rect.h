#ifndef __RECT__
#define __RECT__

#include "para.h"

class Rect :public Parallelogram
{
public:
	Rect(string n = "Rectangle", float w = 5, float h = 2) :Parallelogram(n, w, h) { }
};

#endif // __RECT__

