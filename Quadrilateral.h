#include <Triangle.h>
#pragma once

class Quadrilateral :public Triangle {
public:
    Quadrilateral() :Quadrilateral("Четырехугольник:", 4, 10, 20, 30, 40, 50, 60, 70, 80) {}
protected:
    Quadrilateral(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_);
};