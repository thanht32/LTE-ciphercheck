/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MBSFN_AreaInfo_r9_H_
#define	_MBSFN_AreaInfo_r9_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>
#include <liblte/rrc/asn/NativeEnumerated.h>
#include <liblte/rrc/asn/BIT_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_AreaInfo_r9__non_MBSFNregionLength {
	MBSFN_AreaInfo_r9__non_MBSFNregionLength_s1	= 0,
	MBSFN_AreaInfo_r9__non_MBSFNregionLength_s2	= 1
} e_MBSFN_AreaInfo_r9__non_MBSFNregionLength;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf32	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf64	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf128	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9_rf256	= 3
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_RepetitionPeriod_r9;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9_rf512	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9_rf1024	= 1
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__mcch_ModificationPeriod_r9;
typedef enum MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9 {
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n2	= 0,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n7	= 1,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n13	= 2,
	MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9_n19	= 3
} e_MBSFN_AreaInfo_r9__mcch_Config_r9__signallingMCS_r9;

/* MBSFN-AreaInfo-r9 */
typedef struct MBSFN_AreaInfo_r9 {
	long	 mbsfn_AreaId_r9;
	long	 non_MBSFNregionLength;
	long	 notificationIndicator_r9;
	struct MBSFN_AreaInfo_r9__mcch_Config_r9 {
		long	 mcch_RepetitionPeriod_r9;
		long	 mcch_Offset_r9;
		long	 mcch_ModificationPeriod_r9;
		BIT_STRING_t	 sf_AllocInfo_r9;
		long	 signallingMCS_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mcch_Config_r9;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_AreaInfo_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_non_MBSFNregionLength_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_RepetitionPeriod_r9_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcch_ModificationPeriod_r9_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_signallingMCS_r9_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_AreaInfo_r9_H_ */
#include <liblte/rrc/asn/asn_internal.h>
