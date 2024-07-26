/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generice_func_and_classes.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:30:23 by omakran           #+#    #+#             */
/*   Updated: 2024/07/17 05:01:32 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }

// template <typename T>
// T subtrct(T a, T b) {
//     return a - b;
// }

// template <typename T>
// T multiply(T a, T b) {
//     return a * b;
// }

template <typename T>
class Calculator {
    public:
        T add(T a, T b) { return a + b;}
        T subtct(T a, T b) { return a - b;}
        T multiply(T a, T b) { return a * b;}
        T divide(T a, T b) {
            if (b == 0) {
                std::cout << "Error: Division by zero" << std::endl;
                return 0;
            }
            return a / b;
        }
};

int main() {
    // std::cout << add(7, 10) << std::endl;
    // std::cout << add(4.5 , 32.34) << std::endl;

    // std::cout << subtrct(10 , 3) << std::endl;
    // std::cout << subtrct(4, 5) << std::endl;

    // std::cout << multiply(10, 2) << std::endl;
    // std::cout << multiply(4.4 , 23.2) << std::endl;
    
    Calculator<int> intCalc;
    Calculator<float> floatCalc;

    std::cout << intCalc.add(10, 30) << std::endl;
    std::cout << floatCalc.subtct(10.3 , 40.4) << std::endl;
    
    std::cout << intCalc.add(20 , 43) << std::endl;
    std::cout << floatCalc.subtct(20.4 , 5.3) << std::endl;

    std::cout << intCalc.divide(10, 0) << std::endl;
    std::cout << intCalc.divide(10 , 2) << std::endl;

    return 0;
}