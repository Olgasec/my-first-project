#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int number, guess, counter = 0;
srand(time(NULL));
number = rand() % 50 + 1;
printf("\n\n Έχω έναν αριθμό μεταξύ 1 και 50.");
printf("\n Μπορείς να τον μαντέψεις?");
do
{
printf("\n Δώσε μου τι μαντεύεις:");
scanf("%d", &guess);
counter++;
if (guess == number)
printf("\n\n Σωστά! Αυτός είναι ο αριθμός!\n\n");
else if (guess > number)
printf("\n\n Πολύ μεγάλος. Προσπάθησε πάλι.");
else
printf("\n\n Πολύ μικρός. Προσπάθησε πάλι.");
} while (guess != number);
printf("\n\nXρειάστηκες %d προσπάθειες !", counter);
return 0;
}
