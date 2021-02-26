#include <iostream>
#include "HeartRates.hpp"

HeartRates::HeartRates() : _first_name{"first_name"}, _last_name{"last_name"},
_birth_month{1}, _birth_day{1}, _birth_year{2000} { }

HeartRates::HeartRates(std::string first_name, std::string last_name, int birth_month,
int birth_day, int birth_year){
	set_first_name(first_name);
	set_last_name(last_name);
	set_birth_month(birth_month);
	set_birth_year(birth_year);
	set_birth_day(birth_day);
}

HeartRates::HeartRates( const HeartRates &hr) : _first_name{hr._first_name},
_last_name{hr._last_name}, _birth_month{hr._birth_month}, _birth_day{hr._birth_day},
_birth_year{hr._birth_year} { }

HeartRates::~HeartRates() { }

std::string HeartRates::first_name() const{
	return _first_name;
}

std::string HeartRates::last_name() const{
	return _last_name;
}

int HeartRates::birth_month() const{
	return _birth_month;
}

int HeartRates::birth_year() const{
	return _birth_year;
}

int HeartRates::birth_day() const{
	return _birth_day;
}

int HeartRates::getAge() const{
	int month, day, year, age;
	std::cout << "Enter the current month:\n";
	std::cin >> month;
	std::cout << "Enter the current day of the month: \n";
	std::cin >> day;
	std::cout << "Enter the current year: \n";
	std::cin >> year;
	std::cout<<"\n";
	age = year - _birth_year;
	if (month < _birth_month){
		age--;
	}
	else if ((month == _birth_month)&&(day<_birth_day)){
		age--;
	}
	return age;
}
	
int HeartRates::getMaximumHeartRate(int age) const{
	return 220-age;
}

int HeartRates::getTargetHeartRate(int age) const{
	return 0.85*(220-age);
}

void HeartRates::set_first_name(std::string first_name){
	_first_name = first_name;
}

void HeartRates::set_last_name(std::string last_name){
	_last_name = last_name;
}

void HeartRates::set_birth_month(int birth_month){
	_birth_month = birth_month;
}

void HeartRates::set_birth_year(int birth_year){
	_birth_year = birth_year;
}

void HeartRates::set_birth_day(int birth_day){
	_birth_day = birth_day;
}

