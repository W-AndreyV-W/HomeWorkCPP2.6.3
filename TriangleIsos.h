#include <Triangle.h>
#pragma once

class TriangleIsos :public Triangle {
public:
    TriangleIsos() :TriangleIsos("Равнобедренный треугольник:", 3, 10, 20, 50, 60) {}
private:
    TriangleIsos(std::string name_, int quanfig_, int side_a_c_, int side_b_, int angle_a_c_, int angle_b_);
};