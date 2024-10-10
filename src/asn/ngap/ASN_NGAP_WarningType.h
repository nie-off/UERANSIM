/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_WarningType_H_
#define	_ASN_NGAP_WarningType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_WarningType */
typedef OCTET_STRING_t	 ASN_NGAP_WarningType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_WarningType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_WarningType;
asn_struct_free_f ASN_NGAP_WarningType_free;
asn_struct_print_f ASN_NGAP_WarningType_print;
asn_constr_check_f ASN_NGAP_WarningType_constraint;
ber_type_decoder_f ASN_NGAP_WarningType_decode_ber;
der_type_encoder_f ASN_NGAP_WarningType_encode_der;
xer_type_decoder_f ASN_NGAP_WarningType_decode_xer;
xer_type_encoder_f ASN_NGAP_WarningType_encode_xer;
oer_type_decoder_f ASN_NGAP_WarningType_decode_oer;
oer_type_encoder_f ASN_NGAP_WarningType_encode_oer;
per_type_decoder_f ASN_NGAP_WarningType_decode_uper;
per_type_encoder_f ASN_NGAP_WarningType_encode_uper;
per_type_decoder_f ASN_NGAP_WarningType_decode_aper;
per_type_encoder_f ASN_NGAP_WarningType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_WarningType_H_ */
#include <asn_internal.h>
