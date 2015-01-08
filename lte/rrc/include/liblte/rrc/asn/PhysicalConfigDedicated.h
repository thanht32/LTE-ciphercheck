/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_PhysicalConfigDedicated_H_
#define	_PhysicalConfigDedicated_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/BOOLEAN.h>
#include "liblte/rrc/asn/AntennaInfoDedicated.h"
#include <liblte/rrc/asn/NULL.h>
#include <liblte/rrc/asn/constr_CHOICE.h>
#include "liblte/rrc/asn/AntennaInfoDedicated-r10.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicated__antennaInfo_PR {
	PhysicalConfigDedicated__antennaInfo_PR_NOTHING,	/* No components present */
	PhysicalConfigDedicated__antennaInfo_PR_explicitValue,
	PhysicalConfigDedicated__antennaInfo_PR_defaultValue
} PhysicalConfigDedicated__antennaInfo_PR;
typedef enum PhysicalConfigDedicated__antennaInfo_r10_PR {
	PhysicalConfigDedicated__antennaInfo_r10_PR_NOTHING,	/* No components present */
	PhysicalConfigDedicated__antennaInfo_r10_PR_explicitValue_r10,
	PhysicalConfigDedicated__antennaInfo_r10_PR_defaultValue
} PhysicalConfigDedicated__antennaInfo_r10_PR;

/* Forward declarations */
struct PDSCH_ConfigDedicated;
struct PUCCH_ConfigDedicated;
struct PUSCH_ConfigDedicated;
struct UplinkPowerControlDedicated;
struct TPC_PDCCH_Config;
struct CQI_ReportConfig;
struct SoundingRS_UL_ConfigDedicated;
struct SchedulingRequestConfig;
struct CQI_ReportConfig_v920;
struct AntennaInfoDedicated_v920;
struct AntennaInfoUL_r10;
struct CQI_ReportConfig_r10;
struct CSI_RS_Config_r10;
struct PUCCH_ConfigDedicated_v1020;
struct PUSCH_ConfigDedicated_v1020;
struct SchedulingRequestConfig_v1020;
struct SoundingRS_UL_ConfigDedicated_v1020;
struct SoundingRS_UL_ConfigDedicatedAperiodic_r10;
struct UplinkPowerControlDedicated_v1020;
struct PUSCH_CAConfigDedicated_vlola;

/* PhysicalConfigDedicated */
typedef struct PhysicalConfigDedicated {
	struct PDSCH_ConfigDedicated	*pdsch_ConfigDedicated	/* OPTIONAL */;
	struct PUCCH_ConfigDedicated	*pucch_ConfigDedicated	/* OPTIONAL */;
	struct PUSCH_ConfigDedicated	*pusch_ConfigDedicated	/* OPTIONAL */;
	struct UplinkPowerControlDedicated	*uplinkPowerControlDedicated	/* OPTIONAL */;
	struct TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUCCH	/* OPTIONAL */;
	struct TPC_PDCCH_Config	*tpc_PDCCH_ConfigPUSCH	/* OPTIONAL */;
	struct CQI_ReportConfig	*cqi_ReportConfig	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicated	*soundingRS_UL_ConfigDedicated	/* OPTIONAL */;
	struct PhysicalConfigDedicated__antennaInfo {
		PhysicalConfigDedicated__antennaInfo_PR present;
		union PhysicalConfigDedicated__antennaInfo_u {
			AntennaInfoDedicated_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *antennaInfo;
	struct SchedulingRequestConfig	*schedulingRequestConfig	/* OPTIONAL */;
	struct CQI_ReportConfig_v920	*cqi_ReportConfig_v920	/* OPTIONAL */;
	struct AntennaInfoDedicated_v920	*antennaInfo_v920	/* OPTIONAL */;
	struct PhysicalConfigDedicated__antennaInfo_r10 {
		PhysicalConfigDedicated__antennaInfo_r10_PR present;
		union PhysicalConfigDedicated__antennaInfo_r10_u {
			AntennaInfoDedicated_r10_t	 explicitValue_r10;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *antennaInfo_r10;
	struct AntennaInfoUL_r10	*antennaInfoUL_r10	/* OPTIONAL */;
	BOOLEAN_t	*cif_Presence_r10	/* OPTIONAL */;
	struct CQI_ReportConfig_r10	*cqi_ReportConfig_r10	/* OPTIONAL */;
	struct CSI_RS_Config_r10	*csi_RS_Config_r10	/* OPTIONAL */;
	struct PUCCH_ConfigDedicated_v1020	*pucch_ConfigDedicated_v1020	/* OPTIONAL */;
	struct PUSCH_ConfigDedicated_v1020	*pusch_ConfigDedicated_v1020	/* OPTIONAL */;
	struct SchedulingRequestConfig_v1020	*schedulingRequestConfig_v1020	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicated_v1020	*soundingRS_UL_ConfigDedicated_v1020	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicatedAperiodic_r10	*soundingRS_UL_ConfigDedicatedAperiodic_r10	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_v1020	*uplinkPowerControlDedicated_v1020	/* OPTIONAL */;
	struct PUSCH_CAConfigDedicated_vlola	*pusch_CAConfigDedicated_vlola	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicated;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/PDSCH-ConfigDedicated.h"
#include "liblte/rrc/asn/PUCCH-ConfigDedicated.h"
#include "liblte/rrc/asn/PUSCH-ConfigDedicated.h"
#include "liblte/rrc/asn/UplinkPowerControlDedicated.h"
#include "liblte/rrc/asn/TPC-PDCCH-Config.h"
#include "liblte/rrc/asn/CQI-ReportConfig.h"
#include "liblte/rrc/asn/SoundingRS-UL-ConfigDedicated.h"
#include "liblte/rrc/asn/SchedulingRequestConfig.h"
#include "liblte/rrc/asn/CQI-ReportConfig-v920.h"
#include "liblte/rrc/asn/AntennaInfoDedicated-v920.h"
#include "liblte/rrc/asn/AntennaInfoUL-r10.h"
#include "liblte/rrc/asn/CQI-ReportConfig-r10.h"
#include "liblte/rrc/asn/CSI-RS-Config-r10.h"
#include "liblte/rrc/asn/PUCCH-ConfigDedicated-v1020.h"
#include "liblte/rrc/asn/PUSCH-ConfigDedicated-v1020.h"
#include "liblte/rrc/asn/SchedulingRequestConfig-v1020.h"
#include "liblte/rrc/asn/SoundingRS-UL-ConfigDedicated-v1020.h"
#include "liblte/rrc/asn/SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "liblte/rrc/asn/UplinkPowerControlDedicated-v1020.h"
#include "liblte/rrc/asn/PUSCH-CAConfigDedicated-vlola.h"

#endif	/* _PhysicalConfigDedicated_H_ */
#include <liblte/rrc/asn/asn_internal.h>
