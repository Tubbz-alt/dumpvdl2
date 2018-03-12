/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSVerticalChange.h"

static asn_TYPE_member_t asn_MBR_FANSVerticalChange_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSVerticalChange, verticalDirection),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FANSVerticalDirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"verticalDirection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSVerticalChange, verticalRate),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_FANSVerticalRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"verticalRate"
		},
};
static const ber_tlv_tag_t asn_DEF_FANSVerticalChange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSVerticalChange_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 }, /* verticalDirection */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 1, 0, 0 }, /* verticalRateEnglish */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* verticalRateMetric */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSVerticalChange_specs_1 = {
	sizeof(struct FANSVerticalChange),
	offsetof(struct FANSVerticalChange, _asn_ctx),
	asn_MAP_FANSVerticalChange_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSVerticalChange = {
	"FANSVerticalChange",
	"FANSVerticalChange",
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
	asn_DEF_FANSVerticalChange_tags_1,
	sizeof(asn_DEF_FANSVerticalChange_tags_1)
		/sizeof(asn_DEF_FANSVerticalChange_tags_1[0]), /* 1 */
	asn_DEF_FANSVerticalChange_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSVerticalChange_tags_1)
		/sizeof(asn_DEF_FANSVerticalChange_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSVerticalChange_1,
	2,	/* Elements count */
	&asn_SPC_FANSVerticalChange_specs_1	/* Additional specs */
};

