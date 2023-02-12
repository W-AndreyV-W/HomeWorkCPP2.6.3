#include <Triangle.h>
#pragma once

class TriangleEquil :public Triangle {
public:
    TriangleEquil() :TriangleEquil("Равносторонний треугольник:", 3, 30) {}
private:
    TriangleEquil(std::string name_, int quanfig_, int side_a_b_c_);
};
