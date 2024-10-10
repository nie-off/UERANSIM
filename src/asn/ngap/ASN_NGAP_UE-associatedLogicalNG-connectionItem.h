/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_UE_associatedLogicalNG_connectionItem_H_
#define	_ASN_NGAP_UE_associatedLogicalNG_connectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_AMF-UE-NGAP-ID.h"
#include "ASN_NGAP_RAN-UE-NGAP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_UE-associatedLogicalNG-connectionItem */
typedef struct ASN_NGAP_UE_associatedLogicalNG_connectionItem {
	ASN_NGAP_AMF_UE_NGAP_ID_t	*aMF_UE_NGAP_ID;	/* OPTIONAL */
	ASN_NGAP_RAN_UE_NGAP_ID_t	*rAN_UE_NGAP_ID;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_UE_associatedLogicalNG_connectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_UE_associatedLogicalNG_connectionItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_UE_associatedLogicalNG_connectionItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_UE_associatedLogicalNG_connectionItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_UE_associatedLogicalNG_connectionItem_H_ */
#include <asn_internal.h>
