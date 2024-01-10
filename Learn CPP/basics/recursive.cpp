/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:55:47 by omakran           #+#    #+#             */
/*   Updated: 2024/01/10 20:03:42 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// sum numbers between n and m.

int recursive_sum(int n, int m) // n = 2, m = 4;
{
    if (n == m)
        return (n);
    return (n + recursive_sum(n + 1, m)); // 2 + (2 + 1, 4);
}

int main()
{
    int n = 2, m = 4;

    std::cout << "Sum = " << recursive_sum(n, m);
    return (0);
}