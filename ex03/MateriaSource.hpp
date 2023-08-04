/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:12:51 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 18:01:23 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource   ( void );
    MateriaSource   ( MateriaSource const& other );
    ~MateriaSource  ( void );
    MateriaSource&  operator=( MateriaSource const& other );

    void            learnMateria(AMateria*);
    AMateria*       createMateria(std::string const & type);
    AMateria*       getLearnedMateria(int idx) const;
private:
    AMateria*       _learnedMaterias[4];
    AMateria*       _reserve;
    void            _deleteReservedAMateria( void );
};

#endif