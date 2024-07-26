/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl_list.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:03:12 by omakran           #+#    #+#             */
/*   Updated: 2024/07/19 19:09:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

void    displayRating(const std::list<int>& player) {
    for (std::list<int>::const_iterator it = player.begin(); it != player.end(); it++) {
        std::cout <<"Rating Player: " << *it << std::endl;
    }
}

void    insertTheRating(int rating, std::list<int>& listOfPlayers) {
    for (std::list<int>::iterator it  = listOfPlayers.begin(); it != listOfPlayers.end(); it++) {
        if (*it > rating) {
            listOfPlayers.insert(it, rating);
            return;
        }
    }
    listOfPlayers.push_back(rating);
    
}

int main () {
    std::list<int>  allPlayers;
    int             arr[] = {2, 3, 4, 5, 6, 8, 1, 10, 7, 9, 3, 1, 4, 4};
    size_t          arrSize = sizeof(arr) / sizeof(arr[0]); // 14

    allPlayers.insert(allPlayers.end(), arr, arr + arrSize);

    std::list<int>  begginers; // rating from 1 to 5
    std::list<int>  pros; // rating from 6 to 10
    
    for (std::list<int>::iterator it = allPlayers.begin(); it != allPlayers.end(); it++) {
        if (*it >=1 && *it <= 5)
            insertTheRating(*it, begginers);
        else if (*it >= 6 && *it <= 10)
            insertTheRating(*it, pros);
    }
    std::cout << "The Beginners:" << std::endl;
    displayRating(begginers);
    std::cout << "The Pros:" << std::endl;
    displayRating(pros);

    return 0;
}

