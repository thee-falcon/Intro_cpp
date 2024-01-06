/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constra_destra.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:31:53 by omakran           #+#    #+#             */
/*   Updated: 2024/01/06 22:32:11 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
1 constructor: 
2 destructor
3 copy constructor
4 assignment operator =
*/

class data
{
    private:
        int _age;
        std::string _name;
    public:
        data(void);
        ~data(void);
    void set_age(int   value)
    {
        _age = value;
    }
    void set_name(std::string the_name)
    {
        _name = the_name;
    }
    int get_age(void)
    {
        return _age;
    }
};
 
class   User
{
    public:
    std::string First_Name;
    std::string Last_Name;
    int         Age;
    User () {}
    User(std::string F_Name, std::string L_name, int age)
    {
        First_Name = F_Name;
        Last_Name = L_name;
        Age = age;
    } 
};

// Constructor Function: hwa Special Member Function, kit3yt 3liha automatically mni kitcrea wahd objetc mn chi class, kiyakhd nafs smiya dyal class omaa3ndoch shi return type
// Elash kit3yt ela constructor? bash idir wahd initialize ldok objects data members, ila jit mataln nprinti First_Name and Last_Name and Age, maghadich i3tini compiler Error, Hit Constracture Intializa liya variables dyawli, o ysetupi ila kant shi haja khasha tsetupa, hit awl haja likatkhdm hwa constructor.
data::data(void)
{
    std::cout << "Constructor Called.\n";
}

// Destructor Funtion: hwa Special Member Function, kit3yt liha automatically mni object kibghi ikhrj mn Scope ola deleta dak object
// o kiyakhd nafs smiya dyal lclass ghir taykon flbdaya dyalo tilde('~'). O lgharad dyalo hwa ycleani resources bhal Memory o File Handls(Bhal File Descriptor) li khdahom dak object fash kan baqi.
data::~data(void)
{
    std::cout << "Destructor Called.\n";
}

void    GetUserInfo(User us)
{
    std::cout << us.First_Name << std::endl;
    std::cout << us.Last_Name << std::endl;
    std::cout << us.Age << std::endl;
}

int main()
{
    data   *data_1 = new data;

    // Parametrized Constructor.
    User    user_1("Omar", "Makran", 25);
    // Handlitha b Own constractur: 'User () {}', hit default constractur t7yd fash jit drt constructor dyali.
    User    omakran;
    
    GetUserInfo(user_1);
    std::cout << "heello\n";
    delete data_1;
    
    return (0);
}

