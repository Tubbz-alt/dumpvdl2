/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSHoldatwaypointsequence_H_
#define	_FANSHoldatwaypointsequence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSHoldatwaypoint;

/* FANSHoldatwaypointsequence */
typedef struct FANSHoldatwaypointsequence {
	A_SEQUENCE_OF(struct FANSHoldatwaypoint) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSHoldatwaypointsequence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSHoldatwaypointsequence;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSHoldatwaypoint.h"

#endif	/* _FANSHoldatwaypointsequence_H_ */
#include <asn_internal.h>
