/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:20:04 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 13:21:37 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat     ( void );
    Cat     ( Cat const& other );
    ~Cat    ( void );
    Cat&    operator= ( Cat const& other );
    void    makeSound ( void ) const;
};

#endif