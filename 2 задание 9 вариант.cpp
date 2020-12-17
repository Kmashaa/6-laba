#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string str;
	cout << "enter str:" << endl;
	int countVowels = 0;
	int countConsonants = 0;

	getline(cin, str);
	for (int i = 0; i < (int)size(str); i++)
	{
		if(str[i]=='A'|| str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'U' || str[i] == 'u' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o')
		{
			countVowels++;
		}
		else if(((str[i] > char(64) && str[i]<char(91)) || (str[i] > char(96) && str[i]<char(123)))&& (str[i] != 'A' || str[i] != 'a' || str[i] != 'E' || str[i] != 'e' || str[i] != 'Y' || str[i] != 'y' || str[i] != 'U' || str[i] != 'u' || str[i] != 'I' || str[i] != 'i' || str[i] != 'O' || str[i] != 'o'))
		{ 
			countConsonants++; 
		}
	}
	cout << countVowels << endl;
	cout << countConsonants << endl;
	if (countVowels > countConsonants) { cout << "There are more vowels than consonants"; }
	else if(countVowels < countConsonants) { cout << "There are more onsonants than vowels"; }
	else if (countVowels == countConsonants) { cout << "There are as many vowels as consonants"; }
}