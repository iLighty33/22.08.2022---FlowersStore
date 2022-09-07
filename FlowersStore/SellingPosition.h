#pragma once
#include <string>

namespace BussinessLogics {
	class sellingPosition {
	public:
		sellingPosition();
		sellingPosition(int id, std::string nameOfProduct, int quantity, int timeOfRealization, double cost) : id_(id), nameOfProduct_(nameOfProduct), quantity_(quantity), timeOfRealization_(timeOfRealization), cost_(cost) {}
		

		bool operator==(const sellingPosition &other) {
			return this->id_ == other.id_ && this->nameOfProduct_ == other.nameOfProduct_ && quantity_ == other.quantity_ && timeOfRealization_ == other.timeOfRealization_ && cost_ == other.cost_;
		}

		void setId(int& id);
		int getId();

		void setNameOfProduct(std::string& nameOfProduct);
		std::string getNameOfProduct() const;

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