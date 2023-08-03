/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:48:22 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:03:48 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice : virtual public AMateria
{
public:
    Ice         ( void );
    Ice         ( Ice const& other );
    Ice&        operator=( Ice const& other );
    ~Ice        ( void );
    void        use(ICharacter& target);
    AMateria*   clone() const;
};

#endif