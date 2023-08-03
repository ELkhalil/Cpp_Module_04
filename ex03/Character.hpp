/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:49:26 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:13:12 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
    Character               ( void );
    Character               ( Character const& other );
    Character               ( std::string const& name );
    ~Character              ( void );
    Character&              operator=( Character const& other );
    std::string const&      getName() const;
    void                    equip(AMateria* m);
    void                    unequip(int idx);
    void                    use(int idx, ICharacter& target);
    AMateria*               getInventory(int idx) const;
private:
    AMateria*               _inventory[4];
    AMateria*               _save;
    std::string             _name;
    void                    _deleteSaved( void );
};

#endif