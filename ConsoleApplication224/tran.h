#include<iostream>
#include <stdio.h>
#include<qmgr.h>
#include<string>
#include<map>
#include<sac.h>
#include<OAIdl.h>
#include<algorithm>
#include<cmath>
using namespace std;

string trans(string key, string plainText)
{
	int i, j, k, n = 0, matrixLen, verticalLength;
	char  tempChar;
	char matrix[10][10];
	string out;

	matrixLen = (key.length());
	for (i = 0; i<matrixLen; i++)
	{
		for (j = 0; j<matrixLen; j++)
		{
			if (plainText[n] == '\0')
			{
				break;
			}
			matrix[i][j] = plainText[n++];
		}
	}
	verticalLength = matrixLen - (((matrixLen*matrixLen) - (plainText.length())) / matrixLen);
	j = matrixLen - ((matrixLen*verticalLength) - (plainText.length()));
	n = 'z' - (matrixLen - j) + 1;  //First character of filler

	for (; j<matrixLen; j++)
	{
		matrix[verticalLength - 1][j] = n++;
	}

	//Print Matrix
	printf("\n");
	for (i = 0; i<matrixLen; i++)
	{
		printf("%c ", key[i]);
	}
	printf("\n\n");
	for (i = 0; i<verticalLength; i++)
	{
		for (j = 0; j<matrixLen; j++)
		{
			printf("%c ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\n\nCipher Text : ");
	tempChar = '1';

	for (i = 0; i<matrixLen; i++)
	{
		for (j = 0; j<matrixLen; j++)
		{
			if (key[j] == tempChar)
			{
				tempChar++;
				for (k = 0; k<verticalLength; k++)
				{
					out += matrix[k][j];
				}
			}
		}
	}
	cout << out << endl;
	return out;
}