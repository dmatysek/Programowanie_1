#include <stdio.h>

// 1.1. Zadeklarować zmienne typu int, float, char. Przypisać do nich wartość, wyświetlić je na ekran.
/*
int main() {
    int a = 2;
    float b = 2.2;
    char c = 'd';
    printf("%d\n", a);
    printf("%.1lf\n", b);
    printf("%c\n", c);
    return 0;
}
*/

//1.2. Wyświetlić zmienną typu int na ekran. Należy użyć metody printf i konstrukcji %d
/*
int main() {
    int a = 5;
    printf("%d\n", a);
    return 0;
}
*/

//1.3. Pobrać od użytkownika liczbę x. Wyświetlić kwadrat liczby x.
/*
int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a*a);
    return 0;
}
*/

//1.4. Zapoznać się z instrukcjami warunkowymi (if, else if, else oraz switch). Pobrać od używkownika liczbę i wyświetlić informację, czy jest ona: mniejsza, większa, czy równa 0.
/*
int main(){
    int a;
    scanf("%d", &a);
    if (a<0) {
        printf("Twoja liczba jest mniejsza od 0\n");
    } else if (a>0) {
        printf("Twoja liczba jest większa od 0\n");
    } else {
        printf("Twoja liczba jest równa 0\n");
    }
    return 0;
}
*/

//1.5. Pobrać ud użytkownika 3 liczby (x1, x2, x3). Wyświetlić informację, która z tych liczb jest największa.
/*
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c){
        printf("%d", a);
    } else if (b>c && b>a ){
        printf("%d", b);
    } else {
        printf("%d", c);
    }
    return 0;
}
*/

//1.6. Napisać prosty kalkulator. Należy pobrać od użytkownika 2 liczby oraz operator (jeden z czterech: mnożenie, dzielenie, dodawanie, odejmowanie). Wymagane jest utworzenie prostego menu użytkownika. Uwaga - należy pamiętać o ułamkach (1/3 powinno dać 0.33, a nie 0)
/*
int main() {
    int a,b;
    char operator = ' ';
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);
    printf("Podaj operator [+ - * /]: ");
    scanf(" %c", &operator);
    switch (operator){
        case '+':
        {
            printf("Suma: %d", a+b);
            break;
        }
        case '-':
        {
            printf("Różnica: %d", a-b);
            break;
        }
        case '*':
        {
            printf("Iloczyn: %d", a*b);
            break;
        }
        case '/':
        {
            printf("Iloraz: %.2lf", (float) a/b);
            break;
        }
        default:
        {
            printf("Błędny operator");
            break;
        }
    }
    return 0;
}
 */

//2.1. Zapoznać się z pętlą while. Pętla ta służy do wielokrotnego wykonania fragmentu kodu przez NIEZNANĄ Z GÓRY ilość razy. Pętla wykonuje się zawsze, jeśli warunek jest prawdziwy (ewaluowany do true). Napisać pętlę, w której użytkownik podaje liczbę x. Należy wyświetlić tę liczbę. Jeżeli użytkownik poda 0, należy zakończyć program.
/*
int main() {
    int a;
    scanf("%d", &a);
    while(a!=0){
        scanf("%d", &a);
    }
    return 0;
}
*/

//2.2. Przerobić kalkulator z zadania 1.6. Teraz po każdym działaniu program powinien spytać użytkownika, czy ten chce powtórzyć wszystko od początku. Jeśli tak - restartujemy kalkulator i zaczynamy od nowa. Jeśli nie - kończymy program.
/*
int main() {
    int a,b;
    char operator = ' ';
    char stop;
    while (stop!='s')
    {
        printf("Podaj pierwszą liczbę: ");
        scanf("%d", &a);
        printf("Podaj drugą liczbę: ");
        scanf("%d", &b);
        printf("Podaj operator [+ - * /]: ");
        scanf(" %c", &operator);

        switch (operator) {
            case '+': {
                printf("Suma: %d\n", a + b);
                break;
            }
            case '-': {
                printf("Różnica: %d\n", a - b);
                break;
            }
            case '*': {
                printf("Iloczyn: %d\n", a * b);
                break;
            }
            case '/': {
                printf("Iloraz: %.2lf\n", (float) a / b);
                break;
            }
            default: {
                printf("Błędny operator\n");
                break;
            }
        }
        printf("Chcesz zakończyć program? Wpisz 's'. Jesli chcesz kontynuować, wpisz 'c': ");
        scanf(" %c", &stop);
    }
    return 0;
}*/

//2.3. Pobrać od użytkownika liczbę x. Należy wyświetlić wszystkie kolejne potęgi liczby x. Zakończyć program, kiedy liczba przekroczy 100000
/*

int main(){
    int a, b;
    scanf("%d", &a);
    b = a;
    while (a < 100000){
        a = a*b;
        printf("%d\n",a);
    }
    return 0;
}
*/

