#include "Shape.hpp"

Shape::Shape(){
	pos_ = Point3d(10, 10, 10);
	col_ = Color(153;153;153);
}

Shape::Shape(Point3d pos, Color col) {
	pos_ = pos;
	col_ = col;
}