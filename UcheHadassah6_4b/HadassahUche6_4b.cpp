/*b) Re-write the above exercise with functions: Write a function called encrypt which 
takes as a parameter a string and changes it to the encrypted version (as described 
above). Write also a function called decrypt which takes as a parameter a string an 
decrypts the string i.e. restores it to the original. For example decrypting the string s1
containing “dbu” will convert it back to the string “cat”. (i.e. replace ‘d’ with ‘c’, ‘b’
with ‘a’ and so on, thus reversing the coding scheme used for encryption above). 
Write a main program to test both functions.*/#include<iostream>
#include<cstring>
using namespace std;
const int MAX = 100;
//Function prototypes
char encrypt(char[]);
char decrypt(char[]);
int main()
{
	char word[MAX];
	int i;
	cout << "Enter the word you wish to encrypt:";
	cin.getline(word, MAX);
	
	cout << "The word encrypted is:" << encrypt(word);
	cout << endl;
	cout << "The word decrypted is:" << decrypt(word);
	cout << endl;
}

char encrypt(char str[])
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
	return str[i];
}

char decrypt(char str[])
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
	return str[j];
}
