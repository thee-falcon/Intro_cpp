/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Build_BMI_Calculator.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:56:34 by omakran           #+#    #+#             */
/*   Updated: 2024/01/09 00:23:03 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

                        // BMI Calculator
int main()
{
    float   weight = 0, height = 0;
    float   bmi;

    std::cout << "Please Entre your Weight, and your Height" << std::endl;
    std::cout << "Weight in (Kg): ";
    std::cin >> weight;
    std::cout << "Height in (m): ";
    std::cin >> height;
    std::cout << "---------------------------------------------" << std::endl;
    bmi = weight / (height * height);
    if (bmi < 18.5)
        std::cout << "==> Underweight." << std::endl;
    else if (bmi > 25)
        std::cout << "==> Overweight." << std::endl;
    else
        std::cout << "==> Normal Height." << std::endl;
    std::cout << "# Your BMI is: " << bmi << " #" << std::endl;
    return (0);
}