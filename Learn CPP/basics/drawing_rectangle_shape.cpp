/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_rectangle_shape.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:10:21 by omakran           #+#    #+#             */
/*   Updated: 2024/01/10 19:04:24 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main()
{
    int     height, width;
    char    symbol;

    std::cout << "Please Enter the Height and Width for Rectangle Shape." << std::endl;
    system ("clear");
    std::cout << "Height: ";
    std::cin >> height;
    std::cout << "Width: ";
    std::cin >> width;
    system ("clear");
    std::cout << "Now Enter the Symbol do you want, to Draw the Rectangle Shape:" << std::endl;
    std::cin >> symbol;
    system ("clear");
    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
            std::cout << std::setw(3) << symbol;
        std::cout << std::endl;
    }
    return (0);
}