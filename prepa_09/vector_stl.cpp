/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_stl.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:24:31 by omakran           #+#    #+#             */
/*   Updated: 2024/07/22 20:23:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int main() {
    std::vector<int>    vec;

    for (int i = 0; i <= 10; i++) {
        vec.push_back(i);
    }

    vec.insert(vec.begin() + 5, 100);
    vec.erase(vec.begin() + 5);
    vec.clear();

    // for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
    //     std::cout << *it << std::endl;
    // }
    std::cout << vec.empty() << std::endl;
    
    
    return 0;
}