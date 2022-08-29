#include "Worker.h"

BussinessLogics::Worker::Worker() {

}

void BussinessLogics::Worker::setIdPassport(int& idPassport) {
	this->idPassport_ = idPassport;
}

int BussinessLogics::Worker::getIdPassport() {
	return this->idPassport_;
}

void BussinessLogics::Worker::setName(std::string& name) {
	this->name_ = name;
}

std::string BussinessLogics::Worker::getName() {
	return this->name_;
}

void BussinessLogics::Worker::setLogin(std::string& login) {
	this->login_ = login;
}

std::string BussinessLogics::Worker::getLogin() {
	return this->login_;
}