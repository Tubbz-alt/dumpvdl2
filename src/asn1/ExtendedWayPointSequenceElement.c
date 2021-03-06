/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "ExtendedWayPointSequenceElement.h"

static asn_TYPE_member_t asn_MBR_ExtendedWayPointSequenceElement_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ExtendedWayPointSequenceElement, latitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ADSv2Latitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ExtendedWayPointSequenceElement, longitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ADSv2Longitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longitude"
		},
	{ ATF_POINTER, 9, offsetof(struct ExtendedWayPointSequenceElement, level),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_EPPLevel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"level"
		},
	{ ATF_POINTER, 8, offsetof(struct ExtendedWayPointSequenceElement, name),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_WaypointName,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"name"
		},
	{ ATF_POINTER, 7, offsetof(struct ExtendedWayPointSequenceElement, estimated_time),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ETA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"estimated-time"
		},
	{ ATF_POINTER, 6, offsetof(struct ExtendedWayPointSequenceElement, estimated_speed),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SpeedIASMach,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"estimated-speed"
		},
	{ ATF_POINTER, 5, offsetof(struct ExtendedWayPointSequenceElement, vertical_type),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_VerticalType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vertical-type"
		},
	{ ATF_POINTER, 4, offsetof(struct ExtendedWayPointSequenceElement, lateral_type),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LateralType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateral-type"
		},
	{ ATF_POINTER, 3, offsetof(struct ExtendedWayPointSequenceElement, level_constraint),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LevelConstraint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"level-constraint"
		},
	{ ATF_POINTER, 2, offsetof(struct ExtendedWayPointSequenceElement, speed_contraint),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SpeedConstraint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"speed-contraint"
		},
	{ ATF_POINTER, 1, offsetof(struct ExtendedWayPointSequenceElement, time_constraint),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RTA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"time-constraint"
		},
};
static const int asn_MAP_ExtendedWayPointSequenceElement_oms_1[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_ExtendedWayPointSequenceElement_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ExtendedWayPointSequenceElement_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* latitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* longitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* level */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* name */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* estimated-time */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* estimated-speed */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* vertical-type */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* lateral-type */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* level-constraint */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* speed-contraint */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* time-constraint */
};
static asn_SEQUENCE_specifics_t asn_SPC_ExtendedWayPointSequenceElement_specs_1 = {
	sizeof(struct ExtendedWayPointSequenceElement),
	offsetof(struct ExtendedWayPointSequenceElement, _asn_ctx),
	asn_MAP_ExtendedWayPointSequenceElement_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_ExtendedWayPointSequenceElement_oms_1,	/* Optional members */
	9, 0,	/* Root/Additions */
	10,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ExtendedWayPointSequenceElement = {
	"ExtendedWayPointSequenceElement",
	"ExtendedWayPointSequenceElement",
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
	asn_DEF_ExtendedWayPointSequenceElement_tags_1,
	sizeof(asn_DEF_ExtendedWayPointSequenceElement_tags_1)
		/sizeof(asn_DEF_ExtendedWayPointSequenceElement_tags_1[0]), /* 1 */
	asn_DEF_ExtendedWayPointSequenceElement_tags_1,	/* Same as above */
	sizeof(asn_DEF_ExtendedWayPointSequenceElement_tags_1)
		/sizeof(asn_DEF_ExtendedWayPointSequenceElement_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ExtendedWayPointSequenceElement_1,
	11,	/* Elements count */
	&asn_SPC_ExtendedWayPointSequenceElement_specs_1	/* Additional specs */
};

