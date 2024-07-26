/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:25:19 by omakran           #+#    #+#             */
/*   Updated: 2024/07/25 19:40:59 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <list>

// int main () {
//     std::map<std::string, std::string> myMap;
    
//     myMap.insert(std::pair<std::string, std::string>("name", "omar"));
//     myMap.insert(std::pair<std::string, std::string>("name", "reda"));
//     myMap.insert(std::pair<std::string, std::string>("name", "mohamed"));
//     myMap["name"] = "hhhhh";
    
//     // for (std::map<std::string, std::string>::iterator it = myMap.begin(); it != myMap.end(); it++) {
//         std::string str = myMap.find("name")->second;
//         std::cout << str << std::endl;
        
//     // }
    
//     return 0;
// }

int main () {
    
    std::map<std::string, std::list<std::string> > pokedex;

    std::list<std::string> pikachuAttacks;
    std::list<std::string> charmanderAttacks;
    std::list<std::string> chikoritaAttacks;

    std::string pikachu[] = {"thunderbolt", "quick attack", "iron tail", "volt tackle"};
    std::string charmander[] = {"ember", "flamethrower", "fire spin", "fire blast"};
    std::string chikorita[] = {"razor leaf", "solar beam", "synthesis", "petal dance"};
    size_t pikachuSize = sizeof(pikachu) / sizeof(pikachu[0]);
    size_t charmanderSize = sizeof(charmander) / sizeof(charmander[0]);
    size_t chikoritaSize = sizeof(chikorita) / sizeof(chikorita[0]);

    pikachuAttacks.insert(pikachuAttacks.end(), pikachu, pikachu + pikachuSize);
    charmanderAttacks.insert(charmanderAttacks.end(), charmander, charmander + charmanderSize);
    chikoritaAttacks.insert(chikoritaAttacks.end(), chikorita, chikorita + chikoritaSize);

    pokedex.insert(std::pair<std::string, std::list<std::string> >("Pikachu", pikachuAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string> >("Charmander", charmanderAttacks));
    pokedex.insert(std::pair<std::string, std::list<std::string> >("Chikorita", chikoritaAttacks));

    for (std::map<std::string, std::list<std::string> >::iterator it = pokedex.begin(); it != pokedex.end(); it++) {
        std::cout << std::endl;
        std::cout << "Pokemon: " << it->first << std::endl;
        std::cout << "Attacks: " << std::endl;
        for (std::list<std::string>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2++) {
            std::cout << *it2 << std::endl;
        }
    }
    
    return 0;
}