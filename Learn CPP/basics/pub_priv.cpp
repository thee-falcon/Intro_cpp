/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pub_priv.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:19:38 by omakran           #+#    #+#             */
/*   Updated: 2024/01/06 17:16:09 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// public: hwa wahd  Access Specifier ki allowi tkhdm b members likaynin f Class.
// protected: tqrinan bhal private, momkin tkhdm b dak variable li mprotecti f dakhl class o momkin tkhdm beh f inherit class.
// private: Ta hwa wahd Access Specifier makikhlikch tkhdm bchi member tkhdm beh braat l class, kiproetectiha ohad lqadiya katsma b 'encapsulation'
class data
{
    public:
    std::string name;
    
    // Setter Function.
    void    set_number(int  num)
    {
        the_number = num;
    }
    
    // Getter Function.
    int get_number()
    {
        return (the_number);
    }
    
    private:
    int the_number;
};

int main()
{
    data   data_1;
    
    data_1.name = "Omar";
    std::cout << data_1.name << std::endl;
    data_1.set_number(100);
    data_1.get_number();
    std::cout << data_1.get_number() << std::endl;
    return (0);
}