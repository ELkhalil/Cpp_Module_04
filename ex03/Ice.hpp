/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:48:46 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 14:44:05 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
public:
    Ice         ( void );
    Ice         ( Ice const& other );
    ~Ice        ( void );
    Ice&        operator=( Ice const& other );
    AMateria*   clone() const;
    void        use(ICharacter& target);
};

#endif