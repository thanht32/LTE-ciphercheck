/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRCConnectionReconfiguration_r8_IEs_H_
#define	_RRCConnectionReconfiguration_r8_IEs_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/DedicatedInfoNAS.h"
#include <liblte/rrc/asn/asn_SEQUENCE_OF.h>
#include <liblte/rrc/asn/constr_SEQUENCE_OF.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasConfig;
struct MobilityControlInfo;
struct RadioResourceConfigDedicated;
struct SecurityConfigHO;
struct RRCConnectionReconfiguration_v890_IEs;

/* RRCConnectionReconfiguration-r8-IEs */
typedef struct RRCConnectionReconfiguration_r8_IEs {
	struct MeasConfig	*measConfig	/* OPTIONAL */;
	struct MobilityControlInfo	*mobilityControlInfo	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_r8_IEs__dedicatedInfoNASList {
		A_SEQUENCE_OF(DedicatedInfoNAS_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedInfoNASList;
	struct RadioResourceConfigDedicated	*radioResourceConfigDedicated	/* OPTIONAL */;
	struct SecurityConfigHO	*securityConfigHO	/* OPTIONAL */;
	struct RRCConnectionReconfiguration_v890_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReconfiguration_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReconfiguration_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/MeasConfig.h"
#include "liblte/rrc/asn/MobilityControlInfo.h"
#include "liblte/rrc/asn/RadioResourceConfigDedicated.h"
#include "liblte/rrc/asn/SecurityConfigHO.h"
#include "liblte/rrc/asn/RRCConnectionReconfiguration-v890-IEs.h"

#endif	/* _RRCConnectionReconfiguration_r8_IEs_H_ */
#include <liblte/rrc/asn/asn_internal.h>
