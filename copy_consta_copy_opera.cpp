/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_consta_copy_opera.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:27:58 by omakran           #+#    #+#             */
/*   Updated: 2024/02/08 17:48:32 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class User {
    std::string name;
    public :
        User() {
        }

        void setname(std::string name) {
            this->name = name;
        }

        User(User & user) {
            std::cout << "COPY CONSTRUCTOR CALLED\n";
            // *this: pointed to object user2 in int main().
            // user: of user1 in int main().
            *this = user;
        }
        // syntax of Copy assignment operator.
        void operator=(User & user) {
            std::cout << "COPY ASSINGMENTS CALLED\n";
            this->name = user.name;
        }
};

int main() {

    User user1;
    user1.setname("omarrr");

    // like a user2 = user1;
    User user2(user1);
    return (0);
}