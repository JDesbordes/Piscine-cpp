#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{

  public :
  	NinjaTrap();
  	NinjaTrap(std::string name);
  	NinjaTrap(const NinjaTrap &src);
	NinjaTrap &	operator=(NinjaTrap const & rhs);
	virtual ~NinjaTrap();
	void ninjaShoebox(std::string const & target);
};

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif
