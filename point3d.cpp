// contructors
// default cnstr
Point3d::Point3d() {
	x_ = 0;
	y_ = 0;
	z_ = 0;
}
// cnstr
Point3d::Point3d(double x, double y, double z) {
	x_ = x;
	y_ = y;
	z_ = z;
}
Point3d::~Point3d(){
	// free(x_);
}

//getter
double Point3d::get_x() {
	return x_;
}
double Point3d::get_y() {
	return y_;
}
double Point3d::get_z() {
	return z_;
}

// setter
void Point3d::set_x(double x) {
	x_ = x;
}
void Point3d::set_y(double y) {
	y_ = y;
}
void Point3d::set_z(double z) {
	z_ = z;
}