#ifndef __PARA__
#define __PARA__

#include "quad.h"
#include <iostream>

class Parallelogram :public Quadrangle
{
protected:
	float wid;
	float hei;
public:
	Parallelogram(string n = "Parallelogram", float w = 5, float h = 6) :Quadrangle(n), wid(w), hei(h) {}
	virtual float Width()
	{
		return wid;
	}
	virtual float Height()
	{
		return hei;
	}
	float area();
	void draw();
	string what();
};
float Parallelogram::area()
{
	return wid*hei;
}
void Parallelogram::draw()
{
	cout << name << ":width=" << wid << ",height=" << hei << endl;
}

string Parallelogram::what()
{
	return name;
}
#endif