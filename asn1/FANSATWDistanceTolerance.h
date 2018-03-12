/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSATWDistanceTolerance_H_
#define	_FANSATWDistanceTolerance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSATWDistanceTolerance {
	FANSATWDistanceTolerance_plus	= 0,
	FANSATWDistanceTolerance_minus	= 1
} e_FANSATWDistanceTolerance;

/* FANSATWDistanceTolerance */
typedef long	 FANSATWDistanceTolerance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATWDistanceTolerance;
asn_struct_free_f FANSATWDistanceTolerance_free;
asn_struct_print_f FANSATWDistanceTolerance_print;
asn_constr_check_f FANSATWDistanceTolerance_constraint;
ber_type_decoder_f FANSATWDistanceTolerance_decode_ber;
der_type_encoder_f FANSATWDistanceTolerance_encode_der;
xer_type_decoder_f FANSATWDistanceTolerance_decode_xer;
xer_type_encoder_f FANSATWDistanceTolerance_encode_xer;
per_type_decoder_f FANSATWDistanceTolerance_decode_uper;
per_type_encoder_f FANSATWDistanceTolerance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSATWDistanceTolerance_H_ */
#include <asn_internal.h>
