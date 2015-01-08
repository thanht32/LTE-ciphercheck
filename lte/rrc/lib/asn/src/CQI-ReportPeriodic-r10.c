/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "liblte/rrc/asn/CQI-ReportPeriodic-r10.h"

static int
csi_ReportMode_r10_9_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
csi_ReportMode_r10_9_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
csi_ReportMode_r10_9_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
csi_ReportMode_r10_9_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
csi_ReportMode_r10_9_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
csi_ReportMode_r10_9_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
csi_ReportMode_r10_9_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
csi_ReportMode_r10_9_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
csi_ReportMode_r10_9_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
csi_ReportMode_r10_9_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	csi_ReportMode_r10_9_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
periodicityFactor_r10_14_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
periodicityFactor_r10_14_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
periodicityFactor_r10_14_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
periodicityFactor_r10_14_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
periodicityFactor_r10_14_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
periodicityFactor_r10_14_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
periodicityFactor_r10_14_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
periodicityFactor_r10_14_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
periodicityFactor_r10_14_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
periodicityFactor_r10_14_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	periodicityFactor_r10_14_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_k_constraint_12(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
cqi_Mask_r9_19_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
cqi_Mask_r9_19_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
cqi_Mask_r9_19_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
cqi_Mask_r9_19_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
cqi_Mask_r9_19_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
cqi_Mask_r9_19_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
cqi_Mask_r9_19_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
cqi_Mask_r9_19_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
cqi_Mask_r9_19_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
cqi_Mask_r9_19_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	cqi_Mask_r9_19_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_cqi_pmi_ConfigIndex2_r10_constraint_23(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ri_ConfigIndex2_r10_constraint_23(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_PUCCH_ResourceIndex_r10_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1184)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_PUCCH_ResourceIndexP1_r10_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1184)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cqi_pmi_ConfigIndex_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ri_ConfigIndex_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_csi_ReportMode_r10_constr_9 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_periodicityFactor_r10_constr_14 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_k_constr_13 = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_FormatIndicatorPeriodic_r10_constr_7 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_cqi_Mask_r9_constr_19 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndex2_r10_constr_24 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndex2_r10_constr_25 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_csi_ConfigIndex_r10_constr_21 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_PUCCH_ResourceIndex_r10_constr_4 = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1184 }	/* (0..1184) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_PUCCH_ResourceIndexP1_r10_constr_5 = {
	{ APC_CONSTRAINED,	 11,  11,  0,  1184 }	/* (0..1184) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cqi_pmi_ConfigIndex_constr_6 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_ri_ConfigIndex_constr_17 = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CQI_ReportPeriodic_r10_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_csi_ReportMode_r10_value2enum_9[] = {
	{ 0,	8,	"submode1" },
	{ 1,	8,	"submode2" }
};
static unsigned int asn_MAP_csi_ReportMode_r10_enum2value_9[] = {
	0,	/* submode1(0) */
	1	/* submode2(1) */
};
static asn_INTEGER_specifics_t asn_SPC_csi_ReportMode_r10_specs_9 = {
	asn_MAP_csi_ReportMode_r10_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_csi_ReportMode_r10_enum2value_9,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_csi_ReportMode_r10_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_ReportMode_r10_9 = {
	"csi-ReportMode-r10",
	"csi-ReportMode-r10",
	csi_ReportMode_r10_9_free,
	csi_ReportMode_r10_9_print,
	csi_ReportMode_r10_9_constraint,
	csi_ReportMode_r10_9_decode_ber,
	csi_ReportMode_r10_9_encode_der,
	csi_ReportMode_r10_9_decode_xer,
	csi_ReportMode_r10_9_encode_xer,
	csi_ReportMode_r10_9_decode_uper,
	csi_ReportMode_r10_9_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_csi_ReportMode_r10_tags_9,
	sizeof(asn_DEF_csi_ReportMode_r10_tags_9)
		/sizeof(asn_DEF_csi_ReportMode_r10_tags_9[0]) - 1, /* 1 */
	asn_DEF_csi_ReportMode_r10_tags_9,	/* Same as above */
	sizeof(asn_DEF_csi_ReportMode_r10_tags_9)
		/sizeof(asn_DEF_csi_ReportMode_r10_tags_9[0]), /* 2 */
	&asn_PER_type_csi_ReportMode_r10_constr_9,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_csi_ReportMode_r10_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_widebandCQI_r10_8[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10, csi_ReportMode_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_csi_ReportMode_r10_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-ReportMode-r10"
		},
};
static int asn_MAP_widebandCQI_r10_oms_8[] = { 0 };
static ber_tlv_tag_t asn_DEF_widebandCQI_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_widebandCQI_r10_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* csi-ReportMode-r10 at 1906 */
};
static asn_SEQUENCE_specifics_t asn_SPC_widebandCQI_r10_specs_8 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10, _asn_ctx),
	asn_MAP_widebandCQI_r10_tag2el_8,
	1,	/* Count of tags in the map */
	asn_MAP_widebandCQI_r10_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_widebandCQI_r10_8 = {
	"widebandCQI-r10",
	"widebandCQI-r10",
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
	asn_DEF_widebandCQI_r10_tags_8,
	sizeof(asn_DEF_widebandCQI_r10_tags_8)
		/sizeof(asn_DEF_widebandCQI_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_widebandCQI_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_widebandCQI_r10_tags_8)
		/sizeof(asn_DEF_widebandCQI_r10_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_widebandCQI_r10_8,
	1,	/* Elements count */
	&asn_SPC_widebandCQI_r10_specs_8	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_periodicityFactor_r10_value2enum_14[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static unsigned int asn_MAP_periodicityFactor_r10_enum2value_14[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static asn_INTEGER_specifics_t asn_SPC_periodicityFactor_r10_specs_14 = {
	asn_MAP_periodicityFactor_r10_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_periodicityFactor_r10_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_periodicityFactor_r10_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r10_14 = {
	"periodicityFactor-r10",
	"periodicityFactor-r10",
	periodicityFactor_r10_14_free,
	periodicityFactor_r10_14_print,
	periodicityFactor_r10_14_constraint,
	periodicityFactor_r10_14_decode_ber,
	periodicityFactor_r10_14_encode_der,
	periodicityFactor_r10_14_decode_xer,
	periodicityFactor_r10_14_encode_xer,
	periodicityFactor_r10_14_decode_uper,
	periodicityFactor_r10_14_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_periodicityFactor_r10_tags_14,
	sizeof(asn_DEF_periodicityFactor_r10_tags_14)
		/sizeof(asn_DEF_periodicityFactor_r10_tags_14[0]) - 1, /* 1 */
	asn_DEF_periodicityFactor_r10_tags_14,	/* Same as above */
	sizeof(asn_DEF_periodicityFactor_r10_tags_14)
		/sizeof(asn_DEF_periodicityFactor_r10_tags_14[0]), /* 2 */
	&asn_PER_type_periodicityFactor_r10_constr_14,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_periodicityFactor_r10_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subbandCQI_r10_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, k),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_k_constraint_12,
		&asn_PER_memb_k_constr_13,
		0,
		"k"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, periodicityFactor_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_periodicityFactor_r10_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"periodicityFactor-r10"
		},
};
static ber_tlv_tag_t asn_DEF_subbandCQI_r10_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_subbandCQI_r10_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* k at 1909 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* periodicityFactor-r10 at 1910 */
};
static asn_SEQUENCE_specifics_t asn_SPC_subbandCQI_r10_specs_12 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10, _asn_ctx),
	asn_MAP_subbandCQI_r10_tag2el_12,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subbandCQI_r10_12 = {
	"subbandCQI-r10",
	"subbandCQI-r10",
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
	asn_DEF_subbandCQI_r10_tags_12,
	sizeof(asn_DEF_subbandCQI_r10_tags_12)
		/sizeof(asn_DEF_subbandCQI_r10_tags_12[0]) - 1, /* 1 */
	asn_DEF_subbandCQI_r10_tags_12,	/* Same as above */
	sizeof(asn_DEF_subbandCQI_r10_tags_12)
		/sizeof(asn_DEF_subbandCQI_r10_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_subbandCQI_r10_12,
	2,	/* Elements count */
	&asn_SPC_subbandCQI_r10_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_cqi_FormatIndicatorPeriodic_r10_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, choice.widebandCQI_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_widebandCQI_r10_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"widebandCQI-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, choice.subbandCQI_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_subbandCQI_r10_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subbandCQI-r10"
		},
};
static asn_TYPE_tag2member_t asn_MAP_cqi_FormatIndicatorPeriodic_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* widebandCQI-r10 at 1906 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subbandCQI-r10 at 1909 */
};
static asn_CHOICE_specifics_t asn_SPC_cqi_FormatIndicatorPeriodic_r10_specs_7 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10 *)0)->present),
	asn_MAP_cqi_FormatIndicatorPeriodic_r10_tag2el_7,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_FormatIndicatorPeriodic_r10_7 = {
	"cqi-FormatIndicatorPeriodic-r10",
	"cqi-FormatIndicatorPeriodic-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_cqi_FormatIndicatorPeriodic_r10_constr_7,
	asn_MBR_cqi_FormatIndicatorPeriodic_r10_7,
	2,	/* Elements count */
	&asn_SPC_cqi_FormatIndicatorPeriodic_r10_specs_7	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_cqi_Mask_r9_value2enum_19[] = {
	{ 0,	5,	"setup" }
};
static unsigned int asn_MAP_cqi_Mask_r9_enum2value_19[] = {
	0	/* setup(0) */
};
static asn_INTEGER_specifics_t asn_SPC_cqi_Mask_r9_specs_19 = {
	asn_MAP_cqi_Mask_r9_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_cqi_Mask_r9_enum2value_19,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_cqi_Mask_r9_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cqi_Mask_r9_19 = {
	"cqi-Mask-r9",
	"cqi-Mask-r9",
	cqi_Mask_r9_19_free,
	cqi_Mask_r9_19_print,
	cqi_Mask_r9_19_constraint,
	cqi_Mask_r9_19_decode_ber,
	cqi_Mask_r9_19_encode_der,
	cqi_Mask_r9_19_decode_xer,
	cqi_Mask_r9_19_encode_xer,
	cqi_Mask_r9_19_decode_uper,
	cqi_Mask_r9_19_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_cqi_Mask_r9_tags_19,
	sizeof(asn_DEF_cqi_Mask_r9_tags_19)
		/sizeof(asn_DEF_cqi_Mask_r9_tags_19[0]) - 1, /* 1 */
	asn_DEF_cqi_Mask_r9_tags_19,	/* Same as above */
	sizeof(asn_DEF_cqi_Mask_r9_tags_19)
		/sizeof(asn_DEF_cqi_Mask_r9_tags_19[0]), /* 2 */
	&asn_PER_type_cqi_Mask_r9_constr_19,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cqi_Mask_r9_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_23[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, cqi_pmi_ConfigIndex2_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_pmi_ConfigIndex2_r10_constraint_23,
		&asn_PER_memb_cqi_pmi_ConfigIndex2_r10_constr_24,
		0,
		"cqi-pmi-ConfigIndex2-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, ri_ConfigIndex2_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ri_ConfigIndex2_r10_constraint_23,
		&asn_PER_memb_ri_ConfigIndex2_r10_constr_25,
		0,
		"ri-ConfigIndex2-r10"
		},
};
static int asn_MAP_setup_oms_23[] = { 1 };
static ber_tlv_tag_t asn_DEF_setup_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_23[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-pmi-ConfigIndex2-r10 at 1919 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ri-ConfigIndex2-r10 at 1920 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_23 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_23,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_23,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_23 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_23,
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]) - 1, /* 1 */
	asn_DEF_setup_tags_23,	/* Same as above */
	sizeof(asn_DEF_setup_tags_23)
		/sizeof(asn_DEF_setup_tags_23[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_23,
	2,	/* Elements count */
	&asn_SPC_setup_specs_23	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_csi_ConfigIndex_r10_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_23,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_csi_ConfigIndex_r10_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 1917 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 1919 */
};
static asn_CHOICE_specifics_t asn_SPC_csi_ConfigIndex_r10_specs_21 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10 *)0)->present),
	asn_MAP_csi_ConfigIndex_r10_tag2el_21,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_csi_ConfigIndex_r10_21 = {
	"csi-ConfigIndex-r10",
	"csi-ConfigIndex-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_csi_ConfigIndex_r10_constr_21,
	asn_MBR_csi_ConfigIndex_r10_21,
	2,	/* Elements count */
	&asn_SPC_csi_ConfigIndex_r10_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_PUCCH_ResourceIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_PUCCH_ResourceIndex_r10_constraint_3,
		&asn_PER_memb_cqi_PUCCH_ResourceIndex_r10_constr_4,
		0,
		"cqi-PUCCH-ResourceIndex-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_PUCCH_ResourceIndexP1_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_PUCCH_ResourceIndexP1_r10_constraint_3,
		&asn_PER_memb_cqi_PUCCH_ResourceIndexP1_r10_constr_5,
		0,
		"cqi-PUCCH-ResourceIndexP1-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_pmi_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cqi_pmi_ConfigIndex_constraint_3,
		&asn_PER_memb_cqi_pmi_ConfigIndex_constr_6,
		0,
		"cqi-pmi-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_FormatIndicatorPeriodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_cqi_FormatIndicatorPeriodic_r10_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-FormatIndicatorPeriodic-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, ri_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_ri_ConfigIndex_constraint_3,
		&asn_PER_memb_ri_ConfigIndex_constr_17,
		0,
		"ri-ConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10__setup, simultaneousAckNackAndCQI),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"simultaneousAckNackAndCQI"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportPeriodic_r10__setup, cqi_Mask_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cqi_Mask_r9_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-Mask-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportPeriodic_r10__setup, csi_ConfigIndex_r10),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_csi_ConfigIndex_r10_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csi-ConfigIndex-r10"
		},
};
static int asn_MAP_setup_oms_3[] = { 1, 4, 6, 7 };
static ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-PUCCH-ResourceIndex-r10 at 1901 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cqi-PUCCH-ResourceIndexP1-r10 at 1902 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cqi-pmi-ConfigIndex at 1903 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cqi-FormatIndicatorPeriodic-r10 at 1907 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ri-ConfigIndex at 1913 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* simultaneousAckNackAndCQI at 1914 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cqi-Mask-r9 at 1915 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* csi-ConfigIndex-r10 at 1917 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct CQI_ReportPeriodic_r10__setup),
	offsetof(struct CQI_ReportPeriodic_r10__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	8,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
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
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_setup_3,
	8,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportPeriodic_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CQI_ReportPeriodic_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 1899 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 1901 */
};
static asn_CHOICE_specifics_t asn_SPC_CQI_ReportPeriodic_r10_specs_1 = {
	sizeof(struct CQI_ReportPeriodic_r10),
	offsetof(struct CQI_ReportPeriodic_r10, _asn_ctx),
	offsetof(struct CQI_ReportPeriodic_r10, present),
	sizeof(((struct CQI_ReportPeriodic_r10 *)0)->present),
	asn_MAP_CQI_ReportPeriodic_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic_r10 = {
	"CQI-ReportPeriodic-r10",
	"CQI-ReportPeriodic-r10",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_CQI_ReportPeriodic_r10_constr_1,
	asn_MBR_CQI_ReportPeriodic_r10_1,
	2,	/* Elements count */
	&asn_SPC_CQI_ReportPeriodic_r10_specs_1	/* Additional specs */
};

