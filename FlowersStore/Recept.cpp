#pragma once
#include "Recept.h"
#include "SellingPosition.h"

	void DataAccessLayer::saveCheck(BussinessLogics::Check Check, int& checksQuantity) {
		std::vector <BussinessLogics::Check> Checks;
		Checks.reserve(checksQuantity);
		for (auto el : Checks) {
			Checks.push_back(el);
		}
	}

	void BussinessLogics::Check::setMySellingPosition(std::vector<sellingPosition>& mySellingPosition) {
		for (auto& el : mySellingPosition) {
			mySellingPosition.emplace_back(el.getNameOfProduct(), el.getQuantity(), el.getTimeOfRealization(), el.getCost());
		}
	}

	std::string BussinessLogics::Check::getMySellingPosition() {
		return this->mySelingPosition_;
	}

	void BussinessLogics::Check::addPositionToCheck(std::vector<sellingPosition>& mySellingPosition) {
		for (auto& el : mySellingPosition) {

		}
	}

	void BussinessLogics::Check::removePositionInCheck(std::vector<sellingPosition>& mySellingPosition) {

	}
