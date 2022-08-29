#pragma once
#include <iostream>

namespace BussinessLogics {

	// Classes of Stuff

	class Item {
	public:

		void setColor(int& myColor);
		int getColor();

		void setQuantity(int& myQuantity);
		int getQuantity();

		void setCost(int& myCost);
		int getCost();


		virtual void myItem() = 0;
	private:
		int color;
		int quantity;
		int cost;
		std::string type;
	};

	class Flower : public Item {
	public:

	private:
	};

	class Bouquet : public Item {

		bool size = 0; // 1 - Big or 0 - small
		bool withDecorations = 0; // 0 - without, 1 - with
		bool type = 0; // 1 - paper, 2 - cellophane

	};

	class TeddyBear : public Item {
	public:

	};

	class Package {

		bool isReady = 0; // 0 - not ready, 1 - ready
		bool type = 0; // 0 - small, 1 - big

	};

	class Ribbon {

		bool withOrWithout = 0; // 0 - without, 1 - with

	};

	// Different Classes

	class Florist {

		void makePackage() {

		}

		void sayHello() {
			std::cout << "Hello, I'm florist\n";
		}

		int dateOfBirth = 0;
		int numberOfPassport = 0;

	};

	class activeProduct {

	};


}