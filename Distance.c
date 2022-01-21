#include <stdio.h>

int kmtom();
int mtokm();

int main()
{
	int a;

	printf("Welcome to Distance Conversion\n");
	printf("press 0 for km to m\n");
	printf("press 1 for m to km\n");
	printf(">>");
	scanf("%d", &a);
	if (a == 0)
	{
		kmtom();
	}
	else
	{
		mtokm();
	}
}

int kmtom()
{
	float km;
	float ml;
	printf("KM: ");
	scanf("%f", &km);
	ml = km / 1.609344;
	printf("%fkm = %fm", km, ml);
}

int mtokm()
{
	float km;
	float ml;
	printf("M: ");
	scanf("%f", &ml);
	km = m * 1.609344;
	printf("%fm = %fkm", ml, km);
}