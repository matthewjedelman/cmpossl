/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/cmp.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_CMP,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_CMP,0,reason)

static ERR_STRING_DATA CMP_str_functs[] = {
    {ERR_FUNC(CMP_F_CMP_CALC_PROTECTION_PBMAC), "CMP_calc_protection_pbmac"},
    {ERR_FUNC(CMP_F_CMP_CALC_PROTECTION_SIG), "CMP_calc_protection_sig"},
    {ERR_FUNC(CMP_F_CMP_CERTCONF_NEW), "CMP_certConf_new"},
    {ERR_FUNC(CMP_F_CMP_CERTORENCCERT_ENCCERT_GET1),
     "CMP_CERTORENCCERT_encCert_get1"},
    {ERR_FUNC(CMP_F_CMP_CERTREPMESSAGE_CERTRESPONSE_GET0),
     "CMP_CERTREPMESSAGE_certResponse_get0"},
    {ERR_FUNC(CMP_F_CMP_CERTREQ_NEW), "CMP_certreq_new"},
    {ERR_FUNC(CMP_F_CMP_CERTRESPONSE_GET_CERTIFICATE),
     "CMP_CERTRESPONSE_get_certificate"},
    {ERR_FUNC(CMP_F_CMP_CERTSTATUS_SET_CERTHASH),
     "CMP_CERTSTATUS_set_certHash"},
    {ERR_FUNC(CMP_F_CMP_CTX_CAPUBS_GET1), "CMP_CTX_caPubs_get1"},
    {ERR_FUNC(CMP_F_CMP_CTX_CAPUBS_NUM), "CMP_CTX_caPubs_num"},
    {ERR_FUNC(CMP_F_CMP_CTX_CAPUBS_POP), "CMP_CTX_caPubs_pop"},
    {ERR_FUNC(CMP_F_CMP_CTX_CREATE), "CMP_CTX_create"},
    {ERR_FUNC(CMP_F_CMP_CTX_EXTRACERTSIN_GET1), "CMP_CTX_extraCertsIn_get1"},
    {ERR_FUNC(CMP_F_CMP_CTX_EXTRACERTSIN_NUM), "CMP_CTX_extraCertsIn_num"},
    {ERR_FUNC(CMP_F_CMP_CTX_EXTRACERTSIN_POP), "CMP_CTX_extraCertsIn_pop"},
    {ERR_FUNC(CMP_F_CMP_CTX_EXTRACERTSOUT_NUM), "CMP_CTX_extraCertsOut_num"},
    {ERR_FUNC(CMP_F_CMP_CTX_EXTRACERTSOUT_PUSH1),
     "CMP_CTX_extraCertsOut_push1"},
    {ERR_FUNC(CMP_F_CMP_CTX_INIT), "CMP_CTX_init"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET0_NEWPKEY), "CMP_CTX_set0_newPkey"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET0_PKEY), "CMP_CTX_set0_pkey"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET0_REQEXTENSIONS),
     "CMP_CTX_set0_reqExtensions"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET0_TLSBIO), "CMP_CTX_set0_tlsBIO"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_CAPUBS), "CMP_CTX_set1_caPubs"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_CLCERT), "CMP_CTX_set1_clCert"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_EXTRACERTSIN), "CMP_CTX_set1_extraCertsIn"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_EXTRACERTSOUT),
     "CMP_CTX_set1_extraCertsOut"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_ISSUER), "CMP_CTX_set1_issuer"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_NEWCLCERT), "CMP_CTX_set1_newClCert"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_NEWPKEY), "CMP_CTX_set1_newPkey"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_OLDCLCERT), "CMP_CTX_set1_oldClCert"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_P10CSR), "CMP_CTX_set1_p10CSR"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_PKEY), "CMP_CTX_set1_pkey"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_PROXYNAME), "CMP_CTX_set1_proxyName"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_RECIPIENT), "CMP_CTX_set1_recipient"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_RECIPNONCE), "CMP_CTX_set1_recipNonce"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_RECIP_USED), "CMP_CTX_set1_recip_used"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_REFERENCEVALUE),
     "CMP_CTX_set1_referenceValue"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_REGTOKEN), "CMP_CTX_set1_regToken"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_SECRETVALUE), "CMP_CTX_set1_secretValue"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_SERVERNAME), "CMP_CTX_set1_serverName"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_SERVERPATH), "CMP_CTX_set1_serverPath"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_SRVCERT), "CMP_CTX_set1_srvCert"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_SUBJECTNAME), "CMP_CTX_set1_subjectName"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET1_TRANSACTIONID),
     "CMP_CTX_set1_transactionID"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET_PROXYPORT), "CMP_CTX_set_proxyPort"},
    {ERR_FUNC(CMP_F_CMP_CTX_SET_SERVERPORT), "CMP_CTX_set_serverPort"},
    {ERR_FUNC(CMP_F_CMP_CTX_SUBJECTALTNAME_PUSH1),
     "CMP_CTX_subjectAltName_push1"},
    {ERR_FUNC(CMP_F_CMP_ERROR_NEW), "CMP_error_new"},
    {ERR_FUNC(CMP_F_CMP_EXEC_CR_SES), "CMP_exec_CR_ses"},
    {ERR_FUNC(CMP_F_CMP_EXEC_GENM_SES), "CMP_exec_GENM_ses"},
    {ERR_FUNC(CMP_F_CMP_EXEC_IR_SES), "CMP_exec_IR_ses"},
    {ERR_FUNC(CMP_F_CMP_EXEC_KUR_SES), "CMP_exec_KUR_ses"},
    {ERR_FUNC(CMP_F_CMP_EXEC_P10CR_SES), "CMP_exec_P10CR_ses"},
    {ERR_FUNC(CMP_F_CMP_EXEC_RR_SES), "CMP_exec_RR_ses"},
    {ERR_FUNC(CMP_F_CMP_GENM_NEW), "CMP_genm_new"},
    {ERR_FUNC(CMP_F_CMP_PKIHEADER_GENERALINFO_ITEM_PUSH0),
     "CMP_PKIHEADER_generalInfo_item_push0"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_GENERALINFO_ITEMS_PUSH1),
     "CMP_PKIMESSAGE_generalInfo_items_push1"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_GENM_ITEMS_PUSH1),
     "CMP_PKIMESSAGE_genm_items_push1"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_GENM_ITEM_PUSH0),
     "CMP_PKIMESSAGE_genm_item_push0"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_HTTP_PERFORM),
     "CMP_PKIMESSAGE_http_perform"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_POLLRESPONSE_GET0),
     "CMP_PKIMESSAGE_pollResponse_get0"},
    {ERR_FUNC(CMP_F_CMP_PKIMESSAGE_PROTECT), "CMP_PKIMESSAGE_protect"},
    {ERR_FUNC(CMP_F_CMP_PKISTATUSINFO_PKISTATUS_GET),
     "CMP_PKISTATUSINFO_PKIStatus_get"},
    {ERR_FUNC(CMP_F_CMP_PKISTATUSINFO_PKISTATUS_GET_STRING),
     "CMP_PKISTATUSINFO_PKIStatus_get_string"},
    {ERR_FUNC(CMP_F_CMP_POLLREQ_NEW), "CMP_pollReq_new"},
    {ERR_FUNC(CMP_F_CMP_REVREPCONTENT_PKISTATUSINFO_GET),
     "CMP_REVREPCONTENT_PKIStatusInfo_get"},
    {ERR_FUNC(CMP_F_CMP_RR_NEW), "CMP_rr_new"},
    {ERR_FUNC(CMP_F_CMP_VALIDATE_CERT_PATH), "CMP_validate_cert_path"},
    {ERR_FUNC(CMP_F_CMP_VALIDATE_MSG), "CMP_validate_msg"},
    {ERR_FUNC(CMP_F_CMP_VERIFY_SIGNATURE), "CMP_verify_signature"},
    {ERR_FUNC(CMP_F_EXCHANGE_CERTCONF), "exchange_certConf"},
    {ERR_FUNC(CMP_F_EXCHANGE_ERROR), "exchange_error"},
    {ERR_FUNC(CMP_F_GET_CERT_STATUS), "get_cert_status"},
    {ERR_FUNC(CMP_F_POLLFORRESPONSE), "pollForResponse"},
    {ERR_FUNC(CMP_F_SET_SRVCERT), "set_srvCert"},
    {0, NULL}
};

