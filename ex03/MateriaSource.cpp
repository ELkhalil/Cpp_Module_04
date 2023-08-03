/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:58:46 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 16:11:57 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// MateriaSource Constructor
MateriaSource::MateriaSource    ( void )
{
    //std::cout << "MateriaSource Default Constructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        _learnedMaterias[i] = NULL;
    }
}

MateriaSource::MateriaSource   ( MateriaSource const& other )
{
    //std::cout << "MateriaSource Copy Constructor" << std::endl;
    (*this) = other;
}

MateriaSource::~MateriaSource  ( void )
{
    //std::cout << "MateriaSource Destructor" << std::endl;
    for (int i = 0; i < 4; ++i) 
    {
        if (_learnedMaterias[i])
            delete _learnedMaterias[i];
    }
}

// MateriaSource Operators

MateriaSource&  MateriaSource::operator=( MateriaSource const& other )
{
    //std::cout << "MateriaSource Copy Assignement Operator" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_learnedMaterias[i])
                delete _learnedMaterias[i];
            _learnedMaterias[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.getLearnedMateria(i) != NULL)
                _learnedMaterias[i] = other.getLearnedMateria(i)->clone();
            else
                _learnedMaterias[i] = NULL;
        }
    }
    return (*this);
}

// MateriaSource Member Functions

void        MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_learnedMaterias[i] == NULL)
        {
            _learnedMaterias[i] = m;
            return ;
        }
        
    }
    
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++) 
    {
        if (_learnedMaterias[i] != NULL && _learnedMaterias[i]->getType() == type) 
        {
            return _learnedMaterias[i]->clone();
        }
    }
    return NULL;
}

AMateria*   MateriaSource::getLearnedMateria(int idx) const
{
    if (idx >= 0 && idx < 4)
        return _learnedMaterias[idx];
    else
        return NULL;
}