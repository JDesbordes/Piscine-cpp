#include "NinjaTrap.hpp"

void NinjaTrap::ninjaShoebox(std::string const & target)
{
	if (getEnergy_points() < 25)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	setEnergy_points(getEnergy_points() - 25);
	switch(std::rand() % 5)
	{
		case 0:
			std::cout << "See how our enemies crumble beneath the wheel of the claptrap Robolution! " << "-IN4C-TP " << getName() << " to " << target << std::endl;
			break;
		case 1:
			std::cout << "He who controls the means of production controls the government, and that power belongs in the hands of the proletaria-trap! " << "-IN4C-TP " << getName() << " to " << target << std::endl;
			break;
		case 2:
			std::cout << "We are the claptraps and we are legion! Viva la Robolution! " << "-IN4C-TP " << getName() << " to " << target << std::endl;
			break;
		case 3:
			std::cout << "The rallying call of liberation: 'Error 404! File not found! Error 404! File not found! " << "-IN4C-TP " << getName() << " to " << target << std::endl;
			break;
		case 4:
			std::cout << "Is a claptrap not entitled to the oil of his brow? No, says the man at Hyperion, it belongs to his owner. No, says the treasure hunter, it belongs splattered on the floor. But we choose something different. We choose the Robolution! " << "-IN4C-TP " << getName() << " to " << target << std::endl;
			break;
		default :
			std::cout << "HOW?" << std::endl;
	}
}

NinjaTrap::NinjaTrap()
{
	std::cout << "Give us open ports for remote access or give us death!" << std::endl;
	setHit_points(60);
  	setMax_hit_points(60);
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setName("IN4C-TP");
	setMelee_attack_damage(60);
	setRanged_attack_damage(5);
	setArmor_damage_reduction(0);
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Give us open ports for remote access or give us death!" << std::endl;
	setName(name);
	setHit_points(60);
  	setMax_hit_points(60);
	setEnergy_points(120);
	setMax_energy_points(120);
	setLevel(1);
	setMelee_attack_damage(60);
	setRanged_attack_damage(5);
	setArmor_damage_reduction(0);
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	std::cout << "Give us open ports for remote access or give us death!" << std::endl;
	setHit_points(src.getHit_points());
  	setMax_hit_points(src.getMax_hit_points());
	setEnergy_points(src.getEnergy_points());
	setMax_energy_points(src.getMax_energy_points());
	setLevel(src.getLevel());
	setName(src.getName());
	setMelee_attack_damage(src.getMelee_attack_damage());
	setRanged_attack_damage(src.getRanged_attack_damage());
	setArmor_damage_reduction(src.getArmor_damage_reduction());
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "MurderDeathKill! Annihilate! Extermin-" << std::endl;
}

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
