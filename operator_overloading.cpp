/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overloading.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:56:37 by omakran           #+#    #+#             */
/*   Updated: 2024/02/04 17:58:37 by omakran          ###   ########.fr       */
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

// Comparison Operators: You can overload comparison operators (==, !=, <, >, <=, >=) to define custom comparisons for your objects.
class Point
{
public:
    int x, y;

    bool operator==(const Point& other) const
    {
        return (x == other.x) && (y == other.y);
    }
};

//Overloading unary operators like ++, --, -, !, etc., for your class objects.

class Counter
{
private:
    int count;

public:
    Counter operator++()
    {
        // Increment the count and return the updated object
        ++count;
        return *this;
    }
};

// Subscript Operator ([]): You can overload the [] operator to provide array-like access to objects of your class.
class Matrix
{
private:
    int data[3][3];

public:
    int operator()(int row, int col) const
    {
        return data[row][col];
    }
};

//Function Call Operator (()): You can overload the () operator to make objects of your class callable like functions.
class Functor
{
public:
    int operator()(int x, int y) const
    {
        return x + y;
    }
};

int main()
{
    operatorOverloading c1(1, 3), c2(2, 4);

    // An example call to "operator+"
    operatorOverloading c3 = c1 + c2;
    c3.print();
    return (0);
}