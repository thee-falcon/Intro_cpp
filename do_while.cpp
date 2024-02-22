/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_while.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:09:40 by omakran           #+#    #+#             */
/*   Updated: 2024/01/10 17:20:16 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// lfrq maben 'While Loop' o 'Do Loop', hwa ana do while kadkhl l scope lifiha code wakha mam7qeqach condition fmra lwla
// ye3ni kadkhl l scope dyal code okadir li kadir eaaad mn b3dd katchecki 'Condition While'
// But While loop katchiki mn lwl condition o ilaa t7qeqat dek sa3 kadkhl l scope dyal code.

int main()
{
    int i = 1;
    
    std::cout << "------ Do While  -------" << std::endl;
    do
    {
        std::cout << i << std::endl;
        i++;
    }
    while (i < 1);
    //#####################################################
    std::cout << "------ While Loop -------" << std::endl;
    i = 1;
    while (i < 1)
    {
        std::cout << i << " " ;
        i++;
    }
    return (0);
}