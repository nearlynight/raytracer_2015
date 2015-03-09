#ifndef RAY_HPP
#define RAY_HPP

#include "Vect.hpp"
#include "Color.hpp"

class Ray {
	public:
		Ray();
		Ray(Vect dir, Color col);
		~Ray();

	private:
		Vect dir_;
		Color col_;



};

#endif RAY_HPP