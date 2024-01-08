/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_of_triangle.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:27:53 by omakran           #+#    #+#             */
/*   Updated: 2024/01/08 17:50:18 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    float   a, b, c;

    std::cout << "Please Enter the cordonate of the Triangle: a, b, c!" << std::endl;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if (a == b && b == c)
        //مثلث متساوي الأضلاع
        std::cout << "This an Equilateral Triangle." << std::endl;
    else if (a !=b && a != c && b != c)
        // مثلث مختلف الأضلاع 
        std:: cout << "This a Scalene Triangle." << std::endl;
    else
        // متساوي الساقين
        std::cout << "This an Isosceles Triangl" << std::endl;
    return (0);
}