# Estudo de uso de thread utilizando C

* O teste consiste em dois códigos:

    Os dois códigos possuem 4 métodos, cada método executa um "for" com tamanhos diferentes. Cada método possui um contador para poder saber quanto tempo demorou para executar e dentro do "for" exsite um "print" para mostrar o console e adicionar a um arquivo de log todos os eventos que acotnecem.

* Sem utilizar threads:

    A função "main" possui a chamada das quatro tarefas em sequencia, então a "Tarefa 1" será executada primeiro e é necessário que ela termine para o código continuar e assim fará com todas as tarefas.

* Utilizando threads:

    A função "main" possui a criação das quatro threads após serem criadas, todas são executadas ao mesmo tempo. O código termina quando a ultima função dentro da thread é realizada.

* Impressões:

    Lógo de cara podemos notar um comportamento diferente durante a execução dos códigos.

    A primeira diferença é no término das tarefas, pelo uso de thread todas as tarfas executarem ao mesmo tempo as tarefas mais rápidas acabam sendo concluídas primeiro, muito diferente da forma sequencial em que não importando o tempo de execução uma tarefa precisa terminar para a outra continuar.

    Outra coisa notavel é que o tempo total decorrido não necessariamente será muito diferentes, após alguns testes apenas 2 segundos em média de diferença foi notado.