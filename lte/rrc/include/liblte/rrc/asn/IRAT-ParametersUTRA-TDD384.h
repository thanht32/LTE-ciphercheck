/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IRAT_ParametersUTRA_TDD384_H_
#define	_IRAT_ParametersUTRA_TDD384_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/SupportedBandListUTRA-TDD384.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersUTRA-TDD384 */
typedef struct IRAT_ParametersUTRA_TDD384 {
	SupportedBandListUTRA_TDD384_t	 supportedBandListUTRA_TDD384;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_TDD384_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_TDD384;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_TDD384_H_ */
#include <liblte/rrc/asn/asn_internal.h>
