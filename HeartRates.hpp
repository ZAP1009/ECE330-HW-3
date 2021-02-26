#include <iostream>

class HeartRates{
	private:
		std::string _first_name;
		std::string _last_name;
		int _birth_month;
		int _birth_year;
		int _birth_day;
	public:
		HeartRates();
		HeartRates(std::string first_name, std::string last_name, int birth_month, int birth_day, int birth_year);
		HeartRates( const HeartRates &hr);
		~HeartRates();
		
		std::string first_name() const;
		std::string last_name() const;
		int birth_month() const;
		int birth_year() const;
		int birth_day() const;
		int getAge() const;
		int getMaximumHeartRate(int age) const;
		int getTargetHeartRate(int age) const;

		void set_first_name(std::string first_name);
		void set_last_name(std::string last_name);
		void set_birth_month(int birth_month);
		void set_birth_year(int birth_year);
		void set_birth_day(int birth_day);
};
