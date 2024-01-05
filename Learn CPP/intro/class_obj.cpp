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

class omakran 
{
    // drna 'public' bash ykon endna Access nkhdmo b memebers ola functions likaynin dakhl dyal Class.
    // ila hydna 'public' ghaykon by default 'privet', omaghaykonch 3ndna Access bash nkdhmo beh bra dyal Class.
    public: 
    std::string omakran_name;
    void    print_name() {std::cout << "The name is: " << omakran_name << std::endl;}
};

int main()
{
    // class: omakran , Object: obj
    omakran obj;

    obj.omakran_name = "Omar Makran";
    obj.print_name();
    return (0);
}
