/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_spaces.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:48:20 by omakran           #+#    #+#             */
/*   Updated: 2024/01/05 17:48:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// ankdhm b 'using' li hwa wahd Keyword kikhdm lbzaf dyal l3ibat, bhal ila bghina mnbqawch nti7o f tikrar dyal lktaba
// bhal khas nbqa nktb kola mra std::cout/ std::cin ... kndir declaration whda omknbqash nti7 fdak mochkil.
// WARNING: using is FORBIDDEN in Projcet cpp.

using namespace std;

// ila bghina nspecifiw identifiers
using std::cout;

int main()
{
    cout << "Hello World" << endl;
    return (0);
}