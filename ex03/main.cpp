/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:00:06 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 18:42:24 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void    iceAMateriaTesting( void )
{
    std::cout << "---------AMateria Abstract Class Creation----------" << std::endl;
    AMateria    *amateria;
    
    std::cout << "Assigning Ice() to our Abstract" << std::endl;
    amateria = new Ice();
    std::cout << "amateria->getType() = ";
    std::cout << amateria->getType() << std::endl;
    std::cout << "------Cloning another AMateria from the previous one-----" << std::endl;
    AMateria    *clonedOne = amateria->clone();
    std::cout << clonedOne->getType() << std::endl;
    std::cout << "---- Cleaning Memory ------" << std::endl;
    
    delete  amateria;
    delete  clonedOne;
}

void    cureAMateriaTesting( void )
{
    std::cout << "---------AMateria Abstract Class Creation----------" << std::endl;
    AMateria    *amateria;
    
    std::cout << "Assigning Cure() to our Abstract" << std::endl;
    amateria = new Cure();
    std::cout << "amateria->getType() = ";
    std::cout << amateria->getType() << std::endl;
    std::cout << "------Cloning another AMateria from the previous one-----" << std::endl;
    AMateria    *clonedOne = amateria->clone();
    std::cout << clonedOne->getType() << std::endl;
    std::cout << "---- Cleaning Memory ------" << std::endl;

    delete  amateria;
    delete  clonedOne;
}

void    testCopying ( void )
{
    std::cout << "-- Creating AMateria (Ice) ----" << std::endl;
    AMateria    *materia = new Ice();
    std::cout << "materia->getType() = ";
    std::cout << materia->getType() << std::endl;

    std::cout << "-- Creating AMateria (Cure) ----" << std::endl;
    AMateria    *copyAMateria = new Cure();
    std::cout << "copyAMateria->getType() = ";
    std::cout << copyAMateria->getType() << std::endl;

    std::cout << "--- Copying (Ice) to (Cure) ----" << std::endl; 
    *copyAMateria = *materia;
    std::cout << "the New Type of copyAMateria->getType() = ";
    std::cout << copyAMateria->getType() << std::endl;

    std::cout << "---- Cleaning Memory ---- " << std::endl;

    delete  materia;
    delete  copyAMateria;
}

void    testingCharacterInventory( void )
{
    ICharacter  *iCharacter = new Character("heapChar");

    std::cout << "iCharacter->getName() = ";
    std::cout << iCharacter->getName() << std::endl;

    std::cout << "**Creating Testing Materias**" << std::endl;
    AMateria    *amateria = new Ice();
    AMateria    *amateria2 = new Cure();
    std::cout << "-----" << std::endl;

    std::cout << "**Equeping Testing Materias**" << std::endl;
    iCharacter->equip(amateria);
    iCharacter->equip(amateria2);
    std::cout << "-----" << std::endl;

    std::cout << "**Using AMaterias**" << std::endl;
    iCharacter->use(0, *iCharacter);
    iCharacter->use(1, *iCharacter);
    std::cout << "-----" << std::endl;

    std::cout << "**Unequiping AMaterias**" << std::endl;
    iCharacter->unequip(0);
    iCharacter->unequip(1);
    std::cout << "-----" << std::endl;
    std::cout << "----- Cleaning Memory ----" << std::endl;

    delete  iCharacter;
}

void    subjectTest( void )
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria*   tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

int main( void )
{
    // std::cout << "****      TESTING Ice AMateria    ***" << std::endl;
    // iceAMateriaTesting();
    // std::cout << "****      TESTING Cure AMateria    ***" << std::endl;
    // cureAMateriaTesting();
    // std::cout << "****      TESTING The Coping between the two   ***" << std::endl;
    // testCopying();
    // std::cout << "****      TESTING The Character Inventory   ***" << std::endl;
    // testingCharacterInventory();
    std::cout << "****      SUBJECT TEST   ***" << std::endl;
    subjectTest();
    return 0;
}