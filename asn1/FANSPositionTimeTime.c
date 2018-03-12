/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSPositionTimeTime.h"

static int
memb_time_seqOf_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size == 2)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_time_seqOf_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_time_seqOf_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_time_seqOf_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FANSTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_time_seqOf_tags_3[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_time_seqOf_specs_3 = {
	sizeof(struct FANSPositionTimeTime__time_seqOf),
	offsetof(struct FANSPositionTimeTime__time_seqOf, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_time_seqOf_3 = {
	"time-seqOf",
	"time-seqOf",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_time_seqOf_tags_3,
	sizeof(asn_DEF_time_seqOf_tags_3)
		/sizeof(asn_DEF_time_seqOf_tags_3[0]), /* 1 */
	asn_DEF_time_seqOf_tags_3,	/* Same as above */
	sizeof(asn_DEF_time_seqOf_tags_3)
		/sizeof(asn_DEF_time_seqOf_tags_3[0]), /* 1 */
	&asn_PER_type_time_seqOf_constr_3,
	asn_MBR_time_seqOf_3,
	1,	/* Single element */
	&asn_SPC_time_seqOf_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_FANSPositionTimeTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPositionTimeTime, position),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSPosition,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"position"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPositionTimeTime, time_seqOf),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_time_seqOf_3,
		memb_time_seqOf_constraint_1,
		&asn_PER_memb_time_seqOf_constr_3,
		0,
		"time-seqOf"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSPositionTimeTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSPositionTimeTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 }, /* time-seqOf */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fixName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* navaid */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 }, /* airport */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 0, 0, 0 }, /* latitudeLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 0, 0, 0 } /* placeBearingDistance */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSPositionTimeTime_specs_1 = {
	sizeof(struct FANSPositionTimeTime),
	offsetof(struct FANSPositionTimeTime, _asn_ctx),
	asn_MAP_FANSPositionTimeTime_tag2el_1,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSPositionTimeTime = {
	"FANSPositionTimeTime",
	"FANSPositionTimeTime",
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
	asn_DEF_FANSPositionTimeTime_tags_1,
	sizeof(asn_DEF_FANSPositionTimeTime_tags_1)
		/sizeof(asn_DEF_FANSPositionTimeTime_tags_1[0]), /* 1 */
	asn_DEF_FANSPositionTimeTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSPositionTimeTime_tags_1)
		/sizeof(asn_DEF_FANSPositionTimeTime_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSPositionTimeTime_1,
	2,	/* Elements count */
	&asn_SPC_FANSPositionTimeTime_specs_1	/* Additional specs */
};

