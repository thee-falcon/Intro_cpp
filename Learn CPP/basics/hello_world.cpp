/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_world.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:48:01 by omakran           #+#    #+#             */
/*   Updated: 2024/01/05 17:48:03 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::cout << "Hello World" << std::endl;
    return (0);
}


// Flash back ila l3asr lhajari hh && Basics CPP
// 
// (1) : Elash kandiro # qbal include???, compiler fash kiwsl lsstr li fih # ki3rf bli khas idaro shi tasks qbl maycompili
//       bhal ichof b ina libraries li ay7taj bach icompili... wbla beha farah ayhsab compiler bli dik include ghir chi reguler c(++) statement.
// (2) : 'Angle brackets' < > ==>> <iostream>  kidaro bash tbyn l compiler bli rak baghi tkhdm b Standard library header file, machi b library li mqad nta...
// (3) : 'Double Quotes': "" ==>> "omakran.h" kidaro bash tbyn l compiler bli rak baghi tkhdm b header file li mqad nta, kimshi okiqlb f current directory
//                     ola f path li m includi nta, ila mqalqash kimchi kiqbl f Standard Library.
// (4) : '<iostream>' ==>> had library smitha: input/output stream
// (5) : 'int main()' ==>> raha bayna main function
// (6) : 'std' ==>> kitsma namespace fih bzaf dyal lhwayj... bhal classes o functions o containers... kankhdmo fehom
//       bhal 'cout' li hwa 'Console Output' ola 'endl' li hya 'End of line', o kihandli lina lmochkil dyal conflate dyal smiyat.
// (7) : '<<' ==> kitsmaw b Overload Operators, kaynin joj mnhom, kayn '<<' hada kidar mni katbghi tprinti shi haja f Standard Output
//                                                              kayn '>>' hada kidar mni katbghi takhd input mn Standard Input.
// (8) : '::' ==> kitsmaw b Scope Resolution Operator, kispecifew o kidiro wahd organize o kndkhdmohom ila bghina n accessisiw lchi member fchi class
// (9) : 'endl' ==> kitsma b Manipulator li kipresenti End of Line f Output Stream