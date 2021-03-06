/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMADSCAPDUVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_pmadsc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_NonCompliance_H_
#define	_NonCompliance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ContractType.h"
#include "ICNonCompliance.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NonCompliance */
typedef struct NonCompliance {
	ContractType_t	 contract_type;
	ICNonCompliance_t	 ic_ncn;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonCompliance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NonCompliance;

#ifdef __cplusplus
}
#endif

#endif	/* _NonCompliance_H_ */
#include "asn_internal.h"
