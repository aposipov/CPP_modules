
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form
("Shrubbery Creation" , 145, 137)
{
	_target = "DefaultTarget";
	std::cout << "ShrubberyCreationForm -> Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form
("Shrubbery Creation" , 145, 137)
{
	_target = target;
	std::cout << " ShrubberyCreationForm -> Parametric Constructor called" <<
	std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy)
{
	_target = copy._target;
	std::cout << " ShrubberyCreationForm -> Copy Constructor called" <<
	std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " ShrubberyCreationForm -> Destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy)
{
	if (this == &copy)
		return *this;
	_target = copy._target;
	std::cout << " ShrubberyCreationForm -> Copy assignment operator called"
	<< std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string shrubbery = "\t\t____________ ¶¶¶_______¶¶¶¶\n \
		__________¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶\n \
		_________ ¶¶____¶¶¶¶__¶¶__¶¶¶\n \
		_________¶¶¶¶¶¶¶___¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶¶¶¶\n \
		________¶¶__¶¶¶_____¶¶¶________¶_¶____¶¶¶¶¶\n \
		________¶¶_________________¶¶¶¶¶___¶¶¶¶¶__¶\n \
		________¶¶__________________¶¶¶¶___¶¶¶¶___¶\n \
		______¶__ ¶_________________¶¶¶___________¶¶\n \
		_____¶¶_¶¶¶_______________________________¶¶¶\n \
		_¶¶¶¶¶¶¶¶¶_________¶____________________¶__¶¶\n \
		¶¶¶¶___¶¶______¶¶¶¶¶______¶_¶¶¶_________¶¶¶¶¶¶¶\n \
		¶¶_______________¶¶_______¶¶¶¶______________¶¶¶¶\n \
		¶¶¶________________________¶¶_________________¶¶\n \
		_¶¶¶ _________________¶¶__________________¶____¶¶\n \
		__¶¶ _____¶________¶¶¶¶¶_______________¶¶¶¶¶___¶¶\n \
		__¶¶ __¶¶¶¶_________¶¶¶¶________________¶¶¶¶____¶¶\n \
		_¶¶___¶¶¶¶¶______________________________¶¶_____¶¶\n \
		¶¶¶_____¶¶_____¶¶¶_¶¶¶¶¶¶_¶¶¶¶_¶¶¶___¶¶________¶¶¶\n \
		¶¶ ______________¶_¶___¶¶__¶_¶_¶¶¶¶¶¶¶¶_______¶¶¶¶\n \
		¶¶¶_____¶¶¶¶¶¶¶¶___¶¶___¶_¶¶¶_¶¶_¶¶¶¶¶______¶¶¶¶\n \
		_¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__¶¶__¶_¶¶¶¶¶____¶¶¶¶¶¶¶¶¶¶¶\n \
		___¶¶¶¶________¶¶¶¶¶_¶¶¶¶___¶¶______¶¶¶¶¶¶¶¶\n \
		_________________¶¶¶__¶¶¶_¶¶¶\n \
		__________________¶¶______¶¶\n \
		__________________¶¶__¶¶__¶¶¶¶¶¶¶¶¶¶\n \
		______________ ¶¶¶¶¶_¶¶¶¶_¶¶¶¶_¶¶¶¶¶¶¶¶\n \
		__________¶¶¶¶¶¶¶¶¶__¶¶___¶________¶¶¶¶¶¶¶¶¶¶\n \
		__¶¶¶¶¶¶¶¶¶¶¶¶ ___¶¶__¶___¶____________¶¶¶¶¶¶¶¶¶¶\n \
		¶¶¶¶¶¶¶¶¶¶_______¶¶¶______¶______________________\n \
		________________ ¶¶_______¶¶_____________________\n \
		________________¶¶________¶¶¶____________________\n \
		______________¶¶¶__¶¶¶¶__¶¶_¶J¶__________________\n \
		______________¶¶__¶¶__¶¶__¶__¶K¶________________\n \
		____________ ¶¶__¶¶____¶¶_¶___¶¶_________________\n";

	if (!this->getIsSigned())
		throw Form::IsNotSignedFormException();
	if (this->getGradeToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();

	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.is_open()) {
		file << shrubbery;
		file.close();
	}
	else
		std::cerr << "Error opening file" << std::endl;
}