/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#include "ASN_NGAP_PDUSessionUsageReport.h"

#include "ASN_NGAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_NGAP_rATType_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_NGAP_rATType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_NGAP_rATType_value2enum_2[] = {
	{ 0,	2,	"nr" },
	{ 1,	5,	"eutra" },
	{ 2,	13,	"nr-unlicensed" },
	{ 3,	17,	"e-utra-unlicensed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_NGAP_rATType_enum2value_2[] = {
	3,	/* e-utra-unlicensed(3) */
	1,	/* eutra(1) */
	0,	/* nr(0) */
	2	/* nr-unlicensed(2) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_rATType_specs_2 = {
	asn_MAP_ASN_NGAP_rATType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_NGAP_rATType_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_rATType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_rATType_2 = {
	"rATType",
	"rATType",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_NGAP_rATType_tags_2,
	sizeof(asn_DEF_ASN_NGAP_rATType_tags_2)
		/sizeof(asn_DEF_ASN_NGAP_rATType_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_NGAP_rATType_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_rATType_tags_2)
		/sizeof(asn_DEF_ASN_NGAP_rATType_tags_2[0]), /* 2 */
	{ &asn_OER_type_ASN_NGAP_rATType_constr_2, &asn_PER_type_ASN_NGAP_rATType_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_NGAP_rATType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_NGAP_PDUSessionUsageReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_PDUSessionUsageReport, rATType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_rATType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rATType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_NGAP_PDUSessionUsageReport, pDUSessionTimedReportList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_VolumeTimedReportList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pDUSessionTimedReportList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_NGAP_PDUSessionUsageReport, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolExtensionContainer_9673P197,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_NGAP_PDUSessionUsageReport_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_PDUSessionUsageReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rATType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDUSessionTimedReportList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_PDUSessionUsageReport_specs_1 = {
	sizeof(struct ASN_NGAP_PDUSessionUsageReport),
	offsetof(struct ASN_NGAP_PDUSessionUsageReport, _asn_ctx),
	asn_MAP_ASN_NGAP_PDUSessionUsageReport_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_NGAP_PDUSessionUsageReport_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PDUSessionUsageReport = {
	"PDUSessionUsageReport",
	"PDUSessionUsageReport",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1,
	sizeof(asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_PDUSessionUsageReport_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_NGAP_PDUSessionUsageReport_1,
	3,	/* Elements count */
	&asn_SPC_ASN_NGAP_PDUSessionUsageReport_specs_1	/* Additional specs */
};

