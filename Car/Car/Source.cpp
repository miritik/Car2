#include <iostream>
#include <assert.h>
#include <string>
  
using namespace std;

class Car {

private:
	string m_make;
	string m_model; 
	int m_year;
	int m_engineVolume;
	string m_color;

public:
	Car () {}
	Car(string make, string model, int year, int engineVolume, string color)
		: m_make(make), m_model(model), m_year(year), m_engineVolume(engineVolume), m_color(color) {}

	string get_make() const
	{
		return this->m_make;
	}
	string get_model() const
	{
		return this->m_model;
	}
	int get_year() const
	{
		return this->m_year;
	}
	int get_engineVolume() const
	{
		return this->m_engineVolume;
	}
	string get_color() const
	{
		return this->m_color;
	}
	void set_make(const string make)
	{
		this->m_make = make;
	}
	void set_model(const string model)
	{
		this->m_model = model;
	}
	void set_year(const int year)
	{
		this->m_year = year;
	}
	void set_engineVolume(const int engineVolume)
	{
		this->m_engineVolume = engineVolume;
	}
	void set_color(const string color)
	{
		this->m_color = color;
	}

	void print() const
	{
		cout << "The Car make: " << m_make << "\nmodel: " << m_model << "\nyear: " << m_year
			<< "\nengineVolume: " << m_engineVolume << "\ncolor: " << m_color<< endl;
	}
	const  Car &compareByYear( const Car &b) const
	{
		return this->m_year > b.m_year ? *this : b;
	}
	const Car &compareByEngineVolume( const Car &b) const
	{
		return this->m_engineVolume > b.m_engineVolume ? *this : b;
	}
};

int main()
{
	string tmpString;
	int tmpInt;
	Car userCar;
	cout << "Enter car details.\nmake:  ";
	cin >> tmpString;
	userCar.set_make(tmpString);
	cout << "model:  ";
	cin >> tmpString;
	userCar.set_model(tmpString);
	cout << "year:  ";
	cin >> tmpInt;
	userCar.set_year(tmpInt);
	cout << "engine volume:  ";
	cin >> tmpInt;
	userCar.set_engineVolume(tmpInt);
	cout << "color:  ";
	cin >> tmpString;
	userCar.set_color(tmpString);
	cout << endl;


	cout << "The details of your car: \n";
	userCar.print();

	const Car myCar = { "Ford", "Focus", 2017, 1600, "White" };

	cout << "The details of greater years car: \n";
	userCar.compareByYear(myCar).print();

	cout << "The details of greater engine-volume car: \n";
	userCar.compareByEngineVolume(myCar).print();

	return 0;

}