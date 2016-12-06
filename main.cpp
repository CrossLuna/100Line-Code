#include "2dconvex.hpp"
#include <iostream>

typedef clg::Point<int> Pointi;

int main() {
	//clg::Point<int> p(3, 4);
	//clg::left_to<int> comp;
	//Pointi p(3, 4);
	std::vector<Pointi> vp;
	vp.push_back(Pointi(4, 0));
	vp.push_back(Pointi(3, 3));
	vp.push_back(Pointi(-2, -2));
	vp.push_back(Pointi(-3, -1));
	vp.push_back(Pointi(1, -3));
	vp.push_back(Pointi(-1, -1));
	vp.push_back(Pointi(2, 1));

	sort(vp.begin(), vp.end(), clg::left_to<int>());
	for(auto& p: vp)
		std::cout << p.x << " , " << p.y << std::endl;
	
	return 0;
}