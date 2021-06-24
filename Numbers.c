// ------------------------------------------------------------------------------------------
// Name: Neina Cichon
// Abstract: Numbers
// Date: 2020-10-10
// ------------------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Includes – built-in libraries of functions
// --------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

// --------------------------------------------------------------------------------
// Constants
// --------------------------------------------------------------------------------
const long intARRAY_SIZE = 5;

// --------------------------------------------------------------------------------
// User Defined Types (UDT)
// --------------------------------------------------------------------------------

// --------------------------------------------------------------------------------
// Prototypes
// --------------------------------------------------------------------------------
void InitializeArray(long alngValues[]);
void PopulateArray(long alngValues[]);
void PrintArray(long alngValues[]);
void CalculateTotal(long alngValues[]);
void CalculateAverage(long alngValues[]);
void MaximumValue(long alngValues[]);
void TotalEvenIndex(long alngValues[]);
void TotalEvenNumbers(long alngValues[]);
void StandardDeviation(long alngValues[]);

// --------------------------------------------------------------------------------
// Name: main
// Abstract: Program Start
// --------------------------------------------------------------------------------
void main()
{
	// 1 – Create Array
	long alngValues[5];			// Can't use constant in declaration

	// 2 – Initialize Array
	InitializeArray(alngValues);

	// 3 – Populate Array
	PopulateArray(alngValues);

	// 4 – Print Numbers in Array
	PrintArray(alngValues);

	// 5 – Calculate Array Total/ Print
	CalculateTotal(alngValues);

	// 6 – Calculate Array Average/ Print
	CalculateAverage(alngValues);

	// 7 – Maximum Array Value/ Print
	MaximumValue(alngValues);
	
	// 8 – Add all numbers at even index location (start at 0)/ Print
	TotalEvenIndex(alngValues);

	// 9 – Add all even values in array/ Print
	TotalEvenNumbers(alngValues);

	//Extra Credit - Calculate Standard Deviation /Print Result
	StandardDeviation(alngValues);

	system("pause");
}

// --------------------------------------------------------------------------------
// Name: InitializeArray
// Abstract: Set all the array element values to zero
// --------------------------------------------------------------------------------

void InitializeArray(long alngValues[])
{
	long lngIndex = 0;

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		alngValues[lngIndex] = 0;
	}

}

// --------------------------------------------------------------------------------
// Name: PopulateArray
// Abstract: Read in a value and store in array for every element
// --------------------------------------------------------------------------------

void PopulateArray(long alngValues[])
{
	long lngIndex = 0;

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		printf("Enter value %ld: \n", lngIndex + 1);
		scanf_s("%ld", &alngValues[lngIndex]);
	}

}

// --------------------------------------------------------------------------------
// Name: PrintArray
// Abstract: Print out elements of the array
// --------------------------------------------------------------------------------

void PrintArray(long alngValues[])
{
	long lngIndex = 0;

	printf("\n");
	printf("---- Array Values ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		printf("Value %2ld = %ld\n", lngIndex + 1, alngValues[lngIndex]);
	}
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: CalculateTotal
// Abstract: Calculate Array Total and Print result
// --------------------------------------------------------------------------------
void CalculateTotal(long alngValues[])
{
	long lngIndex = 0;
	long lngTotal = 0;

	printf("\n");
	printf("---- Sum of Array Values ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		lngTotal += alngValues[lngIndex];
	}
	printf("Sum = %ld\n", lngTotal);
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: CalculateAverage
// Abstract: Calculate Array Average and Print result
// --------------------------------------------------------------------------------
void CalculateAverage(long alngValues[])
{
	long lngIndex = 0;
	long lngTotal = 0;
	long lngAverage = 0;

	printf("\n");
	printf("---- Sum of Array Values ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		lngTotal += alngValues[lngIndex];
	}
	lngAverage = lngTotal / intARRAY_SIZE;
	printf("Average = %ld\n", lngAverage);
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: MaximumValue
// Abstract: Find maximum value in Array and Print result
// --------------------------------------------------------------------------------
void MaximumValue(long alngValues[])
{
	long lngMaximum = alngValues[0];
	long lngIndex = 0;

	printf("\n");
	printf("---- Maximum Value in Array ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		if (alngValues[lngIndex] > lngMaximum)
		{
			lngMaximum = alngValues[lngIndex];
		}
	}

	printf("Maximum Value = %ld\n", lngMaximum);
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: TotalEvenIndex
// Abstract: Add all the numbers at every even index and Print result 
// --------------------------------------------------------------------------------
void TotalEvenIndex(long alngValues[])
{
	long lngTotal = 0;
	long lngIndex = 0;

	printf("\n");
	printf("---- Sum of Values at Even Indexes in Array ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 2)
	{
		lngTotal += alngValues[lngIndex];
	}

	printf("Sum = %ld\n", lngTotal);
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: TotalEvenNumbers
// Abstract: Add all the even numbers and Print result 
// --------------------------------------------------------------------------------
void TotalEvenNumbers(long alngValues[])
{
	long lngTotal = 0;
	long lngIndex = 0;

	printf("\n");
	printf("---- Sum of Even Values in Array ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		if (alngValues[lngIndex] % 2 == 0)
		{
			lngTotal += alngValues[lngIndex];
		}
		
	}

	printf("Sum = %ld\n", lngTotal);
	printf("\n");
}

// --------------------------------------------------------------------------------
// Name: StandardDeviation
// Abstract: Calculate Standard Deviation and Print result 
// --------------------------------------------------------------------------------
void StandardDeviation(long alngValues[])
{
	long lngTotal = 0;
	float flMean = 0;
	float flStandardDeviation = 0;
	long lngIndex = 0;
	float flStandardDeviationResult = 0;

	printf("\n");
	printf("----Standard Deviation of Values in Array ----\n");

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		lngTotal += alngValues[lngIndex];
	}

	flMean = lngTotal / intARRAY_SIZE;

	for (lngIndex = 0; lngIndex < intARRAY_SIZE; lngIndex += 1)
	{
		flStandardDeviation += pow(alngValues[lngIndex] - flMean, 2);
	}

	flStandardDeviationResult = sqrt(flStandardDeviation / intARRAY_SIZE);

	printf("Standard Deviation = %f\n", flStandardDeviationResult);
	printf("\n");
}