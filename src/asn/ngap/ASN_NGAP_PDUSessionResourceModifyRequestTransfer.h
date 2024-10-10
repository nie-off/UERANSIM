/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_PDUSessionResourceModifyRequestTransfer_H_
#define	_ASN_NGAP_PDUSessionResourceModifyRequestTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_PDUSessionResourceModifyRequestTransfer */
typedef struct ASN_NGAP_PDUSessionResourceModifyRequestTransfer {
	ASN_NGAP_ProtocolIE_Container_9622P96_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_PDUSessionResourceModifyRequestTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PDUSessionResourceModifyRequestTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_PDUSessionResourceModifyRequestTransfer_H_ */
#include <asn_internal.h>
