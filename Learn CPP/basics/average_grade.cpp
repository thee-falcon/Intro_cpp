/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average_grade.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:25:46 by omakran           #+#    #+#             */
/*   Updated: 2024/01/10 17:47:51 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int grade, sum = 0;

    std::cout << "Enter Your Grade in 1 to 10 to calculate your average grade." << std::endl;
    for (int i = 0; i < 3; i++)
    {
        do
        {
            std::cout << "Grade " << i + 1 << ": ";
            std::cin >> grade;
        }
        while (grade < 1 || grade > 10);
        sum += grade;
    }
    std::cout << "Your Average Grade is: " << sum / 3 << std::endl;
    return (0);
}