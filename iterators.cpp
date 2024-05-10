/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 20:43:06 by omakran           #+#    #+#             */
/*   Updated: 2024/05/10 23:12:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ##################################################################### Iterators: ###############################################################################################################
#                                                                                                                                                                                                 #                                                                          
#    An iterator is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container.                                #
#    They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them.                                     #
#    Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers. The most obvious form of an iterator is a pointer.  #
#    A pointer can point to elements in an array and can iterate through them using the increment operator (++). But, all iterators do not have similar functionality as that of pointers.        #
#                                                                                                                                                                                                 #
##################################################################################################################################################################################################*/

/* `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````|
|    Input Iterators: They are the weakest of all the iterators and have very limited functionality.                                                                                                |
|                 They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.              |
|                                                                                                                                                                                                   |
|   Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm,                                                   |
|                  but not for accessing elements, but for being assigned elements.                                                                                                                 |
|                                                                                                                                                                                                   |
|    Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators.                                               |
|                  But, as the name suggests, they also can only move in a forward direction and that too one step at a time.                                                                       |
|                                                                                                                                                                                                   |
|    Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators,                                             |
|                         as they can move in both the directions, that is why their name is bidirectional.                                                                                         |
|                                                                                                                                                                                                   |                
|    Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests,                                                            |
|                         they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.                                                    |
```````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````` */

#include <iostream>
#include <vector>

/*
    std::vector is a template class provided by the Standard Template Library (STL) that implements a dynamic array.
    It provides functionalities similar to arrays but with additional features like automatic resizing, bounds checking, and various utility functions.
*/
int main() {
    // Create a vector of integers
    std::vector<int> numbers;

    // Add some elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    // Print the elements of the vector using iterators
    std::cout << "Elements of the vector: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

