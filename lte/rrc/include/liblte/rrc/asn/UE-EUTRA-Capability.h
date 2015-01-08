/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UE_EUTRA_Capability_H_
#define	_UE_EUTRA_Capability_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/AccessStratumRelease.h"
#include <liblte/rrc/asn/NativeInteger.h>
#include "liblte/rrc/asn/PDCP-Parameters.h"
#include "liblte/rrc/asn/PhyLayerParameters.h"
#include "liblte/rrc/asn/RF-Parameters.h"
#include "liblte/rrc/asn/MeasParameters.h"
#include <liblte/rrc/asn/BIT_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_EUTRA_Capability_v920_IEs;
struct IRAT_ParametersUTRA_FDD;
struct IRAT_ParametersUTRA_TDD128;
struct IRAT_ParametersUTRA_TDD384;
struct IRAT_ParametersUTRA_TDD768;
struct IRAT_ParametersGERAN;
struct IRAT_ParametersCDMA2000_HRPD;
struct IRAT_ParametersCDMA2000_1XRTT;

/* UE-EUTRA-Capability */
typedef struct UE_EUTRA_Capability {
	AccessStratumRelease_t	 accessStratumRelease;
	long	 ue_Category;
	PDCP_Parameters_t	 pdcp_Parameters;
	PhyLayerParameters_t	 phyLayerParameters;
	RF_Parameters_t	 rf_Parameters;
	MeasParameters_t	 measParameters;
	BIT_STRING_t	*featureGroupIndicators	/* OPTIONAL */;
	struct UE_EUTRA_Capability__interRAT_Parameters {
		struct IRAT_ParametersUTRA_FDD	*utraFDD	/* OPTIONAL */;
		struct IRAT_ParametersUTRA_TDD128	*utraTDD128	/* OPTIONAL */;
		struct IRAT_ParametersUTRA_TDD384	*utraTDD384	/* OPTIONAL */;
		struct IRAT_ParametersUTRA_TDD768	*utraTDD768	/* OPTIONAL */;
		struct IRAT_ParametersGERAN	*geran	/* OPTIONAL */;
		struct IRAT_ParametersCDMA2000_HRPD	*cdma2000_HRPD	/* OPTIONAL */;
		struct IRAT_ParametersCDMA2000_1XRTT	*cdma2000_1xRTT	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} interRAT_Parameters;
	struct UE_EUTRA_Capability_v920_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/UE-EUTRA-Capability-v920-IEs.h"
#include "liblte/rrc/asn/IRAT-ParametersUTRA-FDD.h"
#include "liblte/rrc/asn/IRAT-ParametersUTRA-TDD128.h"
#include "liblte/rrc/asn/IRAT-ParametersUTRA-TDD384.h"
#include "liblte/rrc/asn/IRAT-ParametersUTRA-TDD768.h"
#include "liblte/rrc/asn/IRAT-ParametersGERAN.h"
#include "liblte/rrc/asn/IRAT-ParametersCDMA2000-HRPD.h"
#include "liblte/rrc/asn/IRAT-ParametersCDMA2000-1XRTT.h"

#endif	/* _UE_EUTRA_Capability_H_ */
#include <liblte/rrc/asn/asn_internal.h>
