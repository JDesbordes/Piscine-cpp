#include "Form.hpp"

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form(){};


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &		Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		if (_signGrade > 150 || _exeGrade > 150)
			throw Form::GradeTooLowException();
		if (_signGrade < 1 || _exeGrade < 1)
			throw Form::GradeTooHighException();
		this->name = rhs.getName();
		this->_signed = rhs.getIsSigned();
		this->exeGrade = rhs.getExeGrade();
		this->signGrade = rhs.getSignGrade();
		this->target = rhs.getTarget();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " Requires grade " << i.getSignGrade() << " to sign, grade " <<
		i.getExeGrade() << " to execute and " << ((i.getIsSigned()) ? "is signed." : "isn't signed");
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::setTarget(std::string t)
{
	target = t;
}

bool Form::getIsSigned() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (signGrade);
}

int Form::getExeGrade() const
{
	return (exeGrade);
}

std::string Form::getName() const
{
	return (name);
}

std::string Form::getTarget() const
{
	return (target);
}

void 	Form::beSigned(Bureaucrat *b)
{
	if (b->getGrade() < getSignGrade())
	{
		_signed = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw Form::NotSignedException();
	if (executor.getGrade() > exeGrade)
		throw Form::GradeTooLowException();
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

Form::GradeTooHighException::GradeTooHighException() throw(){};

const char* Form::GradeTooHighException::what() const throw () {
       return ("grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() throw(){};


const char* Form::GradeTooLowException::what() const throw () {
       return ("grade is too low");
}

Form::NotSignedException::NotSignedException() throw(){};


const char* Form::NotSignedException::what() const throw () {
       return ("form is not signed");
}
/* ************************************************************************** */