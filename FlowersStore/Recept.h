#pragma once
#include <string>
#include <vector>
#include "SellingPosition.h"

namespace BussinessLogics {
	class Check {
	public:
		void setMySellingPosition(std::vector<sellingPosition>& mySellingPosition);

		std::string getMySellingPosition();

		void addPositionToCheck(std::vector<sellingPosition> & mySellingPosition);

		void removePositionInCheck(std::vector<sellingPosition>& mySellingPosition);
		
		int depth()const;

		sellingPosition& at(int i);

	private:

		std::vector <sellingPosition> mySelingPositions;
		std::string mySelingPosition_;

	};
}

namespace DataAccessLayer {

	void saveCheck(BussinessLogics::Check Check, int& checksQuantity);

}