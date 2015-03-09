#include "Camera.hpp"

Camera::Camera() {
	pos_ = Point3d(0,0,-10);
	dir_ = Vect(0,0,1);
}

Camera::Camera(Point3d pos, Vect dir) {
	pos_ = pos;
	dir_ = dir;
}