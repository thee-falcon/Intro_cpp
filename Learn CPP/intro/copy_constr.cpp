/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_constr.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:36:19 by omakran           #+#    #+#             */
/*   Updated: 2024/01/07 20:00:59 by omakran          ###   ########.fr       */
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
        Smiya = smiya; // Omar
        Lkniya = lkniya; // Makran
        Counter_Tartib_lwilada = 1; 
        // alocation
        Tartib_lwilada = new float[Counter_Tartib_lwilada];
        // Fill the array
        Tartib_lwilada[0] = 1;
        Tarikh_Lizdiyad = tarikh; // 25
    }
    // Destructor.
    ~Lhala_Lmadaniya() 
    {
        delete []Tartib_lwilada;
        Tartib_lwilada = nullptr;
    }
    
    // Copy Constructor.
    Lhala_Lmadaniya(const Lhala_Lmadaniya &Original)
    {
        Smiya = Original.Smiya;
        Lkniya = Original.Lkniya;
        Counter_Tartib_lwilada = Original.Counter_Tartib_lwilada;
        Tarikh_Lizdiyad = Original.Tarikh_Lizdiyad;
        // New allocation for the Copy Constructor.
        Tartib_lwilada = new float[Counter_Tartib_lwilada];
        // Copy the data of the Original constructor to 'Copy Constructor'.
        for (int i = 0; i < Counter_Tartib_lwilada; i++)
            Tartib_lwilada[i] = Original.Tartib_lwilada[i];
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