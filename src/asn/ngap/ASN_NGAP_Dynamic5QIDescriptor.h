/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_Dynamic5QIDescriptor_H_
#define	_ASN_NGAP_Dynamic5QIDescriptor_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_PriorityLevelQos.h"
#include "ASN_NGAP_PacketDelayBudget.h"
#include "ASN_NGAP_PacketErrorRate.h"
#include "ASN_NGAP_FiveQI.h"
#include "ASN_NGAP_DelayCritical.h"
#include "ASN_NGAP_AveragingWindow.h"
#include "ASN_NGAP_MaximumDataBurstVolume.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_Dynamic5QIDescriptor */
typedef struct ASN_NGAP_Dynamic5QIDescriptor {
	ASN_NGAP_PriorityLevelQos_t	 priorityLevelQos;
	ASN_NGAP_PacketDelayBudget_t	 packetDelayBudget;
	ASN_NGAP_PacketErrorRate_t	 packetErrorRate;
	ASN_NGAP_FiveQI_t	*fiveQI;	/* OPTIONAL */
	ASN_NGAP_DelayCritical_t	*delayCritical;	/* OPTIONAL */
	ASN_NGAP_AveragingWindow_t	*averagingWindow;	/* OPTIONAL */
	ASN_NGAP_MaximumDataBurstVolume_t	*maximumDataBurstVolume;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_Dynamic5QIDescriptor_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_Dynamic5QIDescriptor;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_Dynamic5QIDescriptor_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_Dynamic5QIDescriptor_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_Dynamic5QIDescriptor_H_ */
#include <asn_internal.h>
