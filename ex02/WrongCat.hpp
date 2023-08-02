/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:23:20 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 17:26:54 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat     ( void );
    WrongCat     ( WrongCat const& other );
    ~WrongCat    ( void );
    WrongCat&    operator= ( WrongCat const& other );
    void    makeSound ( void ) const;
};

#endif