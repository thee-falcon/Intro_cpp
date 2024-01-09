/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 23:35:03 by omakran           #+#    #+#             */
/*   Updated: 2024/01/09 23:46:29 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int number, factorial = 1;

    std::cout << "Please Enter the number: ";
    std::cin >> number;
    std::cout << number << "! = ";
    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
        std::cout << i << " ";
        if (i != number)
            std::cout << "* ";
    }
    std::cout << " = " << factorial;
    return (0);
}