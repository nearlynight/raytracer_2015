Color::Color() {
	r_ = 0;
	g_ = 0;
	b_ = 0;
}

Color::Color(int r, int g, int b) {
	r_ = r;
	g_ = g;
	b_ = b;
}

Color::~Color() {

}


int Color::get_r() {
	return r_;
}

int Color::get_g() {
	return g_;
}

int Color::get_b() {
	return b_;
}


void Color::set_r(int r) {
	r_ = r;
}

void Color::set_g(int g) {
	g_ = g;
}

void Color::set_b(int b) {
	b_ = b;
}
