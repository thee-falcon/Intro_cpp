/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_fifo.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:09:24 by omakran           #+#    #+#             */
/*   Updated: 2024/07/22 22:56:58 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <queue>

void    displayQueue(std::queue<int> q) {
    while (!q.empty()) {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main() {
    std::queue<int>     myQueue;
    
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    std::cout << "The size of the queue is " << myQueue.size() << std::endl;

    displayQueue(myQueue);
    myQueue.pop();
    std::cout << "The size of the queue is " << myQueue.size() << std::endl;
    displayQueue(myQueue);

}