static ERR_STRING_DATA CMP_str_reasons[] = {
    {ERR_REASON(CMP_R_ALGORITHM_NOT_SUPPORTED), "algorithm not supported"},
    {ERR_REASON(CMP_R_CERTIFICATE_NOT_ACCEPTED), "certificate not accepted"},
    {ERR_REASON(CMP_R_CERTIFICATE_NOT_FOUND), "certificate not found"},
    {ERR_REASON(CMP_R_CERTRESPONSE_NOT_FOUND), "certresponse not found"},
    {ERR_REASON(CMP_R_CERT_AND_KEY_DO_NOT_MATCH),
     "cert and key do not match"},
    {ERR_REASON(CMP_R_CONNECT_TIMEOUT), "connect timeout"},
    {ERR_REASON(CMP_R_CP_NOT_RECEIVED), "cp not received"},
    {ERR_REASON(CMP_R_ENCOUNTERED_KEYUPDATEWARNING),
     "encountered keyupdatewarning"},
    {ERR_REASON(CMP_R_ENCOUNTERED_UNSUPPORTED_PKISTATUS),
     "encountered unsupported pkistatus"},
    {ERR_REASON(CMP_R_ENCOUNTERED_WAITING), "encountered waiting"},
    {ERR_REASON(CMP_R_OUT_OF_MEMORY), "out of memory"},
    {ERR_REASON(CMP_R_ERROR_CALCULATING_PROTECTION),
     "error calculating protection"},
    {ERR_REASON(CMP_R_ERROR_CREATING_CERTCONF), "error creating certconf"},
    {ERR_REASON(CMP_R_ERROR_CREATING_CR), "error creating cr"},
    {ERR_REASON(CMP_R_ERROR_CREATING_ERROR), "error creating error"},
    {ERR_REASON(CMP_R_ERROR_CREATING_GENM), "error creating genm"},
    {ERR_REASON(CMP_R_ERROR_CREATING_IR), "error creating ir"},
    {ERR_REASON(CMP_R_ERROR_CREATING_KUR), "error creating kur"},
    {ERR_REASON(CMP_R_ERROR_CREATING_P10CR), "error creating p10cr"},
    {ERR_REASON(CMP_R_ERROR_CREATING_POLLREQ), "error creating pollreq"},
    {ERR_REASON(CMP_R_ERROR_CREATING_RR), "error creating rr"},
    {ERR_REASON(CMP_R_ERROR_DECODING_CERTIFICATE),
     "error decoding certificate"},
    {ERR_REASON(CMP_R_ERROR_DECODING_MESSAGE),
     "error decoding response message"},
    {ERR_REASON(CMP_R_ERROR_DECRYPTING_CERTIFICATE),
     "error decrypting certificate"},
    {ERR_REASON(CMP_R_ERROR_DECRYPTING_ENCCERT), "error decrypting enccert"},
    {ERR_REASON(CMP_R_ERROR_DECRYPTING_KEY), "error decrypting key"},
    {ERR_REASON(CMP_R_ERROR_DECRYPTING_SYMMETRIC_KEY),
     "error decrypting symmetric key"},
    {ERR_REASON(CMP_R_ERROR_NONCES_DO_NOT_MATCH),
     "error nonces do not match"},
    {ERR_REASON(CMP_R_ERROR_PARSING_PKISTATUS), "error parsing pkistatus"},
    {ERR_REASON(CMP_R_ERROR_PROTECTING_MESSAGE), "error protecting message"},
    {ERR_REASON(CMP_R_ERROR_PUSHING_GENERALINFO_ITEM),
     "error pushing generalinfo item"},
    {ERR_REASON(CMP_R_ERROR_PUSHING_GENERALINFO_ITEMS),
     "error pushing generalinfo items"},
    {ERR_REASON(CMP_R_ERROR_PUSHING_GENM_ITEMS), "error pushing genm items"},
    {ERR_REASON(CMP_R_ERROR_SENDER_GNAME_TYPE_NOT_SUPPORTED),
     "error sender gname type not supported"},
    {ERR_REASON(CMP_R_ERROR_SENDING_REQUEST), "error sending request"},
    {ERR_REASON(CMP_R_ERROR_SETTING_CERTHASH), "error setting certhash"},
    {ERR_REASON(CMP_R_ERROR_STATUS_NOT_FOUND), "error status not found"},
    {ERR_REASON(CMP_R_ERROR_TRANSACTIONID_UNMATCHED),
     "error transactionid unmatched"},
    {ERR_REASON(CMP_R_ERROR_UNEXPECTED_SENDER), "error unexpected sender"},
    {ERR_REASON(CMP_R_ERROR_VALIDATING_PROTECTION),
     "error validating protection"},
    {ERR_REASON(CMP_R_FAILED_TO_RECEIVE_PKIMESSAGE),
     "failed to receive pkimessage"},
    {ERR_REASON(CMP_R_FAILED_TO_SEND_REQUEST), "failed to send request"},
    {ERR_REASON(CMP_R_GENP_NOT_RECEIVED), "genp not received"},
    {ERR_REASON(CMP_R_INVALID_ARGS), "invalid args"},
    {ERR_REASON(CMP_R_INVALID_CONTEXT), "invalid context"},
    {ERR_REASON(CMP_R_INVALID_KEY), "invalid key"},
    {ERR_REASON(CMP_R_INVALID_PARAMETERS), "invalid parameters"},
    {ERR_REASON(CMP_R_IP_NOT_RECEIVED), "ip not received"},
    {ERR_REASON(CMP_R_KUP_NOT_RECEIVED), "kup not received"},
    {ERR_REASON(CMP_R_MISSING_KEY_INPUT_FOR_CREATING_PROTECTION),
     "missing key input for creating protection"},
    {ERR_REASON(CMP_R_NO_SECRET_VALUE_GIVEN_FOR_PBMAC),
     "no secret value given for pbmac"},
    {ERR_REASON(CMP_R_NO_TRUSTED_CERTIFICATES_SET),
     "no trusted certificates set"},
    {ERR_REASON(CMP_R_NO_VALID_SRVCERT_FOUND), "no valid srvcert found"},
    {ERR_REASON(CMP_R_NULL_ARGUMENT), "null argument"},
    {ERR_REASON(CMP_R_PKIBODY_ERROR), "pkibody error"},
    {ERR_REASON(CMP_R_PKICONF_NOT_RECEIVED), "pkiconf not received"},
    {ERR_REASON(CMP_R_POLLREP_NOT_RECEIVED), "pollrep not received"},
    {ERR_REASON(CMP_R_READ_TIMEOUT), "read timeout"},
    {ERR_REASON(CMP_R_RECEIVED_NEGATIVE_CHECKAFTER_IN_POLLREP),
     "received negative checkafter in pollrep"},
    {ERR_REASON(CMP_R_REQUEST_REJECTED_BY_CA), "request rejected by ca"},
    {ERR_REASON(CMP_R_RP_NOT_RECEIVED), "rp not received"},
    {ERR_REASON(CMP_R_SENDER_GENERALNAME_TYPE_NOT_SUPPORTED),
     "sender generalname type not supported"},
    {ERR_REASON(CMP_R_SERVER_NOT_REACHABLE), "server not reachable"},
    {ERR_REASON(CMP_R_UNEXPECTED_PKIBODY), "unexpected pkibody"},
    {ERR_REASON(CMP_R_UNEXPECTED_PKISTATUS), "unexpected pkistatus"},
    {ERR_REASON(CMP_R_UNEXPECTED_SENDER), "unexpected sender"},
    {ERR_REASON(CMP_R_UNKNOWN_ALGORITHM_ID), "unknown algorithm id"},
    {ERR_REASON(CMP_R_UNKNOWN_CERTTYPE), "unknown certtype"},
    {ERR_REASON(CMP_R_UNKNOWN_PKISTATUS), "unknown pkistatus"},
    {ERR_REASON(CMP_R_UNSUPPORTED_ALGORITHM), "unsupported algorithm"},
    {ERR_REASON(CMP_R_UNSUPPORTED_CIPHER), "unsupported cipher"},
    {ERR_REASON(CMP_R_UNSUPPORTED_KEY_TYPE), "unsupported key type"},
    {ERR_REASON(CMP_R_UNSUPPORTED_PROTECTION_ALG_DHBASEDMAC),
     "unsupported protection alg dhbasedmac"},
    {ERR_REASON(CMP_R_WRONG_ALGORITHM_OID), "wrong algorithm oid"},
    {ERR_REASON(CMP_R_WRONG_KEY_USAGE), "wrong key usage"},
    {ERR_REASON(CMP_R_SENDER_GENERALNAME_TYPE_NOT_SUPPORTED), "sender name not supported"},
    {0, NULL}
};

#endif

int ERR_load_CMP_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(CMP_str_functs[0].error) == NULL) {
        ERR_load_strings(0, CMP_str_functs);
        ERR_load_strings(0, CMP_str_reasons);
    }
#endif
    return 1;
}
