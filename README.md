# Sistema de gerenciamento de tarefas em C++

#Descriçao
Este projeto é um sistema de gerenciamento de tarefas desenvolvido em C++. 
O objetivo principal é permitir a leitura e escrita de dados em arquivos de texto, possibilitando a busca, armazenamento e exibição de informações sobre tarefas e funcionários.


###Funcionalidades
O sistema possui as seguintes funcionalidades:

Leitura de Tarefas: A função lerTarefa lê os dados de um arquivo de texto chamado ctarefa.txt e armazena as informações em variáveis locais.

Exibição de Tarefas: A função mostrarTarefas busca por uma tarefa específica no arquivo ctarefa.txt com base no nome do funcionário e no código informados pelo usuário. Se a tarefa for encontrada, as informações são exibidas; caso contrário, uma mensagem de erro é apresentada.

Registro de Tarefas Realizadas: Após exibir as informações da tarefa designada ao funcionário, o sistema solicita que o usuário informe se a tarefa foi realizada. Se sim, as informações da tarefa realizada são armazenadas em um arquivo de texto chamado tarefas_feitas.txt ou tarefas_nao_feitas.txt, dependendo da resposta do usuário.



###Estruturas Utilizadas
O sistema utiliza variáveis simples do tipo string, int e char para armazenar e manipular os dados.
