#pragma once
#ifndef __DIAM__
#define __DIAM__
#include "para.h"

class Diamond :public Parallelogram
{
public:
	Diamond(string n = "Diamond", float w = 5, float h = 5) :Parallelogram(n, w, h) { w = h; }
};
#endif