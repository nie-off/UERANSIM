/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_ReportIntervalMDT_H_
#define	_ASN_NGAP_ReportIntervalMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_ReportIntervalMDT {
	ASN_NGAP_ReportIntervalMDT_ms120	= 0,
	ASN_NGAP_ReportIntervalMDT_ms240	= 1,
	ASN_NGAP_ReportIntervalMDT_ms480	= 2,
	ASN_NGAP_ReportIntervalMDT_ms640	= 3,
	ASN_NGAP_ReportIntervalMDT_ms1024	= 4,
	ASN_NGAP_ReportIntervalMDT_ms2048	= 5,
	ASN_NGAP_ReportIntervalMDT_ms5120	= 6,
	ASN_NGAP_ReportIntervalMDT_ms10240	= 7,
	ASN_NGAP_ReportIntervalMDT_min1	= 8,
	ASN_NGAP_ReportIntervalMDT_min6	= 9,
	ASN_NGAP_ReportIntervalMDT_min12	= 10,
	ASN_NGAP_ReportIntervalMDT_min30	= 11,
	ASN_NGAP_ReportIntervalMDT_min60	= 12
} e_ASN_NGAP_ReportIntervalMDT;

/* ASN_NGAP_ReportIntervalMDT */
typedef long	 ASN_NGAP_ReportIntervalMDT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_ReportIntervalMDT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ReportIntervalMDT;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_ReportIntervalMDT_specs_1;
asn_struct_free_f ASN_NGAP_ReportIntervalMDT_free;
asn_struct_print_f ASN_NGAP_ReportIntervalMDT_print;
asn_constr_check_f ASN_NGAP_ReportIntervalMDT_constraint;
ber_type_decoder_f ASN_NGAP_ReportIntervalMDT_decode_ber;
der_type_encoder_f ASN_NGAP_ReportIntervalMDT_encode_der;
xer_type_decoder_f ASN_NGAP_ReportIntervalMDT_decode_xer;
xer_type_encoder_f ASN_NGAP_ReportIntervalMDT_encode_xer;
oer_type_decoder_f ASN_NGAP_ReportIntervalMDT_decode_oer;
oer_type_encoder_f ASN_NGAP_ReportIntervalMDT_encode_oer;
per_type_decoder_f ASN_NGAP_ReportIntervalMDT_decode_uper;
per_type_encoder_f ASN_NGAP_ReportIntervalMDT_encode_uper;
per_type_decoder_f ASN_NGAP_ReportIntervalMDT_decode_aper;
per_type_encoder_f ASN_NGAP_ReportIntervalMDT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_ReportIntervalMDT_H_ */
#include <asn_internal.h>
