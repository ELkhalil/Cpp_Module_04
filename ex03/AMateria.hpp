/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:32:54 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:13:06 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
public:
    AMateria            ( void );
    AMateria            (std::string const & type);
    AMateria            ( AMateria const& other );
    AMateria&           operator=( AMateria const& other );
    virtual ~AMateria   ( void );
    std::string const&  getType() const;
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);
protected:
    std::string         _type;
};

#endif