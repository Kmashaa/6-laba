#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char t[1000];
    cin.getline(t, 1000);
    int n = strlen(t);
    char words[100][100];
    int words_size = 0;

    for (int i = 0; i < n; i++)
    { if((i==0 ||!((t[i-1] >= 'A' && t[i-1] <= 'Z') || (t[i-1] >= 'a' && t[i-1] <= 'z')))&& (t[i] >= 'A' && t[i] <= 'Z') || (t[i] >= 'a' && t[i] <= 'z'))
        
        {
            char word[50];
            for (int j = 0; j < 50; j++) word[j] = 0;
            int word_size = 0;

            for (; i < n; i++)
            {
                word[word_size++] = t[i];
                if (i == (n - 1) || !((t[i - 1] >= 'A' && t[i - 1] <= 'Z') || (t[i - 1] >= 'a' && t[i - 1] <= 'z')))
                {
                    break;
                }
            }

            if (word[0] == word[word_size - 1])
            {
                for (int j = 0; j < word_size; j++)
                {
                    words[words_size][j] = word[j];
                }
                words_size++;
            }
        }
    }
    char* a[1000];
    int a_s = 0;
    for (int i = 0; i < words_size; i++)
    {
        bool ok = true;
        for (int j = 0; j < a_s; j++)
        {
            if (!strcmp(words[i], a[j]))
            {
                ok = false;
                break;
            }
        }
        if (ok) a[a_s++] = words[i];
    }
    if (a_s == 0) cout << "No words";
    else cout << "There are " << a_s << " unique word(s) : " << endl;

    for (int i = 0; i < a_s; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}