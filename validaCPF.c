#include <string.h>

// Função principal
int validaCPF(char cpf[]);

// Funções auxiliares
int validaDigitos(char cpf[], int digito);
int charToInt (char s);

// Valida cada digito do CPF
int validaDigitos (char cpf[], int digito)
{
	int i, pot, somaDigito=0;
	
	pot = (digito != 1) ? 11 : 10;
	
	for (i=0;i<8+digito;i++, pot--) {
		somaDigito += charToInt(cpf[i]) * pot;
	}

	return 11 - (somaDigito % 11);
}

// Valida o CPF em si com base nos digitos informados
int validaCPF(char cpf[])
{
	return ( charToInt(cpf[9]) == (validaDigitos(cpf, 1)) &&
	charToInt(cpf[10]) == (validaDigitos(cpf, 2)) ) ? 1 : 0;
}

// Esta função recebe um caractere da tabela ASCII e retorna seu valor inteiro
int charToInt (char s)
{
	if ( (s<48) || (s>57) ) return -1;
	else if ( s == 48 ) return 0;
	else if ( s == 49 ) return 1;
	else if ( s == 50 ) return 2;
	else if ( s == 51 ) return 3;
	else if ( s == 52 ) return 4;
	else if ( s == 53 ) return 5;
	else if ( s == 54 ) return 6;
	else if ( s == 55 ) return 7;
	else if ( s == 56 ) return 8;
	else if ( s == 57 ) return 9;
}
