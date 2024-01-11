/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_multiple_values.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:02:44 by omakran           #+#    #+#             */
/*   Updated: 2024/01/11 13:11:33 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// return Multiple Values using pointers, <Reference Concept>.

void    GetMinMax(int number[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (number[i] > *max)
            *max = number[i];
        if (number[i] < *min)
            *min = number[i];
    }
}

int main()
{
    int numbers[6] = {23, 1, -2, 6, 2, -100};
    int min = numbers[0];
    int max = numbers[0];
    // Pass &min and &max = pass by reference, ay change traw lehom fdakhl function, ghaybqaw msaving dok changes..
    GetMinMax(numbers, 6, &min, &max);
    std::cout << "The MIN number in the array is: " << min << std::endl;
    std::cout << "The MAX number in the array is: " << max << std::endl;
    return (0);
}