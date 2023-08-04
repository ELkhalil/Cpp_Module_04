/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:04:25 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 10:01:10 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class   AAnimal
{
public:
    AAnimal                  ( void );
    AAnimal                  ( AAnimal const& other);
    virtual ~AAnimal         ( void );
    AAnimal& operator=       ( AAnimal const& other );
    std::string getType     ( void ) const;
    virtual void makeSound  ( void ) const = 0;
protected:
    std::string type;
};

#endif