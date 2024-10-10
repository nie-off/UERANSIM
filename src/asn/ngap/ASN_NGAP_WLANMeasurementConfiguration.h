/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-rel16.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER -D ngap`
 */

#ifndef	_ASN_NGAP_WLANMeasurementConfiguration_H_
#define	_ASN_NGAP_WLANMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_WLANMeasConfig.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_WLANMeasurementConfiguration__wlan_rssi {
	ASN_NGAP_WLANMeasurementConfiguration__wlan_rssi_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_WLANMeasurementConfiguration__wlan_rssi;
typedef enum ASN_NGAP_WLANMeasurementConfiguration__wlan_rtt {
	ASN_NGAP_WLANMeasurementConfiguration__wlan_rtt_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_WLANMeasurementConfiguration__wlan_rtt;

/* Forward declarations */
struct ASN_NGAP_WLANMeasConfigNameList;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_WLANMeasurementConfiguration */
typedef struct ASN_NGAP_WLANMeasurementConfiguration {
	ASN_NGAP_WLANMeasConfig_t	 wlanMeasConfig;
	struct ASN_NGAP_WLANMeasConfigNameList	*wlanMeasConfigNameList;	/* OPTIONAL */
	long	*wlan_rssi;	/* OPTIONAL */
	long	*wlan_rtt;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_WLANMeasurementConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_wlan_rssi_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_wlan_rtt_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_WLANMeasurementConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_WLANMeasurementConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_WLANMeasurementConfiguration_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_WLANMeasurementConfiguration_H_ */
#include <asn_internal.h>
