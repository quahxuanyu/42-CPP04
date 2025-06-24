#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	AMateria *temp = new Cure();
	AMateria *temp2;
	AMateria *temp3;
	AMateria *temp4;
	AMateria *temp5;
	AMateria *temp6;

	std::cout << "\n----------LEARNING MATERIA-----------" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "-----" << std::endl;
	temp2 = src->createMateria("cure"); // create unsaved materia
	std::cout << "-----" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "-----" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "-----" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "-----" << std::endl;
	src->learnMateria(temp); // max 4 materia srcs

	std::cout << "\n----------CREATING MATERIA----------" << std::endl;
	ICharacter *me = new Character("me");
	std::cout << "-----" << std::endl;
	temp2 = src->createMateria("ice"); // 3 lines
	std::cout << "-----" << std::endl;
	temp3 = src->createMateria("cure");
	std::cout << "-----" << std::endl;
	temp4 = src->createMateria("ice");
	std::cout << "-----" << std::endl;
	temp5 = src->createMateria("cure");
	std::cout << "-----" << std::endl;
	temp6 = src->createMateria("unknown"); // create unknown materia
	(void)temp6;

	std::cout << "\n----------EQUIPPING MATERIA-----------" << std::endl;
	me->equip(temp);
	std::cout << "-----" << std::endl;
	me->equip(temp2);
	std::cout << "-----" << std::endl;
	me->equip(temp3);
	std::cout << "-----" << std::endl;
	me->equip(temp4);
	std::cout << "-----" << std::endl;
	me->equip(temp5); // max 4 inventory
	std::cout << "-----" << std::endl;
	me->unequip(3);
	std::cout << "-----" << std::endl;
	me->unequip(3); // unequip unexisting Materia
	std::cout << "-----" << std::endl;

	std::cout << "\n----------USING MATERIA-----------" << std::endl;
	ICharacter *bob = new Character("bob");
	std::cout << "-----" << std::endl;
	me->use(0, *bob); // Print correct
	std::cout << "-----" << std::endl;
	me->use(1, *bob);
	std::cout << "-----" << std::endl;
	me->use(2, *bob);
	std::cout << "-----" << std::endl;
	me->use(3, *bob); // use unexisting Materia

	std::cout << "\n----------EQUIPPING MATERIA TO BOB-----------" << std::endl;
	bob->equip(temp4);
	std::cout << "-----" << std::endl;
	bob->equip(temp5);
	std::cout << "-----" << std::endl;
	bob->unequip(4); // unequip unexisting Materia

	std::cout << "\n----------CHARACTER DEEP COPY TESTS-----------" << std::endl;
	Character charlie("charlie"); // deep copy tests
	std::cout << "-----" << std::endl;
	charlie.equip(new Ice());
	{
		std::cout << "Creating a copy of charlie:" << std::endl;
		Character david = charlie;
	}
	std::cout << "\n--------------------" << std::endl;
	Character david("david");
	{
		std::cout << "Assigning charlie to david:" << std::endl;
		david = charlie;
	}

	std::cout << "\n----------MATERIA DEEP COPY TESTS-----------" << std::endl;
	MateriaSource m1; // deep copy tests
	std::cout << "-----" << std::endl;
	m1.learnMateria(new Cure());
	std::cout << "-----" << std::endl;
	{
		MateriaSource m2 = m1;
	}
	std::cout << "-----" << std::endl;
	MateriaSource m2;
	std::cout << "-----" << std::endl;
	{
		m2 = m1;
	}
	std::cout << "\n-----------DELETE---------" << std::endl;
	delete bob;
	std::cout << "-----" << std::endl;
	delete me;
	std::cout << "-----" << std::endl;
	delete src;
	return 0;
}

// int main()
// {
// 	IMateriaSource *src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter *me = new Character("me");
// 	AMateria *tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter *bob = new Character("bob");
// 	me->use(0, *bob); // printed
// 	me->use(1, *bob); // printed
// 	me->unequip(1);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }