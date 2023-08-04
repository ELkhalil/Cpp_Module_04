/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:33:19 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 18:43:10 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void    arrayOfAnimals( void )
{
    int     arraySize = 8;

    AAnimal  *animals[arraySize];

    std::cout << "---------------Dogs--------------" << std::endl;
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }
    std::cout << "---------------Cats----------------" << std::endl;
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "-------------Cleaning...----------------" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }
}

void    subjectTest ( void )
{
    {
        /* Test from Subject page */
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
}

int main( void )
{
    subjectTest();
    // arrayOfAnimals();
    return 0;
}