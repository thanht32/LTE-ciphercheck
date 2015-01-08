/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DRB_ToReleaseList_H_
#define	_DRB_ToReleaseList_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/DRB-Identity.h"
#include <liblte/rrc/asn/asn_SEQUENCE_OF.h>
#include <liblte/rrc/asn/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DRB-ToReleaseList */
typedef struct DRB_ToReleaseList {
	A_SEQUENCE_OF(DRB_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToReleaseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToReleaseList;

#ifdef __cplusplus
}
#endif

#endif	/* _DRB_ToReleaseList_H_ */
#include <liblte/rrc/asn/asn_internal.h>
