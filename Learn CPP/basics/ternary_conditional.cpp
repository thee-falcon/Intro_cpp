/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ternary_conditional.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 00:42:36 by omakran           #+#    #+#             */
/*   Updated: 2024/01/09 01:06:12 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

                // Build a Guessing check App usig Ternary Conditional.
// system(): Kayna f part dyal <cstdlib> Header, katakhdm dak argument okatpresentih ka command okatpassih l command processor ola shell, bhal ila katkb chi command f Terminal.

int main()
{
    int HostUserNum = 0, GuestUserNum = 0;

    std::cout << "Please Entre The Host User: ";
    std::cin >> HostUserNum;
    // to clear the terminal screen.
    system("clear");
    std::cout << "Please Entre the Guest User: ";
    std::cin >> GuestUserNum;
    system("clear");
    // Ternary Conditional.
    (HostUserNum == GuestUserNum) ? std::cout << "Correct!" : std::cout << "Failed!" << std::endl;
    /* It's the same.
    if (HostUserNum == GuestUserNum)
        std::cout << "Correct!" << std::endl;
    else
        std::cout << "Failed!" << std::endl;
    */
    return (0);
}