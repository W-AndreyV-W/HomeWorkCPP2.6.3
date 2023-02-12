#include <iostream>
#pragma once

class Triangle {
public:
    std::string get_name();
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_angle_a();
    int get_angle_b();
    int get_angle_c();
    int get_angle_d();
    int get_quanfig();
    Triangle() :Triangle("Треугольник:", 3, 10, 20, 30, 50, 60, 70) {}
protected:
    Triangle(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_);
    Triangle(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_);
private:
    int _side_a = 0;
    int _side_b = 0;
    int _side_c = 0;
    int _side_d = 0;
    int _angle_a = 0;
    int _angle_b = 0;
    int _angle_c = 0;
    int _angle_d = 0;
    int _quanfig = 0;
    std::string _name;
};