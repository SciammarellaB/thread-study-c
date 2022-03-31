#include <stdio.h>
#include <pthread.h>
#include <time.h>

//DECLARACAO
pthread_t thread1;
pthread_t thread2;
pthread_t thread3;
pthread_t thread4;

FILE *report;

void *tarefa1(){
    clock_t start = clock();
    printf("\nDENTRO THREAD 1\n");
    fprintf(report, "\n\nDENTRO THREAD 1\n");

    int i = 0;
    for(i = 0; i < 2000; i ++){
        printf("\nTHREAD 1: %d", i);
        fprintf(report, "\nTHREAD 1: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou THREAD 1: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU THREAD 1: %f", time_spent / CLOCKS_PER_SEC);
}

void *tarefa2(){
    clock_t start = clock();
    printf("\nDENTRO THREAD 2\n");
    fprintf(report, "\n\nDENTRO THREAD 2\n");

    int i = 0;
    for(i = 0; i < 16000; i ++){
        printf("\nTHREAD 2: %d", i);
        fprintf(report, "\nTHREAD 2: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou THREAD 2: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU THREAD 2: %f", time_spent / CLOCKS_PER_SEC);
}

void *tarefa3(){
    clock_t start = clock();
    printf("\nDENTRO THREAD 3\n");
    fprintf(report, "\n\nDENTRO THREAD 3\n");

    int i = 0;
    for(i = 0; i < 4000; i ++){
        printf("\nTHREAD 3: %d", i);
        fprintf(report, "\nTHREAD 3: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou THREAD 3: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU THREAD 3: %f", time_spent / CLOCKS_PER_SEC);
}

void *tarefa4(){
    clock_t start = clock();
    printf("\nDENTRO THREAD 4\n");
    fprintf(report, "\n\nDENTRO THREAD 4\n");

    int i = 0;
    for(i = 0; i < 8000; i ++){
        printf("\nTHREAD 4: %d", i);
        fprintf(report, "\nTHREAD 4: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou THREAD 4: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU THREAD 4: %f", time_spent / CLOCKS_PER_SEC);
}


int main(){

    report = fopen("LogThread.txt", "w");
    clock_t start = clock();
    printf("\nPROGRAMA EXECUTANDO");

    //criando Threads
    pthread_create(&thread1, NULL, tarefa1, NULL);
    pthread_create(&thread2, NULL, tarefa2, NULL);
    pthread_create(&thread3, NULL, tarefa3, NULL);
    pthread_create(&thread4, NULL, tarefa4, NULL);
    
    //juntando as thread
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nPROGRAMA TERMINOU: %f\n", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nPROGRAMA TERMINOU: %f\n", time_spent / CLOCKS_PER_SEC);
    fclose(report);

    return 0;
}