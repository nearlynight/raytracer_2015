#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "Shape.hpp"

class Sphere : public Shape {
	public:
		/* virtual */ bool intersect();
};

#endif