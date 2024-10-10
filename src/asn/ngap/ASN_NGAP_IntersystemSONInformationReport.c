/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#include "ASN_NGAP_IntersystemSONInformationReport.h"

#include "ASN_NGAP_InterSystemHOReport.h"
#include "ASN_NGAP_InterSystemFailureIndication.h"
#include "ASN_NGAP_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_ASN_NGAP_IntersystemSONInformationReport_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_NGAP_IntersystemSONInformationReport_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_NGAP_IntersystemSONInformationReport_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_IntersystemSONInformationReport, choice.hOReportInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_InterSystemHOReport,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hOReportInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_IntersystemSONInformationReport, choice.failureIndicationInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_InterSystemFailureIndication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureIndicationInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_IntersystemSONInformationReport, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolIE_SingleContainer_9625P19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_IntersystemSONInformationReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hOReportInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* failureIndicationInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_IntersystemSONInformationReport_specs_1 = {
	sizeof(struct ASN_NGAP_IntersystemSONInformationReport),
	offsetof(struct ASN_NGAP_IntersystemSONInformationReport, _asn_ctx),
	offsetof(struct ASN_NGAP_IntersystemSONInformationReport, present),
	sizeof(((struct ASN_NGAP_IntersystemSONInformationReport *)0)->present),
	asn_MAP_ASN_NGAP_IntersystemSONInformationReport_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_IntersystemSONInformationReport = {
	"IntersystemSONInformationReport",
	"IntersystemSONInformationReport",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_NGAP_IntersystemSONInformationReport_constr_1, &asn_PER_type_ASN_NGAP_IntersystemSONInformationReport_constr_1, CHOICE_constraint },
	asn_MBR_ASN_NGAP_IntersystemSONInformationReport_1,
	3,	/* Elements count */
	&asn_SPC_ASN_NGAP_IntersystemSONInformationReport_specs_1	/* Additional specs */
};

