#include <stdio.h>

void f61()

{
 printf ("Sveiks. kaa Tevi sauc? \t");
}
void f62()
{
 printf ("Kaads ir Tavs vecums?\n");
}
void f63()
{
 printf ("Cik liels Tu esi auguma\n\t? (Augums metros): ");
}

int main()
{
 char vards [21];
 int vecums;
 float augums;

  f61 ();
 ;scanf ("%s", vards);
  f62 ()
 ;scanf ("%d", &vecums);
  f63 ()
 ;scanf ("%f", &augums);
  printf ("Mans Vards ir: %s \n", vards );
  printf ("Esmu: %d gadus jauns %d. gada produkts\n", vecums, 2019-vecums );
  printf ("Garumaa esmu padevies: %.f cm \n", augums*100 );
