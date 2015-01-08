/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "liblte/rrc/asn/SystemInformationBlockType2.h"

static int
ul_Bandwidth_10_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
ul_Bandwidth_10_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
ul_Bandwidth_10_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
ul_Bandwidth_10_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_10_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
ul_Bandwidth_10_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_10_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
ul_Bandwidth_10_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
ul_Bandwidth_10_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
ul_Bandwidth_10_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	ul_Bandwidth_10_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_ul_Bandwidth_constr_10 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ac_BarringInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForEmergency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringForEmergency"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForMO_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringForMO-Signalling"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForMO_Data),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringForMO-Data"
		},
};
static int asn_MAP_ac_BarringInfo_oms_2[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_ac_BarringInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ac_BarringInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringForEmergency at 1467 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ac-BarringForMO-Signalling at 1468 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ac-BarringForMO-Data at 1469 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ac_BarringInfo_specs_2 = {
	sizeof(struct SystemInformationBlockType2__ac_BarringInfo),
	offsetof(struct SystemInformationBlockType2__ac_BarringInfo, _asn_ctx),
	asn_MAP_ac_BarringInfo_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_ac_BarringInfo_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringInfo_2 = {
	"ac-BarringInfo",
	"ac-BarringInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ac_BarringInfo_tags_2,
	sizeof(asn_DEF_ac_BarringInfo_tags_2)
		/sizeof(asn_DEF_ac_BarringInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_ac_BarringInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_ac_BarringInfo_tags_2)
		/sizeof(asn_DEF_ac_BarringInfo_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ac_BarringInfo_2,
	3,	/* Elements count */
	&asn_SPC_ac_BarringInfo_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_value2enum_10[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static unsigned int asn_MAP_ul_Bandwidth_enum2value_10[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_specs_10 = {
	asn_MAP_ul_Bandwidth_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_enum2value_10,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_ul_Bandwidth_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_10 = {
	"ul-Bandwidth",
	"ul-Bandwidth",
	ul_Bandwidth_10_free,
	ul_Bandwidth_10_print,
	ul_Bandwidth_10_constraint,
	ul_Bandwidth_10_decode_ber,
	ul_Bandwidth_10_encode_der,
	ul_Bandwidth_10_decode_xer,
	ul_Bandwidth_10_encode_xer,
	ul_Bandwidth_10_decode_uper,
	ul_Bandwidth_10_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ul_Bandwidth_tags_10,
	sizeof(asn_DEF_ul_Bandwidth_tags_10)
		/sizeof(asn_DEF_ul_Bandwidth_tags_10[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_tags_10,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_tags_10)
		/sizeof(asn_DEF_ul_Bandwidth_tags_10[0]), /* 2 */
	&asn_PER_type_ul_Bandwidth_constr_10,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_freqInfo_8[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2__freqInfo, ul_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CarrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2__freqInfo, ul_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-Bandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2__freqInfo, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSpectrumEmission"
		},
};
static int asn_MAP_freqInfo_oms_8[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_freqInfo_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_freqInfo_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq at 1474 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth at 1475 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmission at 1478 */
};
static asn_SEQUENCE_specifics_t asn_SPC_freqInfo_specs_8 = {
	sizeof(struct SystemInformationBlockType2__freqInfo),
	offsetof(struct SystemInformationBlockType2__freqInfo, _asn_ctx),
	asn_MAP_freqInfo_tag2el_8,
	3,	/* Count of tags in the map */
	asn_MAP_freqInfo_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqInfo_8 = {
	"freqInfo",
	"freqInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_freqInfo_tags_8,
	sizeof(asn_DEF_freqInfo_tags_8)
		/sizeof(asn_DEF_freqInfo_tags_8[0]) - 1, /* 1 */
	asn_DEF_freqInfo_tags_8,	/* Same as above */
	sizeof(asn_DEF_freqInfo_tags_8)
		/sizeof(asn_DEF_freqInfo_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_freqInfo_8,
	3,	/* Elements count */
	&asn_SPC_freqInfo_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, ac_BarringInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ac_BarringInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, radioResourceConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSIB,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, ue_TimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_TimersAndConstants,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-TimersAndConstants"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, freqInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_freqInfo_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"freqInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, mbsfn_SubframeConfigList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbsfn-SubframeConfigList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, timeAlignmentTimerCommon),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeAlignmentTimerCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType2, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType2, ssac_BarringForMMTEL_Voice_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ssac-BarringForMMTEL-Voice-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2, ssac_BarringForMMTEL_Video_r9),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ssac-BarringForMMTEL-Video-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, ac_BarringForCSFB_r10),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ac-BarringForCSFB-r10"
		},
};
static int asn_MAP_SystemInformationBlockType2_oms_1[] = { 0, 4, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringInfo at 1467 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceConfigCommon at 1471 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-TimersAndConstants at 1472 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqInfo at 1474 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mbsfn-SubframeConfigList at 1479 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* timeAlignmentTimerCommon at 1480 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension at 1481 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ssac-BarringForMMTEL-Voice-r9 at 1482 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ssac-BarringForMMTEL-Video-r9 at 1483 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* ac-BarringForCSFB-r10 at 1484 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_specs_1 = {
	sizeof(struct SystemInformationBlockType2),
	offsetof(struct SystemInformationBlockType2, _asn_ctx),
	asn_MAP_SystemInformationBlockType2_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType2_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2 = {
	"SystemInformationBlockType2",
	"SystemInformationBlockType2",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SystemInformationBlockType2_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType2_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType2_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType2_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType2_1,
	10,	/* Elements count */
	&asn_SPC_SystemInformationBlockType2_specs_1	/* Additional specs */
};

