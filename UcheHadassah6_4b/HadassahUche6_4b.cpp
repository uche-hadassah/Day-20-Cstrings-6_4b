/*Name:Uche Hadassah
This program encrypts and decrypts a string using functions*/#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
//Function prototypes
void encrypt(char[]);
void decrypt(char[]);
int main()
{
	char word[MAX];
	int i;
	cout << "\nEnter the word you wish to encrypt:";
	cin.getline(word, MAX);
	
	encrypt(word);
	cout << "\nThe word encrypted is:" << word;
	decrypt(word);
	cout << "\nThe word decrypted is:" << word;
}

//Encrypts the word or sentence
void encrypt(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++)//Loops through the sentence or word
	{
		if (str[i] == ' ')
		{
			str[i] = '*';
		}
		else
		{
			str[i]++;
			if (str[i] > 'z')
			{
				str[i] = 'a';//Goes back to a if its > z
			}
		}
	}
}

//Does the reverse of the encrypt function
void decrypt(char str[])
{
	int j;
	for (j = 0; str[j] != '\0'; j++)//Loops through the sentence or word
	{
		if (str[j] == '*')
		{
			str[j] = ' ';
		}
		else
		{
			str[j]--;
		}
	}
}
