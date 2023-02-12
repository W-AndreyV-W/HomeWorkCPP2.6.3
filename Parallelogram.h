#include <Quadrilateral.h>
#pragma once

class Parallelogram :public Quadrilateral {
public:
    Parallelogram() :Parallelogram("ֿאנאככוכמדנאלל:", 4, 20, 30, 30, 40) {}
protected:
    Parallelogram(std::string name_, int quanfig_, int side_a_c_, int side_b_d_, int angle_a_c_, int angle_b_d_);
};