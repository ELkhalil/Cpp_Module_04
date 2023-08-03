/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:13:13 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:03:45 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure : virtual public AMateria
{
public:
    Cure         ( void );
    Cure         ( Cure const& other );
    Cure&        operator=( Cure const& other );
    ~Cure        ( void );
    void        use(ICharacter& target);
    AMateria*   clone() const;
};

#endif