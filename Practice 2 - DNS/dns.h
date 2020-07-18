/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DNS_H_RPCGEN
#define _DNS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct registrar_1_argument {
	int arg1;
	double arg2;
};
typedef struct registrar_1_argument registrar_1_argument;

#define DNSPROG 0x20000001
#define DNSVERS 1
#define DNS2 0x20000002
#define DNS2VERS 1
#define DNS3 0x20000003
#define DNS3VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define CONSULTAR 1
extern  double * consultar_1(int , CLIENT *);
extern  double * consultar_1_svc(int , struct svc_req *);
#define REGISTRAR 2
extern  int * registrar_1(int , double , CLIENT *);
extern  int * registrar_1_svc(int , double , struct svc_req *);
#define BAJA 3
extern  int * baja_1(int , CLIENT *);
extern  int * baja_1_svc(int , struct svc_req *);
extern int dnsprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CONSULTAR 1
extern  double * consultar_1();
extern  double * consultar_1_svc();
#define REGISTRAR 2
extern  int * registrar_1();
extern  int * registrar_1_svc();
#define BAJA 3
extern  int * baja_1();
extern  int * baja_1_svc();
extern int dnsprog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_registrar_1_argument (XDR *, registrar_1_argument*);

#else /* K&R C */
extern bool_t xdr_registrar_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DNS_H_RPCGEN */
