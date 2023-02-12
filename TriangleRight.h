#include <Triangle.h>
#pragma once

class TriangleRight :public Triangle {
public:
    TriangleRight() :TriangleRight("Прямоугольный треугольник:", 3, 10, 20, 30, 30, 60) {}
private:
    TriangleRight(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_);
};