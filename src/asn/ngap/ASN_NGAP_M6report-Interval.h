/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_M6report_Interval_H_
#define	_ASN_NGAP_M6report_Interval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_M6report_Interval {
	ASN_NGAP_M6report_Interval_ms120	= 0,
	ASN_NGAP_M6report_Interval_ms240	= 1,
	ASN_NGAP_M6report_Interval_ms480	= 2,
	ASN_NGAP_M6report_Interval_ms640	= 3,
	ASN_NGAP_M6report_Interval_ms1024	= 4,
	ASN_NGAP_M6report_Interval_ms2048	= 5,
	ASN_NGAP_M6report_Interval_ms5120	= 6,
	ASN_NGAP_M6report_Interval_ms10240	= 7,
	ASN_NGAP_M6report_Interval_ms20480	= 8,
	ASN_NGAP_M6report_Interval_ms40960	= 9,
	ASN_NGAP_M6report_Interval_min1	= 10,
	ASN_NGAP_M6report_Interval_min6	= 11,
	ASN_NGAP_M6report_Interval_min12	= 12,
	ASN_NGAP_M6report_Interval_min30	= 13
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_M6report_Interval;

/* ASN_NGAP_M6report-Interval */
typedef long	 ASN_NGAP_M6report_Interval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_M6report_Interval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_M6report_Interval;
extern const asn_INTEGER_specifics_t asn_SPC_ASN_NGAP_M6report_Interval_specs_1;
asn_struct_free_f ASN_NGAP_M6report_Interval_free;
asn_struct_print_f ASN_NGAP_M6report_Interval_print;
asn_constr_check_f ASN_NGAP_M6report_Interval_constraint;
ber_type_decoder_f ASN_NGAP_M6report_Interval_decode_ber;
der_type_encoder_f ASN_NGAP_M6report_Interval_encode_der;
xer_type_decoder_f ASN_NGAP_M6report_Interval_decode_xer;
xer_type_encoder_f ASN_NGAP_M6report_Interval_encode_xer;
oer_type_decoder_f ASN_NGAP_M6report_Interval_decode_oer;
oer_type_encoder_f ASN_NGAP_M6report_Interval_encode_oer;
per_type_decoder_f ASN_NGAP_M6report_Interval_decode_uper;
per_type_encoder_f ASN_NGAP_M6report_Interval_encode_uper;
per_type_decoder_f ASN_NGAP_M6report_Interval_decode_aper;
per_type_encoder_f ASN_NGAP_M6report_Interval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_M6report_Interval_H_ */
#include <asn_internal.h>
