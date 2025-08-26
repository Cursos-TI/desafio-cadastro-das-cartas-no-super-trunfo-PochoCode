## - SUPER TRUNFO - Paises – Cadastro de Cartas

# Este projeto é um exercício acadêmico em linguagem C para criar um jogo simplificado do Super Trunfo, com menu interativo para cadastrar e visualizar cartas.

FUNCIONALIDADES:
- Cadastro de cartas contendo:
  • Código da carta (ex.: A01, B02)
  • Nome da cidade
  • Estado
  • População
  • PIB
  • Número de pontos turísticos
- Exibição das cartas cadastradas
- Menu interativo usando switch case

TECNOLOGIAS UTILIZADAS:
- Linguagem: C
- Compilador: GCC
- Editor/IDE: VS Code
- Sistema Operacional: Compatível com Windows, Linux e MacOS

ESTRUTURA DE ARQUIVOS:
CartasSupertrunfo.c -> Codigo-fonte secundario
SuperTrunfo.c  -> Código-fonte principal
README.md      -> Documento de descrição do projeto
SuperTrunfoB -> Codigo secundario em desenvolvimento para atualizar o jogo

COMO COMPILAR E EXECUTAR:
Linux/MacOS:
gcc SuperTrunfo.c -o supertrunfo
./supertrunfo

Windows:
gcc SuperTrunfo.c -o supertrunfo.exe
supertrunfo.exe

EXEMPLO DE EXECUÇÃO:
=== Super Trunfo===

   ==Bemvindo ao Super Trunfo Cidade==
   1. Cadastrar cartas
   2. Ver regras
   3. Sair
   
Digite o código da primeira carta: A01
Digite o nome da cidade: Salvador
Digite o estado: BA
Digite a população: 2886698
Digite o PIB: 102.3
Digite o número de pontos turísticos: 15

Digite o código da segunda carta: B02
Digite o nome da cidade: Rio de Janeiro
Digite o estado: RJ
Digite a população: 6718903
Digite o PIB: 220.5
Digite o número de pontos turísticos: 25

=== Cartas cadastradas com sucesso! ===

===Menu de jogo===
Escolha com cual propriedade atacar
1.Area
2.População...

CONCEITOS APLICADOS:

- Entrada e saída de dados (scanf, printf, fgets)
- Controle de fluxo com switch case
- Variáveis e tipos de dados básicos
- Manipulação de strings

AUTOR:
Projeto desenvolvido para fins acadêmicos por [Seu Nome Aqui].
