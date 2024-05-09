/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   containers.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 22:04:46 by omakran           #+#    #+#             */
/*   Updated: 2024/05/09 22:31:06 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
    container is a data structure that is designed to hold a collection of elements,
    where the type of elements is not fixed but rather specified by the user.

    you might want to create a generic list data structure that can hold elements of any type.
    Instead of creating separate list implementations for integers, strings, etc.,
    you can create a templated list container that can hold elements of any type.
*/

// used the Class Template (Module CPP-07) for the Create the Container.
template<typename T>

class Containers
{
private:
    T*  elements;
    int size;
public:
    Containers() {
        elements = new T[10];
        size = 0;
    }
    void    add(const T& element) {
        elements[size] = element;
        size++;
    }
    void    print() {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
    ~Containers() {
        if (elements)
            delete [] elements;
    }
};

int main() {
    Containers<int> intList;
    intList.add(8);
    intList.add(10);
    // print the numbers in that Container.
    intList.print();

    Containers<std::string> strList;
    strList.add("Omar");
    strList.add("Makran");
    // print the strings in the Container.
    strList.print();
    
    
    return (0);
}