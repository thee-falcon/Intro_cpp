/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reference.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 00:03:08 by omakran           #+#    #+#             */
/*   Updated: 2024/01/07 00:23:02 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// int Get_min(int numbers[], int size)
// {
//     int min;

//     min = numbers[0];
//     for (int i = 1; i < size; i++)
//         if (numbers[i] < min)
//             min = numbers[i];
//     return (min);
// }

// int Get_max(int numbers[], int size)
// {
//     int max;

//     max = numbers[0];
//     for (int i; i < size; i++)
//         if (numbers[i] > max)
//             max = numbers[i];
//     return (max);
// }

void    Get_MinMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}

int main()
{
    int number[6] = {4, 5, 0, 2, -1, 9};
    int min, max;
    
    min = number[0];
    max = number[0];
    // Pass By Reference.
    Get_MinMax(number, 6, &min, &max);
    std::cout << "Max is: " << max << "." << std::endl;
    std::cout << "Min is: " << min << "." << std::endl;
    
    return (0);
}