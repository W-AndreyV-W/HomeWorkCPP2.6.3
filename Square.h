#include <Rectrangle.h>
#pragma once

class Square :public Rectrangle {
public:
    Square() :Square(" вадрат:", 4, 20) {}
private:
    Square(std::string name_, int quanfig_, int side_a_b_c_d_);
};