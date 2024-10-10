/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_GBR_QosInformation_H_
#define	_ASN_NGAP_GBR_QosInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_BitRate.h"
#include "ASN_NGAP_NotificationControl.h"
#include "ASN_NGAP_PacketLossRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_GBR-QosInformation */
typedef struct ASN_NGAP_GBR_QosInformation {
	ASN_NGAP_BitRate_t	 maximumFlowBitRateDL;
	ASN_NGAP_BitRate_t	 maximumFlowBitRateUL;
	ASN_NGAP_BitRate_t	 guaranteedFlowBitRateDL;
	ASN_NGAP_BitRate_t	 guaranteedFlowBitRateUL;
	ASN_NGAP_NotificationControl_t	*notificationControl;	/* OPTIONAL */
	ASN_NGAP_PacketLossRate_t	*maximumPacketLossRateDL;	/* OPTIONAL */
	ASN_NGAP_PacketLossRate_t	*maximumPacketLossRateUL;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_GBR_QosInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_GBR_QosInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_GBR_QosInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_GBR_QosInformation_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_GBR_QosInformation_H_ */
#include <asn_internal.h>
