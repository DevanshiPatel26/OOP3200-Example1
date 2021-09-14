#include "Person.h"
#include <iostream>

Person::Person(std::string name, int age) //Option1: : m_name(name), m_age(age)
{
	//Option 2: Long initialization
	//m_name = name;
	//m_age = age;

	//Option 3: Use Setters
	SetName(name);
	SetAge(age);
}

Person::~Person()
= default;

std::string Person::GetName()
{
	return m_name;
}

int Person::GetAge()
{
	return m_age;
}

void Person::SetName(std::string name = "not set")
{
	m_name = name;
	std::cout << "Name set to: " << name << std::endl;
}

void Person::SetAge(int age = 0)
{
	m_age = age;
	std::cout << "Age set to: " << age << std::endl;  
}

void Person::SayHello()
{
	std::cout << GetName << " says Hello!" << std::endl;
}
