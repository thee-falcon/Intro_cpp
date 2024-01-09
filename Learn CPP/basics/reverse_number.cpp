/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_number.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:23:43 by omakran           #+#    #+#             */
/*   Updated: 2024/01/09 22:28:18 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int number = 0, reversed_number = 0;
    
    std::cout << "Please Enter the number: ";
    std::cin >> number;
    while (number != 0)
    {
        reversed_number *= 10;
        reversed_number += (number % 10);
        number /= 10;
    }
    system ("clear");
    std::cout << "number After reverssing: " << reversed_number;
    return (0);
}