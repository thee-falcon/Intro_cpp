/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime_number.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:12:05 by omakran           #+#    #+#             */
/*   Updated: 2024/01/10 19:33:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Prime number: a number is divisible Only by One or by itself.

bool    IsPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return (false);
    }
    return (true);
}
int main()
{
    int number;

    std::cout << "Please Enter the number to check it, if is a prime number or not!" << std::endl;
    std::cout << "Number: ";
    std::cin >> number;
    
    bool isPrime = IsPrime(number);
    system("clear");
    if (isPrime)
        std::cout << "The number: " << number << " is a Prime number." << std::endl;
    else
        std::cout << "The number: " << number << " is not a Prime number." << std::endl;
    return (0);
}