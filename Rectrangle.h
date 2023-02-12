#include <Parallelogram.h>
#pragma once

class Rectrangle :public  Parallelogram {
public:
    Rectrangle() :Rectrangle("Прямоугольник:", 4, 10, 20) {}
protected:
    Rectrangle(std::string name_, int quanfig_, int side_a_c_, int side_b_d_);
};