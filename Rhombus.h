#include <Parallelogram.h>
#pragma once

class Rhombus :public Parallelogram {
public:
    Rhombus() :Rhombus("Ромб:", 4, 30, 30, 40) {}
private:
    Rhombus(std::string name_, int quanfig_, int side_a_b_c_d_, int angle_a_c_, int angle_b_d_);
};