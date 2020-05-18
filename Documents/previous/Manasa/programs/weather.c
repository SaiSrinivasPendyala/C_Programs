//Finding the probability that it may rain tomorrow at that place or not.
#include <stdio.h>
typedef struct 
{
	float season;
	float location;
	float pressure;
	float humidity;
	float temperature;
}weather;
float main()
{
	weather value;
	float Probability;
	int s,l,p;
	char place[20];
	printf("Enter the place name: ");
	scanf("%s", place);
	printf("Choose the season of the place by entering the corresponding number: \n");
	printf("1.Rainy\n2.Spring\n3.Winter\n4.Summer\n");
	scanf("%d", &s);
	printf("Choose the location of the place by entering the corresponding number: \n");
	printf("1.Tropical forest\n2.Sub-tropical\n3.High altitude\n4.Desert\n");
	scanf("%d", &l);
	printf("Choose the pressure of the place by entering the corresponding number: \n");
	printf("1.Very low\n2.Low\n3.Normal\n4.High\n");
	scanf("%d",&p);
	switch(s)
	{
		case 1: value.season = 5;
		break;
		case 2: value.season = 3;
		break;
		case 3: value.season = 2;
		break;
		case 4: value.season = 1;
		break;
		default: printf("Sorry!invalid number\n");
		break;
	}
	switch(l)
	{
		case 1: value.location = 5;
		break;
		case 2: value.location = 4;
		break;
		case 3: value.location = 2;
		break;
		case 4: value.location = 1;
		break;
		default: printf("Sorry!invalid number\n");
		break;
	}
	switch(p)
	{
		case 1: value.pressure = 5;
		break;
		case 2: value.pressure = 4;
		break;
		case 3: value.pressure = 2;
		break;
		case 4: value.pressure = 1;
		break;
		default: printf("Sorry!invalid number\n");
		break; 
	}
	printf("Enter the percentage of humidity at that place: ");
	scanf("%f", &value.humidity);
	printf("Enter the temperature at that place: ");
	scanf("%f", &value.temperature);
	Probability = (((value.season/5)+(value.temperature/50)+(value.humidity/100)+(value.pressure/5)+(value.location/5))/5)*100;
	printf("The probability that it may rain in %s or not is %.2f.\n", place,Probability);
	return 0;
}
