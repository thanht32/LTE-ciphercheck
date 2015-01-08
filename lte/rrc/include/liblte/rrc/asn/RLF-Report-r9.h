/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RLF_Report_r9_H_
#define	_RLF_Report_r9_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>
#include <liblte/rrc/asn/NativeEnumerated.h>
#include "liblte/rrc/asn/RSRP-Range.h"
#include "liblte/rrc/asn/RSRQ-Range.h"
#include <liblte/rrc/asn/constr_SEQUENCE.h>
#include "liblte/rrc/asn/CellGlobalIdEUTRA.h"
#include "liblte/rrc/asn/PhysCellId.h"
#include "liblte/rrc/asn/ARFCN-ValueEUTRA.h"
#include <liblte/rrc/asn/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLF_Report_r9__failedPCellId_r10_PR {
	RLF_Report_r9__failedPCellId_r10_PR_NOTHING,	/* No components present */
	RLF_Report_r9__failedPCellId_r10_PR_cellGlobalId_r10,
	RLF_Report_r9__failedPCellId_r10_PR_pci_arfcn_r10
} RLF_Report_r9__failedPCellId_r10_PR;
typedef enum RLF_Report_r9__connectionFailureType_r10 {
	RLF_Report_r9__connectionFailureType_r10_rlf	= 0,
	RLF_Report_r9__connectionFailureType_r10_hof	= 1
} e_RLF_Report_r9__connectionFailureType_r10;

/* Forward declarations */
struct LocationInfo_r10;
struct CellGlobalIdEUTRA;
struct MeasResultList2EUTRA_r9;
struct MeasResultList2UTRA_r9;
struct MeasResultListGERAN;
struct MeasResultList2CDMA2000_r9;

/* RLF-Report-r9 */
typedef struct RLF_Report_r9 {
	struct RLF_Report_r9__measResultLastServCell_r9 {
		RSRP_Range_t	 rsrpResult_r9;
		RSRQ_Range_t	*rsrqResult_r9	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultLastServCell_r9;
	struct RLF_Report_r9__measResultNeighCells_r9 {
		struct MeasResultList2EUTRA_r9	*measResultListEUTRA_r9	/* OPTIONAL */;
		struct MeasResultList2UTRA_r9	*measResultListUTRA_r9	/* OPTIONAL */;
		struct MeasResultListGERAN	*measResultListGERAN_r9	/* OPTIONAL */;
		struct MeasResultList2CDMA2000_r9	*measResultsCDMA2000_r9	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells_r9;
	struct LocationInfo_r10	*locationInfo_r10	/* OPTIONAL */;
	struct RLF_Report_r9__failedPCellId_r10 {
		RLF_Report_r9__failedPCellId_r10_PR present;
		union RLF_Report_r9__failedPCellId_r10_u {
			CellGlobalIdEUTRA_t	 cellGlobalId_r10;
			struct RLF_Report_r9__failedPCellId_r10__pci_arfcn_r10 {
				PhysCellId_t	 physCellId_r10;
				ARFCN_ValueEUTRA_t	 carrierFreq_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} pci_arfcn_r10;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *failedPCellId_r10;
	struct CellGlobalIdEUTRA	*reestablishmentCellId_r10	/* OPTIONAL */;
	long	*timeConnFailure_r10	/* OPTIONAL */;
	long	*connectionFailureType_r10	/* OPTIONAL */;
	struct CellGlobalIdEUTRA	*previousPCellId_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_Report_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_connectionFailureType_r10_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLF_Report_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "liblte/rrc/asn/LocationInfo-r10.h"
#include "liblte/rrc/asn/CellGlobalIdEUTRA.h"
#include "liblte/rrc/asn/MeasResultList2EUTRA-r9.h"
#include "liblte/rrc/asn/MeasResultList2UTRA-r9.h"
#include "liblte/rrc/asn/MeasResultListGERAN.h"
#include "liblte/rrc/asn/MeasResultList2CDMA2000-r9.h"

#endif	/* _RLF_Report_r9_H_ */
#include <liblte/rrc/asn/asn_internal.h>
