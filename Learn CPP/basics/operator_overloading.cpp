/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overloading.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:56:37 by omakran           #+#    #+#             */
/*   Updated: 2024/02/04 16:20:41 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Operator Overloading:
C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.
For example, we can make use of the addition operator (+) for string class to concatenate two strings.
We know that the task of this operator is to add two operands.
So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them. 
*/

#include <iostream>

class operatorOverloading
{
private:
    int real, image;
public:
    operatorOverloading(int r = 0, int i = 0)
    {
        real = r;
        image = i;
    }
    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    operatorOverloading operator +(operatorOverloading const &object)
    {
        operatorOverloading res;

        res.real = real + object.real;
        res.image = image + object.image;
        return (res);
    }
    void print() { std::cout << real << " + i" << image << std::endl; }
};

int main()
{
    operatorOverloading c1(1, 3), c2(2, 4);

    // An example call to "operator+"
    operatorOverloading c3 = c1 + c2;
    c3.print();
    return (0);
}