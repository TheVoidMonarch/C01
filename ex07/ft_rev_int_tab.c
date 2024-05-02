#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int Link, Zelda, Vaati;

    Link = 0;
    Zelda = size - 1;
    while (Link < Zelda)
    {
        Vaati = tab[Link];
        tab[Link] = tab[Zelda];
        tab[Zelda] = Vaati;
        Link++;
        Zelda--;
    }
}

int main()
{
    int tab[] = {21, 9, 19, 97, 13, 12};
    int size = sizeof(tab) / sizeof(tab[0]);
    ft_rev_int_tab(tab, size);

    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
