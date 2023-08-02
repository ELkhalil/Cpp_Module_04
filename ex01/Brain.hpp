/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:47:31 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 16:20:21 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
    Brain               ( void );
    Brain               ( Brain const& other );
    ~Brain              ( void );
    Brain&              operator=( Brain const& other );
    void                displayIdeas( void ) const;
    void                setIdeas ( std::string *data, int sizeData);
    const std::string*  getIdeas ( void ) const;
private:
    std::string         ideas[100];
};

#endif
