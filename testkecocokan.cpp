#include<stdio.h>

int main() {
	int tanggal_lahir_kamu, tanggal_lahir_dia, cinta;
	
	printf ("masukkan tanggal lahir kamu: ");
	scanf ("%d", &tanggal_lahir_kamu);
	printf ("masukkan tanggal lahir dia: ");
	scanf ("%d", &tanggal_lahir_dia);
		
	cinta = (tanggal_lahir_kamu + tanggal_lahir_dia) %4;
	
	if (cinta == 0)
		printf ("cinta dia kepadamu 100%\n");
	else if (cinta == 1)
		printf ("cinta dia kepadamu 75%\n");
	else if (cinta == 2)
		printf ("cinta dia kepadamu 50%\n");
	else
		printf ("putus ae sam");
		
	return (0);		
}
