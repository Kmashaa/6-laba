#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string n="";
	
	

	cout << "vvedite stroku:" << endl;
	
	
	getline(cin, s);
	
		for (int i = 0; i < (int)size(s); i++)
		{
			for (int j = i + 1; j < (int)size(s); j++)
			{
				if (s[i] == s[j]) { s[j] = '0'; }
			}
		}
		for (int i = 0; i < (int)size(s); i++) { if (s[i] != '0') { n += s[i]; } }
	
	
	cout<<n;
}
