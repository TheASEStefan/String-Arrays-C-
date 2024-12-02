#include <iostream>
#include <iomanip>
#include <cstring>
#define len 256

using namespace std;

char s[len];
char s2[len];
char sep[] = " ";
char mat[len][len / 4];
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


    /// 5) Sa se afiseze toate sufixele cuvantului citit DAR de sus in jos, practic cum am facut la clasa
    /**
    //// aron
    ///  0123
    ///  n -> 3
    ///  on -> 23
    ///  ron -> 123
    ///  aron -> 0123
    for (int i = strlen(s) - 1; i >= 0; i --)
    {
        for (int j = i; j <= strlen(s); j ++)
        {
            cout << s[j];
        }
        cout << '\n';
    }
    */

    /// 6) Sa se afiseze cuvantul de lungime maxima din sir.
    /**
    int maxi = strlen(p); /// Presupunem primul cuvant ca fiind de lungime maxima
    int ind = 1;
    while (p)
    {
        strcpy(mat[ind++], p);
        int strmax = strlen(p);
        maxi = max(maxi, strmax);
        p = strtok(NULL, sep);
    }

    for (int i = 1; i <= ind; i ++)
    {
        if (strlen(mat[i]) == maxi)
        {
            cout << mat[i] << " ";
        }
    }
    */

    /// 7) Construieste un nou sir doar cu cuvintele care incep cu vocala
    /**
    while (p)
    {
        if (strchr("aeiou", p[0]) != NULL)
        {
            strcat(s2, p);
            strcat(s2, " ");
        }
        p = strtok(NULL, sep);
    }
    s2[strlen(s2)] = '\0';
    cout << s2;
    */

    /// 8) Afiseaza doar cuvintele palindrome din sir
    /**
    while (p)
    {
        bool gasit = true;
        int lun = strlen(p) - 1;
        for (int i = 0; p[i]; i ++, lun --)
        {
            if (p[i] != p[lun])
            {
                gasit = false;
            }
        }

        if (gasit)
            cout << p << " ";

        p = strtok(NULL, sep);
    }
    */

    /// 9) Afiseaza cuvintele din sir care contin in ele ultimul cuvant din sir ( IN AFARA DE ULTIMUL CUVANT EVIDENT )
    /**
    int ind = 1;
    while (p)
    {
        strcpy(mat[ind++], p);
        strcpy(s2, p);
        p = strtok(NULL, sep);
    }

    for (int i = 1; i < ind - 1; i ++)
    {
        if (strstr(mat[i], s2) != NULL)
        {
            cout << mat[i] << " ";
        }
    }
    */

    /// 10) Inverseaza literele cuvintelor care se termina cu o vocala si concateneaza-le intr-un nou sir
    /**
    while (p)
    {
        if (strchr("aeiou", p[strlen(p) - 1]) != NULL)
        {
            int lunp = strlen(p);
            for (int j = 0; j <= (lunp - 1) / 2; j ++)
            {
                char aux = p[j]; /// Interschimbam cele doua caractere
                p[j] = p[lunp - j - 1];
                p[lunp - j - 1] = aux;
            }
            strcat(s2, p);
            strcat(s2, " ");
        }
        p = strtok(NULL, sep);
    }
    s2[strlen(s2)] = '\0';
    cout << s2;
    */






    return 0;
}
