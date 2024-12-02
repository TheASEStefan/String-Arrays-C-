#include <iostream>
#include <iomanip>
#include <cstring>
#define len 256

using namespace std;

char s[len];
char s2[len];
char sep[] = " ";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin.clear();
    cout.clear();
    cin.get(s, len);
    char *p = strtok(s, sep);
    /// 1) Sa se afiseze doar cuvintele care contin vocale
    /**
    while (p)
    {
        int j = 0;
        bool hasVoc = false;
        while (p[j])
        {
            if (strchr("aeiou", p[j]) != NULL)
            {
                hasVoc = true;
            }
            j++;
        }

        if (hasVoc)
        {
            cout << p << " ";
        }
        p = strtok(NULL, sep);
    }
    */

    /// 2) Sa se elimine toate vocalele din sir
    /**
    while (p)
    {
        for (int j = 0; p[j]; j ++)
        {
            if (strchr("aeiou", p[j]) != NULL)
            {
                strcpy(p + j, p + j + 1);
            }
        }
        strcat(s2, p);
        strcat(s2, " ");
        p = strtok(NULL, sep);
    }
    s2[strlen(s2)] = '\0';
    cout << s2 << " ";
    */

    /// 3) Sa se afiseze toate prefixele cuvantului citit
    /**
    strcpy(s2, s); /// Luam o copie sirului initial pentru a nu-l strica.
    while (strlen(s2) > 0)
    {
        cout << s2 << '\n';
        int temp = strlen(s2) - 1;
        s2[temp] = '\0';
    }
    */


    /// 4) Sa se afiseze toate sufixele cuvantului citit
    /**
    strcpy(s2, s); /// Aceeasi chestie cu copia
    while (strlen(s2) > 0) /// Iar acelasi truc
    {
        cout << s2 << '\n';
        strcpy(s2, s2 + 1);
    }
    */




    return 0;
}
