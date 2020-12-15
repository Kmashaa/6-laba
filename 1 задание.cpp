#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int z=0,c=0;
	int t=0;
	int k = 0;
	char s[81];
	int m = 0;
	cout << "vvedite stroku:";
	gets_s(s);
	int n = strlen(s);
	for (int i=0;i<=n;i++) 
	{
		if (s[i] != ' ') { m++;  }							
		else { t++;  if (m > k) { k = m; z = t; c = i - m + 1; } m = 0; }
	}
	cout << "poriadkoviy nomer:" << z << endl;
	cout << "nomer pozicii:" << c << endl;
		
}