//2.4. Pobrać od użytkownika liczbę x. Jeśli liczba jest niedodatnia - należy zakończyć program. Następnie należy wyświetlać kolejno (wnowej linii) wszystkie liczby mniejsze od x, aż osiągnięte zostanie 0.
/*
int main() {
    int a;
    scanf("%d", &a);
    while (a>0) {
        a = a-1;
        printf("%d\n", a);
    }
    return 0;
}
*/

//2.5. Zapoznać się z instrukcjami continue; i break;. Pierwsza służy do zakończenia iteracji i przejścia do następnej, a druga natychmiast kończy pętlę. Przerobić program z zadania 2.4, aby wyświetlał tylko parzyste liczby (użyć if oraz continue). Jeśli liczba wynosi 40, należy wyjść z pętli i zakończyć program.
/*
int main() {
    int a;
    scanf("%d", &a);
    while (a > 0) {
        a = a - 1;
        if (a%2!=0){
            continue;
        }
        if (a==40){
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}
*/

//2.6. Zapoznać się z pętlą for. Pętla służy do wykonania danego fragmentu kodu ZNANĄ Z GÓRY określoną ilość razy. Uwaga - każdą pętlę for można zastąpić pętlą while i wzajemnie. Zwyczajowo obowiazuje zasada, że jeśli ilość iteracji jest znana - używamy for, a jeśli nie jest znana (zależy od użytkownika lub jakiegoś stanu zewnętrznego) - używamy pętli while. Pętla for składa się z: ZMIENNEJ ITERACYJNEJ, czyli stanu początkowego pętli, np. int i = 0. Następnie WARUNKU ZAKOŃCZENIA PĘTLI, np. i<10. Następnie OPERACJI WYKONYWANEJ PO KAŻDEJ ITERACJI - zazwyczaj jest to zwiększenie iteratora o 1, czyli i = i + 1, bądź w skrócie i++. Napisać pętlę for, która wyświetli cyfry od 0 do 9.
/*
int main() {
    for (int i = 0; i < 10 ; ++i) {
        printf("%d\n", i);
    }
}
*/

//2.7. Pobrać od użytkownika liczby x i y. Zakładamy, że y > x (zawsze, nie musimy tego sprawdzać). Za pomocą pętli for wypisać liczby między x a y (do przemyślenia - co jest stanem początkowym, a co warunkiem zakończenia pętli?)
/*
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    for (x; x < y-1; x++) {
        printf("%d\n", x+1);
    }
}
*/

//2.8. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisać wszystkie liczby mniejsze od x, ale większe niż 0.
/*
int main() {
    int x;
    scanf("%d", &x);
    for (x; x > 1; x--) {
        printf("%d\n", x-1);
    }
}
*/

//2.9. Pobrać od użytkownika liczbę x. Za pomocą pętli for wypisywać CO TRZECIĄ liczbę większą od x. Pętla powinna się zakończyć, jeśli liczba przekroczy 100. Uwaga - proszę nie używać operacji continue i break, a sterować tylko parametrami pętli.
/*
int main() {
    int x;
    scanf("%d", &x);
    for (x = x+3; x < 100 ; x++) {
        printf("%d\n", x);
        x = x+2;
    }
}*/

//3.1. Napisać metodę void NewLine(). Powinna ona wypisać na ekran pojedynczą pustą linię. Użyć tej metodę w main().
/*
void NewLine(){
    printf("\n");
}

int main() {
    printf("Pierwsza linia");
    NewLine();
    printf("Druga linia");
    return 0;
}
*/

//3.2. Napisać metodę void NewLines(int count). Powinna ona wypisać tyle nowych linii, ile zostało podanych W PARAMETRZE count (należy użyć pętli for). Użyć metodę w main()
/*
void NewLine(int count){
    for (int i = 0; i < count; ++i) {
        printf("Linia numer %d: \n", i+1);
    }
}
int main() {
    NewLine(9);
    return 0;
}
*/

//3.3. Napisać metodę void WriteBiggerNumber(int x, int y). Metoda powinna pobrać 2 parametry i zwrócić większy z nich. Wykorzystać funckję w metodzie main(). UWAGA - pobieranie liczb od użytkownika powinno odbyć się w funkcji main(), a NIE w WriteBiggerNumber! Do funkcji należy jedynie przesłać pobrane wcześniej parametry.
/*
void WriteBiggerNumber(int x, int y) {
    if (x>y){
        printf("%d", x);
    } else {
        printf("%d", y);
    }
}
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    WriteBiggerNumber(x,y);
    return 0;
}
*/

//3.4. Napisać metodę Multiply(int x, int y) . Metoda powinna ZWRÓCIĆ (słowo kluczowe return) iloczyn dwóch parametrów. Uwaga! Metoda NIE POWINNA wypisywać wyniku - powinien on być wyświetlony w funkcji main!
/*
int Multiply(int x, int y) {
    return x*y;
}
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", Multiply(x,y));
    return 0;
}
*/
