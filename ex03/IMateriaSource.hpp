/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:54:35 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 18:17:43 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
public:
    virtual             ~IMateriaSource( void );
    virtual void        learnMateria(AMateria*) = 0;
    virtual AMateria*   createMateria(std::string const & type) = 0;
};

#endif