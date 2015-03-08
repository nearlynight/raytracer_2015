#ifndef COLOR_HPP
#define COLOR_HPP

class Color {
	public:
		Color();
		Color(int r, int g, int b);
		~Color();

		int get_r();
		int get_g();
		int get_b();

		void set_r(int);
		void set_g(int);
		void set_b(int);

	private:
		int r_;
		int g_;
		int b_;

};

#endif