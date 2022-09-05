#pragma once
#include <string>

namespace BussinessLogics {
	class sellingPosition {
	public:
		sellingPosition();
		sellingPosition(int id, std::string nameOfProduct, int quantity, int timeOfRealization, double cost) : id_(id), nameOfProduct_(nameOfProduct), quantity_(quantity), timeOfRealization_(timeOfRealization), cost_(cost) {}
	
		void setId(int& id);
		int getId();

		void setNameOfProduct(std::string& nameOfProduct);
		std::string getNameOfProduct();

		void setQuantity(int& quantity);
		int getQuantity();

		void setTimeOfRealization(int& timeOfRealization);
		int getTimeOfRealization();

		void setCost(double& cost);
		double getCost();

	private:

		int id_;
		std::string nameOfProduct_;
		int quantity_;
		int timeOfRealization_;
		double cost_;

	};
}