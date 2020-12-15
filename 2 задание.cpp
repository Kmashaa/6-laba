#include <iostream>
#include <cstring>

using namespace std;

bool let(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int main()
{
    char text[1000];
    cin.getline(text, 1000);
    int n = strlen(text);
    char words[100][100];
    int words_size = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || !let(text[i - 1])) && let(text[i]))
        {
            char word[50];
            for (int j = 0; j < 50; j++) word[j] = 0;
            int word_size = 0;

            for (; i < n; i++)
            {
                word[word_size++] = text[i];
                if (i == n - 1 || !let(text[i + 1]))
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
    char* ans[1000];
    int ans_size = 0;
    for (int i = 0; i < words_size; i++)
    {
        bool ok = true;
        for (int j = 0; j < ans_size; j++)
        {
            if (!strcmp(words[i], ans[j]))
            {
                ok = false;
                break;
            }
        }
        if (ok) ans[ans_size++] = words[i];
    }
    if (ans_size == 0) cout << "No words";
    else cout << "There are " << ans_size << " unique word(s) : " << endl;

    for (int i = 0; i < ans_size; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}