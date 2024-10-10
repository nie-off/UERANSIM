/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_SecondaryRATDataUsageReportTransfer_H_
#define	_ASN_NGAP_SecondaryRATDataUsageReportTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_SecondaryRATUsageInformation;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_SecondaryRATDataUsageReportTransfer */
typedef struct ASN_NGAP_SecondaryRATDataUsageReportTransfer {
	struct ASN_NGAP_SecondaryRATUsageInformation	*secondaryRATUsageInformation;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_SecondaryRATDataUsageReportTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_SecondaryRATDataUsageReportTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_SecondaryRATDataUsageReportTransfer_H_ */
#include <asn_internal.h>
