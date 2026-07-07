#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    double height;
} Person;

int compare_by_name(const void *a, const void *b) {
    return strcmp(((Person *)a)->name, ((Person *)b)->name);
}

int compare_by_age(const void *a, const void *b) {
    return ((Person *)a)->age - ((Person *)b)->age;
}

int compare_by_height(const void *a, const void *b) {
    double diff = ((Person *)a)->height - ((Person *)b)->height;

    if (diff < 0)
        return -1;
    if (diff > 0)
        return 1;

    return 0;
}

int main() {

    Person people[5] = {
        {"Carlos", 25, 175.4},
        {"Ana", 20, 162.5},
        {"Luis", 30, 180.2},
        {"Maria", 22, 168.9},
        {"Pedro", 27, 172.1}
    };

    int n = sizeof(people) / sizeof(people[0]);

printf("Lista original:\n");

    for (int i = 0; i < n; i++) {
        printf("%s - %d años - %.1f cm\n",
               people[i].name,
               people[i].age,
               people[i].height);
    }

    printf("\n");

qsort(people, n, sizeof(Person), compare_by_name);

    printf("Ordenado por nombre:\n");

    for (int i = 0; i < n; i++) {
        printf("%s - %d años - %.1f cm\n",
               people[i].name,
               people[i].age,
               people[i].height);
    }

    printf("\n");

qsort(people, n, sizeof(Person), compare_by_age);

    printf("Ordenado por edad:\n");

    for (int i = 0; i < n; i++) {
        printf("%s - %d años - %.1f cm\n",
               people[i].name,
               people[i].age,
               people[i].height);
    }

    printf("\n");

qsort(people, n, sizeof(Person), compare_by_height);

    printf("Ordenado por altura:\n");

    for (int i = 0; i < n; i++) {
        printf("%s - %d años - %.1f cm\n",
               people[i].name,
               people[i].age,
               people[i].height);
    }

    return 0;
}
