/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_ExtendedMobilityInformation_H_
#define	_ASN_NGAP_ExtendedMobilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_NGAP_ExtendedMobilityInformation */
typedef BIT_STRING_t	 ASN_NGAP_ExtendedMobilityInformation_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_ExtendedMobilityInformation_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ExtendedMobilityInformation;
asn_struct_free_f ASN_NGAP_ExtendedMobilityInformation_free;
asn_struct_print_f ASN_NGAP_ExtendedMobilityInformation_print;
asn_constr_check_f ASN_NGAP_ExtendedMobilityInformation_constraint;
ber_type_decoder_f ASN_NGAP_ExtendedMobilityInformation_decode_ber;
der_type_encoder_f ASN_NGAP_ExtendedMobilityInformation_encode_der;
xer_type_decoder_f ASN_NGAP_ExtendedMobilityInformation_decode_xer;
xer_type_encoder_f ASN_NGAP_ExtendedMobilityInformation_encode_xer;
oer_type_decoder_f ASN_NGAP_ExtendedMobilityInformation_decode_oer;
oer_type_encoder_f ASN_NGAP_ExtendedMobilityInformation_encode_oer;
per_type_decoder_f ASN_NGAP_ExtendedMobilityInformation_decode_uper;
per_type_encoder_f ASN_NGAP_ExtendedMobilityInformation_encode_uper;
per_type_decoder_f ASN_NGAP_ExtendedMobilityInformation_decode_aper;
per_type_encoder_f ASN_NGAP_ExtendedMobilityInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_ExtendedMobilityInformation_H_ */
#include <asn_internal.h>
