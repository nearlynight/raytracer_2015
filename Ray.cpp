#include "Ray.hpp"

Ray::Ray() {
	dir_ = Vect(0,0,0);
	col_ = Color(0,0,0); 
}

Ray::Ray(Vect dir, Color col) {
	dir_ = dir;
	col_ = col;
}