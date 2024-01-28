#pragma once
#include "Figure.h"

class Triangle : public Figure{
public:
   Triangle(short a, short b, short c, short A, short B, short C);
   Triangle(short a, short b, short c, short A, short B, short C, const string& name);
};