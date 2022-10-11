
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

public:
	Animal();
	Animal(std::string name);
	Animal(const Animal & copy);
	virtual ~Animal(); //
	Animal & operator=(const Animal & copy);

	virtual void makeSound() = 0; //
	std::string getType() const;


protected:
	std::string _type;
};

#endif
