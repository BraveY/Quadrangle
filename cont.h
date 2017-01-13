#pragma once
#ifndef __CONT__
#define __CONT__
#include "quad.h"
template<typename T>
struct Container
{
	virtual Container& push_back(const T& data) = 0;
	virtual size_t size() const = 0;
	virtual operator bool() const = 0;
	virtual void clear() = 0;
};
#endif
