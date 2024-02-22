/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:38:29 by omakran           #+#    #+#             */
/*   Updated: 2024/02/14 20:57:26 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class UserData {
    protected :
        std::string login;
        std::string level;
        int age;
    public:
    UserData() {
        std::cout << "BASE CONSTRUCTER CALLED\n";
    }
    void gg() {
        std::cout << "CALLED FROM : " << this->login;
    }
};

class User : public UserData {
    public:
        User() {
        }
        void setDtaa(std::string loginm, std::string level, int age) {
            this->login = loginm;
            this->level = level;
            this->age = age;
        }

        void printDtata() {
            std::cout << "AGE : " << this->age << " Login :" << this->login << " LEVEL : " << this->level + "\n";
        }
};

int main() {
    User user;
    User user2;
    User user1;
    user.setDtaa("omar", "5.71", 20);
    user1.setDtaa("amine", "1000.71", 20);
    // user.printDtata();
    user.gg();
    std::cout << "\n";
    user1.gg();
}