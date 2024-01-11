/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_pointers.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:28:43 by omakran           #+#    #+#             */
/*   Updated: 2024/01/11 12:36:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// void pointers using switch case;

void    print(void* ptr, char type)
{
    switch (type)
    {
        case 'i': std::cout << *((int*)ptr) << std::endl; break;
        case 'c': std::cout << *((char*)ptr) << std::endl; break;
    }
}

int main()
{
    char    letter = 'c';
    int     number = 10;

    print(&number, 'i');
    print(&letter, 'c');
    return (0);
}