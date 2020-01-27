//
//ex7_15.h
//
//created by tsubaki-san on20/1/27
//

#ifndef EX7_09_H
#define EX7_09_H

#include<string>
#include<iostream>

class Person {
public:
	Person() = default;
	Person(const std::string n,const std::string s):name(n),address(s){}
	Person(std::istream& is) { read(is, *this); }
	std::string getname()const { return name; };
	std::string getaddress()const { return address; };
	//
	//use trialing return type
	//auto getname()const->std::string const&{return name;};
	//auto getaddress()const->std::string const&{return address;};
	//

	std::string name;
	std::string address;
};
//interface functions
std::istream& read(std::istream&, Person);
std::ostream& print(std::ostream&, Person);

std::istream& read(std::istream& is, Person item) {
	is >> item.name >> item.address;
	return is;
}

std::ostream& print(std::ostream& os, Person item) {
	os << item.name << " " << item.address;
	return os;
}

#endif