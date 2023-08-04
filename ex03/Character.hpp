/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:52:49 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 14:51:58 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class   Character : public ICharacter
{
public:
    Character   ( void );
    Character   ( std::string const& name );
    Character   ( Character const& other );
    Character&  operator= ( Character const& other );
    ~Character  ( void );

    std::string const& getName() const;
    void        equip(AMateria* m);
    void        unequip(int idx);
    void        use(int idx, ICharacter& target);
    AMateria*   getInventory(int idx) const;
private:
    AMateria*       _inventoryMA[4];
    AMateria*       _reserve;
    std::string     _name;
    void            _deleteReservedAMateria( void );
};
#endif