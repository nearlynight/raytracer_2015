#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "Color.hpp"
#include "Point3d.hpp"

class Shape {
	public:
		Shape();
		Shape(Point3d pos, Color col);
		~Shape();

		virtual bool intersect();

	private:
		Point3d pos_;
		Color col_;

};


#endif