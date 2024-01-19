/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:17:41 by omakran           #+#    #+#             */
/*   Updated: 2024/01/19 11:56:44 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

// Vector is a container for similar data like array.
// Vector are daynamic arrays, it's mean we can change the size of the array.
// Vector is a Class Template.
// prototype: vector<type> VariableName

int main(void)
{
    std::vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(30);
    numbers.push_back(342);

    for (int i = 0; i < numbers.size(); i++)
    {
        // numbers.at(i) == number[i];
        std::cout << numbers.at(i) << " ";
    }
    std::cout << std::endl;
    // Number of Elements = 3.
    std::cout << "Number of Elements is: " <<  numbers.size() << std::endl;
    // Resize the vector = 4.
    numbers.push_back(234);
    std::cout << "Number of Elements is after resize the vector: " << numbers.size() << std::endl;
    
    return (0);
}