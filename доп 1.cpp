#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "vvedite stroku:";
	getline(cin, s);
		
		for (int i = 1; i<(int)size(s); i++)
		{
			for (i = 1; i < (int)size(s); i++)
			{
				if (((s[i - 1] == 'c') || (s[i - 1] == 'C')) && ((s[i] == 'e') || (s[i] == 'i') || (s[i] == 'y')))
				{
					if (s[i - 1] == 'c') { s[i - 1] = 's'; }
					else { s[i - 1] = 'S'; }

				}
			
			else {
			if (s[i - 1] == 'c') { s[i - 1] = 'k'; }
			else if (s[i - 1] == 'C') { s[i - 1] = 'K'; }
			}}
			for (i = 1; i < (int)size(s); i++)
			{
				if ((s[i - 1] == 'q' || s[i - 1] == 'Q') && (s[i] == 'u')) { s[i] = 'v'; }
			}
			
			for (i = 1; i < (int)size(s); i++)
			{
			  if (s[i - 1] == 'w') { s[i - 1] = 'v'; }
			  if (s[i - 1] == 'W') { s[i - 1] = 'V'; }
			  if (s[i - 1] == 'Q') { s[i - 1] = 'K'; }
		      if (s[i - 1] == 'q') { s[i - 1] = 'k'; }
			  if (s[i - 1] == 'x') { s[i - 1] = 'k'; s.insert(i, "s"); }
			  if (s[i - 1] == 'X') { s[i - 1] = 'K'; s.insert(i, "s"); }
			  if (s[i - 1] == 'p' && s[i] == 'h') { s[i - 1] = 'f'; s.erase(i, 1);}
			  if ((s[i - 1] == 'P') && (s[i] == 'h')) { s[i - 1] = 'F'; s.erase(i, 1); } 
			  if ((s[i - 1] == 'o') && ((s[i] == 'O') || (s[i] == 'o'))) { s[i - 1] = 'u'; s.erase(i, 1); } 
			  if ((s[i - 1] == 'O') && ((s[i] == 'O') || (s[i] == 'o'))) { s[i - 1] = 'U'; s.erase(i, 1); } 
			  if ((s[i - 1] == 'e') && ((s[i] == 'e') || (s[i] == 'E'))) { s[i - 1] = 'i'; s.erase(i, 1); } 
			  if ((s[i - 1] == 'E') && ((s[i] == 'e') || (s[i] == 'E'))) { s[i - 1] = 'I'; s.erase(i, 1); } 
			  if ((s[i - 1] == 't') && ((s[i] == 'H') || (s[i] == 'h'))) { s[i - 1] = 'z'; s.erase(i, 1); } 
			  if ((s[i - 1] == 'T') && ((s[i] == 'H') || (s[i] == 'h'))) { s[i - 1] = 'Z'; s.erase(i, 1); } 
			  
			}
			for (i = 1; i < (int)size(s)-1; i++) 
			{
				{
					if ((s[i - 1] == 'Y') && (s[i] == 'o') && (s[i + 1] == 'u')) {
						s.erase(i-1, 2); 
					}
					if ((s[i - 1] == 'y') && (s[i] == 'o') && (s[i + 1] == 'u')) {
						s.erase(i-1, 2);
					}
				}
			}
			for (i = 1; i < (int)size(s); i++)
			{
				if (s[i - 1] == s[i]) { s.erase(i, 1); }
			}
			
		}
		
		cout << s;
		
	
}