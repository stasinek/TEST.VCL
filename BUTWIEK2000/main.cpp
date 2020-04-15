#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int cud = 1015;
int butmin = 1,butmax = 100, butl = butmax, buth = butmin;
int rokmin = cud + 1000 - 100, rokmax = cud + 1000, rokl = rokmax, rokh = rokmin;
int numerek, wiek;

for (int but = butmin; but < butmax; but++)
for (int rok = rokmin; rok < rokmax; rok++) 
	{
	 numerek = ((5 * but + 50) * 20 + cud) - rok;
	 wiek = rokmax - rok;
	 	// printf("but %02d, wiek %d\n, numerek %04d", but, rok, numerek, wiek);
	 if ((numerek % 100)  == wiek)
	 if ((numerek - wiek) == (but * 100))
	 	{
	 	 printf("DZIALA DLA: but %02d, rok %d, wiek %02d, numerek %04d\n", but, rok, wiek, numerek);
	 	 if (rok < rokl) rokl = rok;
	 	 if (rok > rokh) rokh = rok;
	 	 if (but < butl) butl = but;
	 	 if (rok > buth) buth = but;
	 	}
	}
	printf("WARUNKI BRZEGOWE: but od %02d do %02d, rok od %d do %d\n", butl, buth, rokl, rokh);
	
	system("pause");

	return 0;
}
