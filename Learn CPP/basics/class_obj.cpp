 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_obj.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:48:15 by omakran           #+#    #+#             */
/*   Updated: 2024/01/05 17:58:20 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>

// Class: User define data type.
// public: Access Modifier.
// list: a doubly-linked list container,  it stores elements in a linear order, Unlike arrays;

class omakran 
{
    // drna 'public' bash ykon endna Access nkhdmo b memebers ola functions likaynin dakhl dyal Class.
    // ila hydna 'public' ghaykon by default 'pravet', omaghaykonch 3ndna Access bash nkdhmo beh bra dyal Class.
    public: 
    std::string omakran_name;
    int age;
    // list of strings;
    std::list<std::string> Brothers;
    // function in the class;
    void    print_name()
    {
        std::cout << "The name is: " << omakran_name << std::endl;
    }
};

int main()
{
    // class: omakran , Object: obj
    omakran obj;

    obj.omakran_name = "Omar Makran";
    obj.print_name();
    obj.age = 24;
    std::cout << obj.age << std::endl;
    obj.Brothers = {"Amine", "Rida", "Anouar"};
    std::cout << "Likhwan" << std::endl;
    for (const std::string likhwan : obj.Brothers)
        std::cout << likhwan << std::endl;
    return (0);
}
