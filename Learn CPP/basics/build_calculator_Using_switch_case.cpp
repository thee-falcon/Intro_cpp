/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_calculator_Using_switch_case.cpp             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:03:10 by omakran           #+#    #+#             */
/*   Updated: 2024/01/09 18:49:21 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    float   num1, num2;
    int     i;
    char    operation;
    std::cout << "WARNING: This Program is a Simple Calculator to Calculate Two Numbers Using C++!" <<std::endl;
    std::cout << "---------------------------------------------------------------------------------" <<std::endl;
    std::cout << "To continue Press (1), to exit Press (0)." <<std::endl;
    std::cin >> i;
    system ("clear");
    (i == 1) ? (std::cout << "Welcome to [omakran] Calculator ^_^" << std::endl, void()) : (void)exit(0);
    std::cout << "## Please Enter <num1> and <operation> and <num2> then Press ENTER ##" << std::endl;
    std::cout << std::endl;
    std::cout << "          ==> For Example: 10+10 <==" << std::endl;
    std::cout << std::endl;
    std::cin >> num1 >> operation >> num2;
    switch (operation)
    {
        case '+': std::cout << num1 << " " << operation << " " << num2 << " = " << num1 + num2; break;
        case '-': std::cout << num1 << " " << operation << " " << num2 << " = " << num1 - num2; break;
        case '*': std::cout << num1 << " " << operation << " " << num2 << " = " << num1 * num2; break;
        case '/': std::cout << num1 << " " << operation << " " << num2 << " = " << num1 / num2; break;
        case '%':
            bool IsNum1_Int, IsNum2_Int;
            IsNum1_Int = ((int)num1 == num1); // 2 == 2.0
            IsNum2_Int = ((int)num2 == num2);
            if (IsNum1_Int && IsNum2_Int)
                std::cout << num1 << " " << operation << " " << num2 << " = " << (int)num1 % (int)num2;
            else
                std::cout << "This is not Valid!!" << std::endl;
    }

    return (0);
}