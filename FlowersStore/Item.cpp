#pragma once
#include <string>
#include "Item.h"


void BussinessLogics::Item::setColor(int& myColor) {
	this->color = myColor;
}

int BussinessLogics::Item::getColor() {
	return this->color;
}

void BussinessLogics::Item::setQuantity(int& myQuantity) {
	this->quantity = myQuantity;
}

int BussinessLogics::Item::getQuantity() {
	return this->quantity;
}

void BussinessLogics::Item::setCost(int& myCost) {
	this->cost = myCost;
}

int BussinessLogics::Item::getCost() {
	return this->cost;
}