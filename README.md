
#	Algoritmo para validação do CPF em Linguagem C

Este algoritmo segue as diretrizes de validação de números de CPF através dos digítos verificadores.

Com exceção dos CPF's com todos os números iguais, que mesmo sendo inválidos, passam no algoritmo de validação, qualquer CPF que não obedecer essas regras será considerado INVÁLIDO (retorno 0).

### Exemplo:

1. CPF: 145.382.206-20
2. Calculando o **PRIMEIRO** digito de um CPF: 

---

    CPF:			1	4	5	3	8	2	2	0	6 
    Multiplica		*	*	*	*	*	*	*	*	*
    por				10	9	8	7	6	5	4	3	2

    Resultado       10	36	40	21	48	10	8	0	12

    soma			10+ 36+ 40+ 21+ 48+ 10+ 8+ 0+ 12 = 185

    Do resultado obtido, pegamos o resto da divisão por 11:
    185 % 11 == 9;

    Subtrai este valor de 11: 
    11 - 9 = 2; este é o primeiro digito


3. Calculando o **SEGUNDO** digito de um CPF:
---

    CPF:			1	4	5	3	8	2	2	0	6	2
    Multiplica		*	*	*	*	*	*	*	*	*	*
    por             11	10	9	8	7	6	5	4	3	2
    				
    Resultado:		11	40	45	24	56	12	10	0	18	4
    
    soma			11+ 40+ 45+ 24+ 56+ 12+ 10+ 0+  18+ 4 = 220
    
    Do resultado obtido, pegamos o resto da divisão por 11:
    220 % 11 == 0;
    
    Subtraímos o valor encontrado de 11:
    11 - 0 == 11;
    
    Como 11 é maior que 10, então o último dígito é 0;
    
    CPF: 145382206-20;
---

## Como usar

- Coloque o arquivo "validaCPF.c" na pasta do seu projeto
- Adicione uma linha "#include "validaCPF.c" no cabeçalho do seu arquivo onde a função é necessária.
    - OBS: talvez seja necessário especificar o caminho para onde você colocou o arquivo, como por exemplo:
    - "#include "../caminho/para/validaCPF.c"
- Para realizar uma validação, basta chamar a função "validaCPF(char* cpf)", passando o CPF como um vetor de caracteres.