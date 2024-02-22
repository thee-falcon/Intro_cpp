/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_without_tmp.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:02:24 by omakran           #+#    #+#             */
/*   Updated: 2024/01/08 18:16:47 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Program for swapping the values of Two Variables Without using The Third Variable (TMP);

int main()
{
    int a = 30;
    int b = 20;

    std::cout << "The 'a' before Swapping = " << a << std::endl;
    std::cout << "The 'b' before Swapping = " << b << std::endl;
    // ------------- The code: -----------
    a = a + b; // 30 + 20 = 50;

    b = a - b; // 50 - 20 = 30;
    a = a - b; // 50 - 30 = 20;
    // -----------------------------------
    std::cout << "................................." << std::endl;
    std::cout << "The 'a' and 'b' after Swapping: "<< std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
    return (0);
}