#define N 3
struct country {
char name[20]; 
int population; 
char capital[20]; 
};


int main()
{
int i, max_index;
struct country C[N];
for (i=0; i<N; i++) {
printf("\nΔώσε όνομα %dης χώρας, πληθυσμό και πρωτεύουσα: ", i+1);
scanf("%s%d%s", &C[i].name, &C[i].population, &C[i].capital);
}
max_index=0;
for (i=1; i<N; i++)
if (C[i].population>C[max_index].population)
max_index=i;
printf("\nΤα στοιχεία της χώρας με τον μεγαλύτερο πληθυσμό είναι:\n");
printf("Όνομα: %s\nΠληθυσμός: %d\nΠρωτεύουσα: %s\n", C[max_index].name,
C[max_index].population, C[max_index].capital);
return 0;
}#define N 3
struct country {
char name[20]; 
int population; 
char capital[20]; 
};


