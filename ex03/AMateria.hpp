/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:34:31 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 14:52:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class   ICharacter;

class AMateria
{
public:
    AMateria                ( void );
    AMateria                ( AMateria const& other );
    AMateria                ( std::string const & type );
    virtual ~AMateria       ( void );
    AMateria&   operator=   ( AMateria const& other );
    std::string const&      getType() const;
    virtual AMateria*       clone() const = 0;
    virtual void            use(ICharacter& target);
protected:
    std::string             _type;
};

#endif