#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "Point3d.hpp"
#include "Vect.hpp"


class Camera {
	public:
		Camera();
		Camera(Point3d pos, Vect dir);
		~Camera();


	private:
		Point3d pos_;
		Vect dir_;

};


#endif