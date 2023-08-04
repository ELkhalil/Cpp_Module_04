/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:58:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 14:43:54 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
public:
    Cure         ( void );
    Cure         ( Cure const& other );
    ~Cure        ( void );
    Cure&        operator=( Cure const& other );
    AMateria*    clone() const;
    void         use(ICharacter& target);
};

#endif