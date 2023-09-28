//Diviseur binaire
#include <stdio.h>

void main(void)
{
	int ValDec = 0;
	int ValDec_initial= 0;
	int Quotient= 0;
	int Reste= 0;

	//Demander une valeur comprise entre 0 et 255
	printf_s("Entrez une valeur decimale comprise entre 0 et 255 : ");
	scanf_s("%d", & ValDec);
	ValDec_initial = ValDec;

	//Verifier si la valeur est correcte
	if (ValDec < 0 || ValDec > 255)
	{
		printf_s("La valeur decimal doit etre comprise 0 et 255");
	}
	else
	{
		//Tant que ValDec est différent de zéro
		while (ValDec != 0)
		{
			//Calculer le quotient et le reste de la division par 2
			Quotient = (ValDec / 2);
			Reste = (ValDec % 2);

			//Mettre à jour ValDec avec le quotient pour la prochaine itération
			ValDec = Quotient;
		}

		//Afficher les étapes de la conversion
		printf_s("%d, :2 = %d, R = %d\n", ValDec_initial, ValDec, Reste);
		ValDec_initial = ValDec;
	}
}