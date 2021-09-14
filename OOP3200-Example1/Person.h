#pragma once

#ifndef __PERSON__
#define __PERSON__

#include <string>

class Person
{
public:
	//CONSTRUCTOR
	Person(std::string name, int age);

	//DESTRUCTOR
	~Person();

	//Getters (Accessors)
	std::string GetName();
	int GetAge();

	//Setters (Mutators)
	void SetName(std::string name);
	void SetAge(int age);

	//Methods (Public functions)
	void SayHello();

private:
	//Private member variables
	std::string m_name;
	int m_age;
};

#endif  // Defined ( __PERSON__ )

