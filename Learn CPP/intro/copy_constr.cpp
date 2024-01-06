/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_constr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:36:19 by omakran           #+#    #+#             */
/*   Updated: 2024/01/06 23:38:22 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Copy Constructor: hwa wahd special constructor likan ndiro beh wahd object jdid ka copy dyal wahd object f nafs l class.
// Okankhdmo beh f Public Access Specifier, kit3yt lih fach kanpasiw dak object ka Value.
// O ma k returni tashi data type, O kitsma b nafs smiya dyal Class.
// O kiyakhd lina Parameter Wahd odak Paremter kiyakhd naafs smiya dyal Class.

class Lhala_Lmadaniya
{
    public:
    std::string Smiya;
    std::string Lkniya;
    int         Tarikh_Lizdiyad;
    float       *Tartib_lwilada;
    int         Counter_Tartib_lwilada;

    // Constructor.
    Lhala_Lmadaniya (std::string smiya, std::string lkniya, int tarikh)
    {
        Smiya = smiya;
        Lkniya = lkniya;
        Counter_Tartib_lwilada = 1;
        Tartib_lwilada = new float[Counter_Tartib_lwilada];
        Tartib_lwilada[0] = 1;
        Tartib_lwilada[1] = 0;
        Tarikh_Lizdiyad = tarikh;
    }
    // Destructor.
    ~Lhala_Lmadaniya()
    {
        delete []Tartib_lwilada;
        Tartib_lwilada = nullptr;
    }
    
    // Copy Constructor.
    Lhala_Lmadaniya(Lhala_Lmadaniya &Orikhinal)
    {
        Smiya = Orikhinal.Smiya;
        Lkniya = Orikhinal.Lkniya;
        Counter_Tartib_lwilada = Orikhinal.Counter_Tartib_lwilada;
        Tartib_lwilada = Orikhinal.Tartib_lwilada;
        Tarikh_Lizdiyad = Orikhinal.Tarikh_Lizdiyad;
    }
};

int main()
{
    Lhala_Lmadaniya dyal_omar("Omar", "Makran", 25);
    Lhala_Lmadaniya dyal_amine("Amine", "Mammazal", 22);
    Lhala_Lmadaniya dyal_rida("Rida", "Rouali", 22);
    
    Lhala_Lmadaniya dyal_1337(dyal_omar);
    return (0);
}