
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->material[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.material[i])
			this->material[i] = other.material[i]->clone();
		else
			this->material[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->material[i])
			delete this->material[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.material[i])
			this->material[i] = other.material[i]->clone();
		else
			this->material[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i;

	for (i = 0; i < 4 && this->material[i]; i++)
		;
	if (i >= 0 && i <= 3)
		this->material[i] = m;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4 && this->material[i]; i++)
		if (this->material[i]->getType() == type)
			return this->material[i]->clone();
	return NULL;
}
