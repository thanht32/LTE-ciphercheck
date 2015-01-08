/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "EUTRA-InterNodeDefinitions.asn"
 */

#ifndef	_UERadioAccessCapabilityInformation_r8_IEs_H_
#define	_UERadioAccessCapabilityInformation_r8_IEs_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/OCTET_STRING.h>
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UERadioAccessCapabilityInformation-r8-IEs */
typedef struct UERadioAccessCapabilityInformation_r8_IEs {
	OCTET_STRING_t	 ue_RadioAccessCapabilityInfo;
	struct nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UERadioAccessCapabilityInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UERadioAccessCapabilityInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UERadioAccessCapabilityInformation_r8_IEs_H_ */
#include <liblte/rrc/asn/asn_internal.h>
