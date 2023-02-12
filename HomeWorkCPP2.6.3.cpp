#include <iostream>
#include <locale.h>

#include <Triangle.h>
#include <TriangleRight.h>
#include <TriangleIsos.h>
#include <TriangleEquil.h>
#include <Quadrilateral.h>
#include <Parallelogram.h>
#include <Rhombus.h>
#include <Rectrangle.h>
#include <Square.h>

void print_info(Triangle* triangle) {
    if (triangle->get_quanfig() < 4) {
        std::cout << triangle->get_name() << std::endl;
        std::cout << "Стороны: a=" << triangle->get_side_a() << " b=" << triangle->get_side_b() << " c=" << triangle->get_side_c() << std::endl;
        std::cout << "Углы: A=" << triangle->get_angle_a() << " B=" << triangle->get_angle_b() << " C=" << triangle->get_angle_c() << std::endl;
        std::cout << std::endl;
    }
    else {
        std::cout << triangle->get_name() << std::endl;
        std::cout << "Стороны: a=" << triangle->get_side_a() << " b=" << triangle->get_side_b() << " c=" << triangle->get_side_c() << " d=" << triangle->get_side_d() << std::endl;
        std::cout << "Углы: A=" << triangle->get_angle_a() << " B=" << triangle->get_angle_b() << " C=" << triangle->get_angle_c() << " D=" << triangle->get_angle_d() << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle;
    TriangleRight triangleRight;
    TriangleIsos triangleIsos;
    TriangleEquil triangleEquil;
    Quadrilateral quadrilateral;
    Parallelogram parallelogram;
    Rhombus rhombus;
    Rectrangle rectrangle;
    Square square;
    Triangle* par_triangle = &triangle;
    Triangle* par_triangleRight = &triangleRight;
    Triangle* par_triangleIsos = &triangleIsos;
    Triangle* par_triangleEquil = &triangleEquil;
    Triangle* par_quadrilateral = &quadrilateral;
    Triangle* par_parallelogram = &parallelogram;
    Triangle* par_rhombus = &rhombus;
    Triangle* par_rectrangle = &rectrangle;
    Triangle* par_square = &square;
    print_info(par_triangle);
    print_info(par_triangleRight);
    print_info(par_triangleIsos);
    print_info(par_triangleEquil);
    print_info(par_quadrilateral);
    print_info(par_rectrangle);
    print_info(par_square);
    print_info(par_parallelogram);
    print_info(par_rhombus);
}