#ifndef POINT3D_HPP
#define POINT3D_HPP

class Point3d {
	public:
		Point3d();
		Point3d(double x, double y, double z);
		~Point3d();

		double get_x();
		double get_y();
		double get_z();

		void set_x(double);
		void set_y(double);
		void set_z(double);

	private:
		double x_;
		double y_;
		double z_;

};



#endif