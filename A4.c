#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct	Weather
{
	char	location;	//will	be	S	or	G
	int	daynum;
	double	temp;
	double	precip;
};

void PrintStruct(/*pointerLocation,*/double averageTemp, double totalPecip, char town[]);

//int * FindPointerFile(**Add Paramaters**);

//double FindAverageTemp(int tempList[], length);

//double FindTotalPrecip(int precipList[], length);

int main(int argc, char* argv[])
{
    char emptyString[5000] = "";
	FILE* inputText = fopen(argv[1], "r");
	scanf(inputText, "%s", &emptyString);
	//getchar()
	printf("\n\n%s\n\n", emptyString);
	//int* pointerLocation = FindPointerFile();
	//double averageTemp = FindAverageTemp();
	//double totalPecip = FindTotalPrecip();
	double averageTemp = 3.00;
	double totalPecip = 7.00;
	char town1[50] = "Guelph";
	char town2[50] = "Saskatoon";
	PrintStruct(averageTemp, totalPecip, town1);
	PrintStruct(averageTemp, totalPecip, town2);
	fclose(inputText);
	return 0;
}

void PrintStruct(/*pointerLocation,*/double averageTemp, double totalPecip, char town[])
{
	int i;
	printf("\n");
	for (i = 0; i < strlen(town);i++)
	{
		printf("*");	
	}
	printf("\n%s\n", town);
	for (i = 0; i < strlen(town);i++)
	{
		printf("*");	
	}
	printf("\nAVG TEMP: %lf\n", averageTemp);
	printf("TOTAL PRECIP: %lf\n", totalPecip);
	
}

void parseLine(char toParse[], struct Weather * toLoad)
{
    char * theToken;
    theToken = strtok(toParse, ",");
    toLoad->location = theToken[0];
    theToken = strtok(NULL, ",");
    toLoad->daynum = atoi(theToken);
    theToken = strtok(NULL, ",");
    if(theToken != NULL)
    {
        toLoad->temp = atof(theToken);
    }
    else
    {
        toLoad->temp = -400;
    }
    theToken = strtok(NULL, ",");
    if(theToken != NULL)
    {
        toLoad->precip = atof(theToken);
    }
    else
    {
        toLoad->precip = -1.0;
    }
}

double FindAverageTemp(double tempList[], length)
{
	double currentTotal = 0;
	for (int i = 0; i < length; i++)
	{
		currentTotal += tempList[i]; 
	}
	return currentTotal;
}

double FindTotalPrecip(double precipList[], length)
{
	double currentTotal = 0;
	for (int i = 0; i < length; i++)
	{
		currentTotal += tempList[i];
	}
	return (currentTotal / length);
	if ()
	{
		
	}
}