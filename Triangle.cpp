#include <Triangle.h>

std::string Triangle::get_name() {
    return _name;
}
int Triangle::get_side_a() {
    return _side_a;
}
int Triangle::get_side_b() {
    return _side_b;
}
int Triangle::get_side_c() {
    return _side_c;
}
int Triangle::get_side_d() {
    return _side_d;
}
int Triangle::get_angle_a() {
    return _angle_a;
}
int Triangle::get_angle_b() {
    return _angle_b;
}
int Triangle::get_angle_c() {
    return _angle_c;
}
int Triangle::get_angle_d() {
    return _angle_d;
}
int Triangle::get_quanfig() {
    return _quanfig;
}
Triangle::Triangle(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int angle_a_, int angle_b_, int angle_c_) {
    _side_a = side_a_;
    _side_b = side_b_;
    _side_c = side_c_;
    _angle_a = angle_a_;
    _angle_b = angle_b_;
    _angle_c = angle_c_;
    _quanfig = quanfig_;
    _name = name_;
}
Triangle::Triangle(std::string name_, int quanfig_, int side_a_, int side_b_, int side_c_, int side_d_, int angle_a_, int angle_b_, int angle_c_, int angle_d_) {
    _side_a = side_a_;
    _side_b = side_b_;
    _side_c = side_c_;
    _side_d = side_d_;
    _angle_a = angle_a_;
    _angle_b = angle_b_;
    _angle_c = angle_c_;
    _angle_d = angle_d_;
    _quanfig = quanfig_;
    _name = name_;
}