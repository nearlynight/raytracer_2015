#ifndef VECT_HPP
#define VECT_HPP

class Vect {
	public:
		Vect();
		Vect(int x, int y, int z);
		~Vect();

	private:
		int x_;
		int y_;
		int z_;
};

#endif
