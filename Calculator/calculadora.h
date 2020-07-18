/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct sumar_1_argument {
	int arg1;
	int arg2;
};
typedef struct sumar_1_argument sumar_1_argument;

struct restar_1_argument {
	int arg1;
	int arg2;
};
typedef struct restar_1_argument restar_1_argument;

struct multiplicar_1_argument {
	int arg1;
	int arg2;
};
typedef struct multiplicar_1_argument multiplicar_1_argument;

struct dividir_1_argument {
	int arg1;
	int arg2;
};
typedef struct dividir_1_argument dividir_1_argument;

#define CALCULADORAPROG 0x20000001
#define CALCULADORAVERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMAR 1
extern  int * sumar_1(int , int , CLIENT *);
extern  int * sumar_1_svc(int , int , struct svc_req *);
#define RESTAR 2
extern  int * restar_1(int , int , CLIENT *);
extern  int * restar_1_svc(int , int , struct svc_req *);
#define MULTIPLICAR 3
extern  int * multiplicar_1(int , int , CLIENT *);
extern  int * multiplicar_1_svc(int , int , struct svc_req *);
#define DIVIDIR 4
extern  int * dividir_1(int , int , CLIENT *);
extern  int * dividir_1_svc(int , int , struct svc_req *);
extern int calculadoraprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMAR 1
extern  int * sumar_1();
extern  int * sumar_1_svc();
#define RESTAR 2
extern  int * restar_1();
extern  int * restar_1_svc();
#define MULTIPLICAR 3
extern  int * multiplicar_1();
extern  int * multiplicar_1_svc();
#define DIVIDIR 4
extern  int * dividir_1();
extern  int * dividir_1_svc();
extern int calculadoraprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_sumar_1_argument (XDR *, sumar_1_argument*);
extern  bool_t xdr_restar_1_argument (XDR *, restar_1_argument*);
extern  bool_t xdr_multiplicar_1_argument (XDR *, multiplicar_1_argument*);
extern  bool_t xdr_dividir_1_argument (XDR *, dividir_1_argument*);

#else /* K&R C */
extern bool_t xdr_sumar_1_argument ();
extern bool_t xdr_restar_1_argument ();
extern bool_t xdr_multiplicar_1_argument ();
extern bool_t xdr_dividir_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
