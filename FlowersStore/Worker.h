#pragma once
#include <string>

namespace BussinessLogics {
	class Worker {
	public:
		Worker();
		Worker(int idPassport, std::string name, std::string login) : idPassport_(idPassport), name_(name), login_(login) {}

		void setIdPassport(int &idPassport);
		int getIdPassport();

		void setName(std::string &name);
		std::string getName();

		void setLogin(std::string& login);
		std::string getLogin();
	private:
		int idPassport_ = 0;
		std::string name_;
		std::string login_;
	};
}
