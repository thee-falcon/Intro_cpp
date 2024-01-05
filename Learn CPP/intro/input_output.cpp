/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_output.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:48:08 by omakran           #+#    #+#             */
/*   Updated: 2024/01/05 17:48:27 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int n1, n2;

    n1 = 0, n2 = 0;
    std::cout << "Enter the Number" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The Total of the numbers " << n1 << " and " << n2 << " is " << n1 + n2 << "." << std::endl; 
}