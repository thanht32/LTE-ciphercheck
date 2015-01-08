/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SCellToAddMod_r10_H_
#define	_SCellToAddMod_r10_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include "liblte/rrc/asn/SCellIndex-r10.h"
#include "liblte/rrc/asn/PhysCellId.h"
#include "liblte/rrc/asn/ARFCN-ValueEUTRA.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigCommonSCell_r10;
struct RadioResourceConfigDedicatedSCell_r10;

/* SCellToAddMod-r10 */
typedef struct SCellToAddMod_r10 {
	SCellIndex_r10_t	 sCellIndex_r10;
	struct SCellToAddMod_r10__cellIdentification_r10 {
		PhysCellId_t	 physCellId_r10;
		ARFCN_ValueEUTRA_t	 dl_CarrierFreq_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellIdentification_r10;
	struct RadioResourceConfigCommonSCell_r10	*radioResourceConfigCommonSCell_r10	/* OPTIONAL */;
	struct RadioResourceConfigDedicatedSCell_r10	*radioResourceConfigDedicatedSCell_r10	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCellToAddMod_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCellToAddMod_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/RadioResourceConfigCommonSCell-r10.h"
#include "liblte/rrc/asn/RadioResourceConfigDedicatedSCell-r10.h"

#endif	/* _SCellToAddMod_r10_H_ */
#include <liblte/rrc/asn/asn_internal.h>
