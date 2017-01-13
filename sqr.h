#pragma once
#ifndef __SQR__
#define __SQR__
#include "rect.h"
#include <iostream>
using namespace std;
class Square :public Rect
{
public :
	Square (string n="Square",float w=4):Rect(n,w,w){}
};
#endif
