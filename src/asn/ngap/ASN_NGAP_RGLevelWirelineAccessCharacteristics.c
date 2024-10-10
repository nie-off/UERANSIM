/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#include "ASN_NGAP_RGLevelWirelineAccessCharacteristics.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics = {
	"RGLevelWirelineAccessCharacteristics",
	"RGLevelWirelineAccessCharacteristics",
	&asn_OP_OCTET_STRING,
	asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1,
	sizeof(asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1)
		/sizeof(asn_DEF_ASN_NGAP_RGLevelWirelineAccessCharacteristics_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

