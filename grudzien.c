#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// GRUDZIEN

/*
// 2.1. Utworzyć osobną metodę bool IsSorted(int *, int) realizującą zadanie 1.3
// (UWAGA - w języku C niedostępny jest typ bool z wartościami true i false, zamiast niego należy użyć int
// i wartości 1 i 0)

int isSorted(int *tab, int a)
{
    int i;
    for (i = 0; i < a - 1; i++)
    {
        if (tab[i] > tab[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

// 2.2. Utworzyć metodę void printBackwards(int *a, int s) służącą do wypisania tablicy OD KOŃCA

void printBackwards(int *tab, int s)
{
    for (int i = s; i > -1; i--) {
        printf("%d ", tab[i]);
    }
}

// 2.3 Utworzyć metodę printDots(int *a, int s) wyświetlającą w nowych liniach tyle kropek, ile znajduje się w danym
//elemencie tablicy. Dla przykładu, dla tablicy:

void printDots(int *tab, int s)
{
    for (int i = 0; i < s; i++){
        for (int j = 0; j < tab[i]; j++) {
            printf(".");
        }
        printf("\n");
    }
}

// 2.4. Utworzyć metodę int Sum(int *a, int s) liczącą sumę elementów tablicy.

void Sum(int *tab, int s){
    int sum;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < tab[i]; j++) {
            sum += 1;
        }
    }
    printf("%d", sum);
}

// 1.1. Utworzyć 5-cio elementową tablicę typu int. Pobrać od użytkownika 5 elementów i dodać je do tablicy.
// Następnie wyświetlić największą liczbę z tablicy (algorytm do samodzielnej implementacji).

int main() {
    int a = 5;
    int tablica[a];
    for (int i = 0; i < 5; i) {
        scanf("%d", &tablica[i]);
        i++;
    }
    for (int j = 0; j < 5; ++j) {
        if (tablica[j]>tablica[j+1]) {
            printf("%d \n", tablica[j]);
            break;
        } else continue;
    };

    // 1.2. Wyświetlić w pętli tablice z zadania 1.1 od początku i od końca (dwie pętle)

    for (int k = 0; k < 5; ++k) {
        printf("%d ", tablica[k]);
    }

    printf("\n");

    for (int l = 4; l > -1; --l) {
        printf("%d ", tablica[l]);
    }

    // 1.3 Napisać algorytm sprawdzający, czy tablica jest posortowana w kolejności niemalejącej

    printf("\n");

    for (int m = 0; m < 5; ++m) {
        if (tablica[m+1]>tablica[m]) {
            printf("Sortowanie niemalejące");
            break;
        } else {
            printf("Sortowanie malejące");
            break;
        }
    }
    printf("\n");

    // 2.1 Implementacja

    if (isSorted(tablica, 5)){
        printf("Sortowanie niemalejące");
    }
    printf("\n");

    // 2.2 Implementacja

    printBackwards(tablica, 4);
    printf("\n");

    // 2.3 Implementacja

    printDots(tablica, 5);

    // 2.4 Implementacja

    Sum(tablica, 5);
    printf("\n");

    // 2.5. Zaimplementować algorytm sortowania bąbelkowego (w funkcji main(), nie ma potrzeby
    // tworzenia dodatkowe funkcji). Algorytm powinien posortować dowolnie dużą tablicę w kolejności
    // niemalejącej.

    int przechowalnia;
    for (int n = 0; n < a; n++){
        for (int i = 0; i < a - i; i++) {
            if (tablica[i]>tablica[i+1]){
                przechowalnia = tablica[i];
                tablica[i] = tablica[i+1];
                tablica[i+1] = przechowalnia;
            }
        }
        printf("%d", tablica[n]);
    }

    return 0;
}
*/


/*

// 3.1. Napisać metodę int getLength(char *str) , w której WŁASNORECZNIE (nie wolno korzystać z metody strlen() )
//przeliczony zostanie rozmiar łańcucha (bez null-terminatora). Dla przykładu dla „Hello!" wynik powinien wynosić 6.

int getLenght(char *str){
    int lenght = 0;
        while (str[lenght] != '\0'){
            lenght++;
        }
    return lenght;
}

// 3.2. Napisać metodę void Reverse (char *str) , która wypisze łańcuch znaków od końca (zakaz używania strlen,
// można uzyć metodę z zadania 3.1.)

void Reverse(char *str){
    char rev[(int) getLenght];
    int kon = (int) getLenght - 1;
    for (int i = 0; i < (int) getLenght; i++) {
        rev[i] = str[kon];
        kon --;
    }
    rev[0] = '\0';
    printf("%s", rev);
}

// 3.3. Napisać metodę bool containsDigits(char * str), która zwróci informację, czy w danym stringu znajduje się
// jakakolwiek cyfra. Dla przykładu : „asdfgzxcv" -> false, „asdf5asdf" -> true

int continsDigits(char *str){
    for (int i = 0; i < getLenght(str); ++i) {
        if (isdigit(str[i])){
            return 1;
        }
    }
    return 0;
}


int main(){
    char ala[4] = "el2";
    printf("%d", getLenght(ala));
    //Reverse(ala);
    printf("\n");
    if (continsDigits(ala) == 1){
        printf("True");
    } else {
        printf("False");
    }
    printf("\n");

    // 3.4. Pobrać od użytkownika łańcuch znaków (dowolna metoda). Przekazać go do każdej z metod z 3. części zadań.
    int dlugosc_nowy;
    scanf("%d", &dlugosc_nowy);
    char nowy[dlugosc_nowy];
    printf("Podaj string: ");
    scanf("%s", nowy);
    printf("%d", getLenght(nowy));
    //Reverse(nowy);
    printf("\n");
    if (continsDigits(nowy) == 1){
        printf("True");
    } else {
        printf("False");
    }
    printf("\n");
    return 0;
}
*/
