/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:24:05 by omakran           #+#    #+#             */
/*   Updated: 2024/07/22 21:04:53 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

void    displayElementStack(std::stack<int> st) {
    while (!st.empty()) {
        std::cout << st.top() << std::endl;
        st.pop();
    }
}

int main () {
    // functions: push, pop, top, empty, size
    std::stack<int>     st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    if (st.empty())
        std::cout << "The stack is empty!" << std::endl;
    else
        std::cout << "The stack is not empty!" << std::endl;

    std::cout << "The size of the stack is: " << st.size() << std::endl;
    displayElementStack(st);
    std::cout << "The size of the stack is: " << st.size() << std::endl;

    

    
    return 0;
}