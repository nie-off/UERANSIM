/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_PagingeDRXInformation_H_
#define	_ASN_NGAP_PagingeDRXInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_Paging-eDRX-Cycle.h"
#include "ASN_NGAP_Paging-Time-Window.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_PagingeDRXInformation */
typedef struct ASN_NGAP_PagingeDRXInformation {
	ASN_NGAP_Paging_eDRX_Cycle_t	 paging_eDRX_Cycle;
	ASN_NGAP_Paging_Time_Window_t	*paging_Time_Window;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_PagingeDRXInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PagingeDRXInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_PagingeDRXInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_PagingeDRXInformation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_PagingeDRXInformation_H_ */
#include <asn_internal.h>
