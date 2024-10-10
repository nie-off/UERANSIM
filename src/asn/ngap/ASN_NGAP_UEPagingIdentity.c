/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#include "ASN_NGAP_UEPagingIdentity.h"

#include "ASN_NGAP_FiveG-S-TMSI.h"
#include "ASN_NGAP_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_ASN_NGAP_UEPagingIdentity_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ASN_NGAP_UEPagingIdentity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ASN_NGAP_UEPagingIdentity_1[] = {
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_UEPagingIdentity, choice.fiveG_S_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_FiveG_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveG-S-TMSI"
		},
	{ ATF_POINTER, 0, offsetof(struct ASN_NGAP_UEPagingIdentity, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_NGAP_ProtocolIE_SingleContainer_9625P46,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_NGAP_UEPagingIdentity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fiveG-S-TMSI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_UEPagingIdentity_specs_1 = {
	sizeof(struct ASN_NGAP_UEPagingIdentity),
	offsetof(struct ASN_NGAP_UEPagingIdentity, _asn_ctx),
	offsetof(struct ASN_NGAP_UEPagingIdentity, present),
	sizeof(((struct ASN_NGAP_UEPagingIdentity *)0)->present),
	asn_MAP_ASN_NGAP_UEPagingIdentity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_UEPagingIdentity = {
	"UEPagingIdentity",
	"UEPagingIdentity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ASN_NGAP_UEPagingIdentity_constr_1, &asn_PER_type_ASN_NGAP_UEPagingIdentity_constr_1, CHOICE_constraint },
	asn_MBR_ASN_NGAP_UEPagingIdentity_1,
	2,	/* Elements count */
	&asn_SPC_ASN_NGAP_UEPagingIdentity_specs_1	/* Additional specs */
};

