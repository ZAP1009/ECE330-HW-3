#include <iostream>
#include "HeartRates.hpp"

int main() {
	
	std::string first_name,last_name;
	int birth_month,birth_day,birth_year;
	std::cout<<"Enter your first name:"<<"\n";
	std::cin>>first_name;
	std::cout<<"Enter your last name:"<<"\n";
	std::cin>>last_name;
	std::cout<<"Enter your birth month:"<<"\n";
	std::cin>>birth_month;
	std::cout<<"Enter your birth day:"<<"\n";
	std::cin>>birth_day;
	std::cout<<"Enter your birth year:"<<"\n";
	std::cin>>birth_year;
	HeartRates HR(first_name,last_name, birth_month, birth_day, birth_year);
	int age = HR.getAge();
	std::cout<<"First name: "<< HR.first_name() << "\nLast name: "<<HR.last_name();
	std::cout<<"\nBirth day: "<<HR.birth_month()<<"/"<<HR.birth_day()<<"/"<<HR.birth_year();
	std::cout<<"\nAge: "<< age << "\nMax Heart Rate: "<< HR.getMaximumHeartRate(age);
	std::cout<<"\nTarget Heart Rate: "<< HR.getTargetHeartRate(age) << "\n";

	return 0;
}

