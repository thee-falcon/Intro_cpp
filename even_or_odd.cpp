/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   even_or_odd.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 23:49:13 by omakran           #+#    #+#             */
/*   Updated: 2024/01/08 16:43:54 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int number;

    std::cout << "Please Entre the number: ";
    std:: cin >> number;
    if (number % 2 == 0)
        std:: cout << "The number " << number << " is even!" << std::endl;
    else
        std:: cout << "The number " << number << " is odd!" << std::endl;
    std:: cout << "Thank You." << std::endl;
    return (0);
}