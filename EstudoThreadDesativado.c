#include <stdio.h>
#include <time.h>

FILE *report;

void tarefa1(){
    clock_t start = clock();
    printf("\nDENTRO Tarefa 1\n");
    fprintf(report, "\n\nDENTRO TAREFA 1\n");

    int i = 0;
    for(i = 0; i < 2000; i ++){
        printf("\nTarefa 1: %d", i);
        fprintf(report, "\nTarefa 1: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou Tarefa 1: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU TAREFA 1: %f", time_spent / CLOCKS_PER_SEC);
}

void tarefa2(){
    clock_t start = clock();
    printf("\nDENTRO Tarefa 2\n");
    fprintf(report, "\n\nDENTRO TAREFA 2\n");

    int i = 0;
    for(i = 0; i < 16000; i ++){
        printf("\nTarefa 2: %d", i);
        fprintf(report, "\nTarefa 2: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou Tarefa 2: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU TAREFA 2: %f", time_spent / CLOCKS_PER_SEC);
}

void tarefa3(){
    clock_t start = clock();
    printf("\nDENTRO Tarefa 3\n");
    fprintf(report, "\n\nDENTRO TAREFA 3\n");

    int i = 0;
    for(i = 0; i < 4000; i ++){
        printf("\nTarefa 3: %d", i);
        fprintf(report, "\nTarefa 3: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou Tarefa 3: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU TAREFA 3: %f", time_spent / CLOCKS_PER_SEC);
}

void tarefa4(){
    clock_t start = clock();
    printf("\nDENTRO Tarefa 4\n");
    fprintf(report, "\n\nDENTRO TAREFA 4\n");

    int i = 0;
    for(i = 0; i < 8000; i ++){
        printf("\nTarefa 4: %d", i);
        fprintf(report, "\nTarefa 4: %d", i);
    }

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nTerminou Tarefa 4: %f", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nTERMINOU TAREFA 4: %f", time_spent / CLOCKS_PER_SEC);
}

int main(){

    report = fopen("LogNoThread.txt", "w");
    clock_t start = clock();
    printf("\nPROGRAMA EXECUTANDO");

    //criando Tarefas
    tarefa1();
    tarefa2();
    tarefa3();
    tarefa4();

    clock_t end = clock();
    double time_spent = (double) end - start;
    printf("\nPROGRAMA TERMINOU: %f\n", time_spent / CLOCKS_PER_SEC);
    fprintf(report, "\nPROGRAMA TERMINOU: %f\n", time_spent / CLOCKS_PER_SEC);
    fclose(report);

    return 0;
}