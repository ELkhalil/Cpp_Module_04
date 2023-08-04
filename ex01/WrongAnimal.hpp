/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:23:47 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 16:51:50 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal
{
public:
    WrongAnimal                  ( void );
    WrongAnimal                  ( WrongAnimal const& other);
    virtual ~WrongAnimal         ( void );
    WrongAnimal& operator=       ( WrongAnimal const& other );
    std::string getType          ( void ) const;
    void makeSound               ( void ) const;
protected:
    std::string type;
};

#endif