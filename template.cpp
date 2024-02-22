/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:51:56 by omakran           #+#    #+#             */
/*   Updated: 2024/01/20 10:57:26 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// Template Declaration:
template    <class T, class Allocator = std::allocator<T>>
class vector;



std::vector<int> intVector; // vector of integers.
std::vector<double> doubleVector; // vector of doubles.

#include <iostream>

// Class template definition
// class T == int || T == char ... , ila khdmna b int ola char... katpresenta blast T
template <class T>

class MyClass
{
public:
    T getData() const { return data; }
    void setData(T value) { data = value; }

private:
    T data;
};

int main()
{
    // Instantiate MyClass with ==> int
    MyClass<int> myIntObject;
    myIntObject.setData(42);
    std::cout << "Data: " << myIntObject.getData() << std::endl;
    
    // Instantiate MyClass with ==> double
    MyClass<double> myDoubleObject;
    myDoubleObject.setData(3.14);
    std::cout << "Data: " << myDoubleObject.getData() << std::endl;
    return (0);
}
