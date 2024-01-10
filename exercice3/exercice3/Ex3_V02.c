//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: Exercice3
// Date de cr�ation 	: xx.xx.2016
// Date de modification : 14.09.2017
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// D�claration globales des constantes
const int16_t VMAX = 10000;  // Constante de 16 bits sign�e, ou :   #define VMAX 10000
const int16_t VMIN = -10000; // Constante de 16 bits sign�e, ou :   #define VMIN 10000
const int64_t PI = 3.14159;  // Constante r�el 64 bits,      ou :   #define PI 3.14159

int main(void)
{
	// D�clarations locales des variables
	int64_t surface = 5;
	int64_t rayon = 3;
	char lettre = 98;
	
	enum e_TypeFigure {cercle, ellipse, carre, rectangle, triangle};
	// Affectations
	
	int16_t tension = VMAX;        // 16 bits sign� prenant la valuer VMAX
	uint32_t bigVal = 0x12345678;   // 32 bits non sign� prenant la valeur h�xad�ciaml 12345678 

    
	// Affichages pour controle
	printf ("Tension = %d \n", tension );
 	printf ("BigVal = %lx \n", bigVal );
	printf ("Lettre  = %c \n", lettre );
	printf ("Figure = %d \n",triangle);
	printf ("Rayon = %lf Surface = %lf \n", (float)rayon, (float) surface );

  return(0);
}
