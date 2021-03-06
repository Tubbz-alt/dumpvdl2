/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_LateralType_H_
#define	_LateralType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "LateralTypeOffsetStart.h"
#include "LateralTypeOffsetReached.h"
#include "LateralTypeReturnToParentPathInitiation.h"
#include "LateralTypeOffsetEnd.h"
#include "LateralTypeOffset.h"
#include "LateralTypeOverfly.h"
#include "LateralTypeFlightPlanWayPoint.h"
#include "LateralTypeFollowedByDisco.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TurnRadiusO;

/* LateralType */
typedef struct LateralType {
	struct TurnRadiusO	*flyby	/* OPTIONAL */;
	struct TurnRadiusO	*fixedRadiusTransition	/* OPTIONAL */;
	LateralTypeOffsetStart_t	*offsetStart	/* OPTIONAL */;
	LateralTypeOffsetReached_t	*offsetReached	/* OPTIONAL */;
	LateralTypeReturnToParentPathInitiation_t	*returnToParentPathInitiation	/* OPTIONAL */;
	LateralTypeOffsetEnd_t	*offsetEnd	/* OPTIONAL */;
	LateralTypeOffset_t	*offset	/* OPTIONAL */;
	LateralTypeOverfly_t	*overfly	/* OPTIONAL */;
	LateralTypeFlightPlanWayPoint_t	*flightPlanWayPoint	/* OPTIONAL */;
	LateralTypeFollowedByDisco_t	*followedByDisco	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LateralType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LateralType;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LateralTypeFlyby.h"
#include "LateralTypeFixedRadiusTransition.h"

#endif	/* _LateralType_H_ */
#include "asn_internal.h"
