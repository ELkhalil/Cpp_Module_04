/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:33:19 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 17:40:08 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


static void subject_test ( void )
{   
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
}

static void my_test ( void )
{
    Animal  *animal;
    for (int i = 0; i < 2; i++)
    {
        std::cout << "-----------------------------" << std::endl;
        switch (i)
        {
            case 0:
                animal = new Dog();
                break;
            case 1:
                animal = new Cat();
                break;
            default:
                std::cout << "Error: switch statement" << std::endl;
        }
        std::cout << "I am a: " << animal->getType() << std::endl;
        std::cout << "I can make a sound for you >> ";
        animal->makeSound();
        std::cout << "Cleaning...." << std::endl;
        delete animal;
        std::cout << "Cleaned Successfully !" << std::endl;
        std::cout << "-----------------------------" << std::endl;
        }    
}

static void wrong_test ( void )
{
    const WrongAnimal    *wrong_animal = new WrongCat();
    std::cout << "Wrong animal type: " << wrong_animal->getType() << std::endl;
    std::cout << "Wrong animal sound: ";
    wrong_animal->makeSound();
    delete wrong_animal;
}

int main( void )
{

    std::cout << "*** Test From Subject PDF ***" << std::endl << std::endl;
    subject_test();
    std::cout << std::endl << std::endl;

    std::cout << "*** My Own test ***" << std::endl << std::endl;
    my_test();
    std::cout << std::endl << std::endl;

    std::cout << "*** Wrong Animal/Cat Test ***" << std::endl << std::endl;
    wrong_test();
    std::cout << std::endl << std::endl;

    return 0;
}