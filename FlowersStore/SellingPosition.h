#pragma once
#include <string>

namespace BussinessLogics {
	class sellingPosition {
	public:
		sellingPosition();
		sellingPosition(std::string nameOfProduct, int quantity, int timeOfRealization, double cost) : nameOfProduct_(nameOfProduct), quantity_(quantity), timeOfRealization_(timeOfRealization), cost_(cost) {}
	private:

		std::string nameOfProduct_ = "";
		int quantity_ = 0;
		int timeOfRealization_ = 0;
		double cost_ = 0;

	};
}