/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_AntennaInfoCommon_H_
#define	_AntennaInfoCommon_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeEnumerated.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoCommon__antennaPortsCount {
	AntennaInfoCommon__antennaPortsCount_an1	= 0,
	AntennaInfoCommon__antennaPortsCount_an2	= 1,
	AntennaInfoCommon__antennaPortsCount_an4	= 2,
	AntennaInfoCommon__antennaPortsCount_spare1	= 3
} e_AntennaInfoCommon__antennaPortsCount;

/* AntennaInfoCommon */
typedef struct AntennaInfoCommon {
	long	 antennaPortsCount;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoCommon_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsCount_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoCommon;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoCommon_H_ */
#include <liblte/rrc/asn/asn_internal.h>
