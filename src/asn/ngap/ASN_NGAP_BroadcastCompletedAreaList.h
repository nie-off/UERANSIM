/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_BroadcastCompletedAreaList_H_
#define	_ASN_NGAP_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_BroadcastCompletedAreaList_PR {
	ASN_NGAP_BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	ASN_NGAP_BroadcastCompletedAreaList_PR_cellIDBroadcastEUTRA,
	ASN_NGAP_BroadcastCompletedAreaList_PR_tAIBroadcastEUTRA,
	ASN_NGAP_BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastEUTRA,
	ASN_NGAP_BroadcastCompletedAreaList_PR_cellIDBroadcastNR,
	ASN_NGAP_BroadcastCompletedAreaList_PR_tAIBroadcastNR,
	ASN_NGAP_BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastNR,
	ASN_NGAP_BroadcastCompletedAreaList_PR_choice_Extensions
} ASN_NGAP_BroadcastCompletedAreaList_PR;

/* Forward declarations */
struct ASN_NGAP_CellIDBroadcastEUTRA;
struct ASN_NGAP_TAIBroadcastEUTRA;
struct ASN_NGAP_EmergencyAreaIDBroadcastEUTRA;
struct ASN_NGAP_CellIDBroadcastNR;
struct ASN_NGAP_TAIBroadcastNR;
struct ASN_NGAP_EmergencyAreaIDBroadcastNR;
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_BroadcastCompletedAreaList */
typedef struct ASN_NGAP_BroadcastCompletedAreaList {
	ASN_NGAP_BroadcastCompletedAreaList_PR present;
	union ASN_NGAP_BroadcastCompletedAreaList_u {
		struct ASN_NGAP_CellIDBroadcastEUTRA	*cellIDBroadcastEUTRA;
		struct ASN_NGAP_TAIBroadcastEUTRA	*tAIBroadcastEUTRA;
		struct ASN_NGAP_EmergencyAreaIDBroadcastEUTRA	*emergencyAreaIDBroadcastEUTRA;
		struct ASN_NGAP_CellIDBroadcastNR	*cellIDBroadcastNR;
		struct ASN_NGAP_TAIBroadcastNR	*tAIBroadcastNR;
		struct ASN_NGAP_EmergencyAreaIDBroadcastNR	*emergencyAreaIDBroadcastNR;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_BroadcastCompletedAreaList;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_BroadcastCompletedAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_BroadcastCompletedAreaList_1[7];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_BroadcastCompletedAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>
