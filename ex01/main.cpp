/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:33:19 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 18:44:01 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void    dogDeepcopy ( void )
{
    int sizeArray = 20;

    // array ideas to test with
    std::string testIdeas[sizeArray];
    for(int i = 0; i < sizeArray; i++)
    {
        testIdeas[i] = "Just Testing Dog deep copy";
    }
    // case 1 : Copy Constructor init
    {
        Dog     dog;
        dog.getBrain()->setIdeas(testIdeas, sizeArray);
        dog.getBrain()->displayIdeas();
        std::cout << "--------------------------" << std::endl;
        Dog dog2(dog);
        dog2.getBrain()->displayIdeas();
    }
    // casse : Copy Assignement Operator
    {
        Dog  dog;
        dog.getBrain()->setIdeas(testIdeas, sizeArray);
        Dog dog2;
        dog2 = dog;
        dog2.getBrain()->displayIdeas();
    }
}

void    catDeepcopy ( void )
{
    int sizeArray = 20;

    // array ideas to test with
    std::string testIdeas[sizeArray];
    for(int i = 0; i < sizeArray; i++)
    {
        testIdeas[i] = "Just testing Cat deep copy";
    }
    
    // case 1 : Copy Constructor init
    {
        Cat     cat;
        cat.getBrain()->setIdeas(testIdeas, sizeArray);
        cat.getBrain()->displayIdeas();
        std::cout << "--------------------------" << std::endl;
        Cat cat2(cat);
        cat2.getBrain()->displayIdeas();
    }
    // casse : Copy Assignement Operator
    {
        Cat  cat;
        cat.getBrain()->setIdeas(testIdeas, sizeArray);
        Cat cat2;
        cat2 = cat;
        cat2.getBrain()->displayIdeas();
    }
}

void    arrayOfAnimals( void )
{
    int     arraySize = 4;

    Animal  *animals[arraySize];

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

void    subjectTest( void )
{
    {
        /* Test from Subject page */
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
}

int main( void )
{
    subjectTest();
    // arrayOfAnimals();
    // dogDeepcopy();
    // catDeepcopy();
    return 0;
}