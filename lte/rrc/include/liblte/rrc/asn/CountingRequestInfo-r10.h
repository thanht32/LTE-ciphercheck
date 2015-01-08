/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CountingRequestInfo_r10_H_
#define	_CountingRequestInfo_r10_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/TMGI-r9.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CountingRequestInfo-r10 */
typedef struct CountingRequestInfo_r10 {
	TMGI_r9_t	 tmgi_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountingRequestInfo_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountingRequestInfo_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _CountingRequestInfo_r10_H_ */
#include <liblte/rrc/asn/asn_internal.h>
