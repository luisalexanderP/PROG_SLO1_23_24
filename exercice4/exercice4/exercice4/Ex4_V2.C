//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 


int main(void)
{
	// Déclaration cas A
	short A1 = 400;
	short A2 = 500;
	short ResA1;
	long ResA2;

	ResA1 = A1 * A2;
	ResA2 = A1 * A2;
	printf("Traitement cas A \n");
	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n", A1, A2, ResA1);
	printf("ResA2 = A1 * A2 soit  %d * %d = %d \n", A1,A2,ResA2 );

	// Déclaration cas B

	uint16_t ValB = 0x1234;    // ou unsigned short --> Type 16bits non signé 
	uint8_t HighValB, LowValB; // ou unsigned char  --> Type 8bits non signé 
	HighValB = ValB >> 8;
	LowValB = ValB ; 
	printf ("Traitement cas B \n");
	printf ("ValB  %4x  % HighValB = %2x LowValB = %2x \n", ValB, HighValB, LowValB );

	// Déclaration cas C

	unsigned short C1 = 0x5555;
	unsigned short C2 = 0x0F0F;
	unsigned short ResC;

	printf("Traitement cas C \n");

	ResC = C1 | C2;
	printf("ResC = %04X  OU %04X =  %04X \n", C1, C2, ResC);

	ResC = C1 & C2;
	printf ("ResC = %04X  ET %04X =  %04X \n",C1, C2, ResC);

	// Déclaration cas D
	short D1 = 1325;
	short D2 = 7;
	short ResD1, ResD2; 
	
	printf("Traitement cas D \n");
	
	ResD1 = D1 / D2; // Fait la division
	ResD2 = D1 % D2; // modulo --> prend le reste
	printf ("Division de %4d par %4d = %4d Reste = %4d \n", D1, D2, ResD1, ResD2);

  return(0);
}
