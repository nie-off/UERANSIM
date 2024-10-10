/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_TraceActivation_H_
#define	_ASN_NGAP_TraceActivation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_NGRANTraceID.h"
#include "ASN_NGAP_InterfacesToTrace.h"
#include "ASN_NGAP_TraceDepth.h"
#include "ASN_NGAP_TransportLayerAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_TraceActivation */
typedef struct ASN_NGAP_TraceActivation {
	ASN_NGAP_NGRANTraceID_t	 nGRANTraceID;
	ASN_NGAP_InterfacesToTrace_t	 interfacesToTrace;
	ASN_NGAP_TraceDepth_t	 traceDepth;
	ASN_NGAP_TransportLayerAddress_t	 traceCollectionEntityIPAddress;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_TraceActivation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_TraceActivation;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_TraceActivation_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_TraceActivation_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_TraceActivation_H_ */
#include <asn_internal.h>
