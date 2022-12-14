#include "SellingPosition.h"

BussinessLogics::sellingPosition::sellingPosition() {

}

void BussinessLogics::sellingPosition::setId(int& id) {
	this->id_ = id;
}

int BussinessLogics::sellingPosition::getId() {
	return this->id_;
}

void BussinessLogics::sellingPosition::setNameOfProduct(std::string& nameOfProduct) {
	this->nameOfProduct_ = nameOfProduct;
}

std::string BussinessLogics::sellingPosition::getNameOfProduct() const {
	return this-> nameOfProduct_;
}

void BussinessLogics::sellingPosition::setQuantity(int& quantity) {
	this->quantity_ = quantity;
}

int BussinessLogics::sellingPosition::getQuantity() {
	return quantity_;
}

void BussinessLogics::sellingPosition::setTimeOfRealization(int& timeOfRealization) {
	this->timeOfRealization_ = timeOfRealization;
}

int BussinessLogics::sellingPosition::getTimeOfRealization() {
	return this->timeOfRealization_;
}

void BussinessLogics::sellingPosition::setCost(double& cost) {
	this->cost_ = cost;
}

double BussinessLogics::sellingPosition::getCost() {
	return this->cost_;
}