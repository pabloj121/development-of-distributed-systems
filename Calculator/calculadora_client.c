/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */


#include "calculadora.h"

int
main (int argc, char *argv[])
{
	if (argc < 5) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}

	char *host;
	host = argv[1];

	CLIENT *clnt;
	clnt = clnt_create (host, CALCULADORAPROG, CALCULADORAVERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	int *result;
	int arg1;
	int arg2;

	arg1 = atoi(argv[2]);
	arg2 = atoi(argv[4]);

	switch(argv[3][0]){
		case '+': 	
			result = sumar_1(arg1, arg2, clnt);
			if (result == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

		case '-':
			result = restar_1(arg1, arg2, clnt);
			if (result == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

		case 'x':
			result = multiplicar_1(arg1, arg2, clnt);
			if (result == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;

		case '/':
			result = dividir_1(arg1, arg2, clnt);
			if (result == (int *) NULL) {
				clnt_perror (clnt, "call failed");
			}
			break;
	}

	printf("Resultado: %i\n",*result);

	clnt_destroy (clnt);
exit (0);
}
