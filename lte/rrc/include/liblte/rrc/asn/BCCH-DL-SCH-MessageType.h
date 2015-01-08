/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BCCH_DL_SCH_MessageType_H_
#define	_BCCH_DL_SCH_MessageType_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/SystemInformation.h"
#include "liblte/rrc/asn/SystemInformationBlockType1.h"
#include <liblte/rrc/asn/constr_CHOICE.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BCCH_DL_SCH_MessageType_PR {
	BCCH_DL_SCH_MessageType_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType_PR_c1,
	BCCH_DL_SCH_MessageType_PR_messageClassExtension
} BCCH_DL_SCH_MessageType_PR;
typedef enum BCCH_DL_SCH_MessageType__c1_PR {
	BCCH_DL_SCH_MessageType__c1_PR_NOTHING,	/* No components present */
	BCCH_DL_SCH_MessageType__c1_PR_systemInformation,
	BCCH_DL_SCH_MessageType__c1_PR_systemInformationBlockType1
} BCCH_DL_SCH_MessageType__c1_PR;

/* BCCH-DL-SCH-MessageType */
typedef struct BCCH_DL_SCH_MessageType {
	BCCH_DL_SCH_MessageType_PR present;
	union BCCH_DL_SCH_MessageType_u {
		struct BCCH_DL_SCH_MessageType__c1 {
			BCCH_DL_SCH_MessageType__c1_PR present;
			union BCCH_DL_SCH_MessageType__c1_u {
				SystemInformation_t	 systemInformation;
				SystemInformationBlockType1_t	 systemInformationBlockType1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct BCCH_DL_SCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BCCH_DL_SCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BCCH_DL_SCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _BCCH_DL_SCH_MessageType_H_ */
#include <liblte/rrc/asn/asn_internal.h>
