// (C) Copyright Vesa Karvonen 2004.
//
// Distributed under the Boost Software License, Version 1.0.

#define ORDER_PP_DEF_8env_bind ORDER_PP_FN_CM(3,8ENV_BIND)
#define ORDER_PP_8ENV_BIND(P,s,e,v,...) (,(,P##s,P##v)P##e,P##__VA_ARGS__)

#define ORDER_PP_DEF_8env_nil 8DEF_CONST,,

#define ORDER_PP_DEF_8env_ref ORDER_PP_FN_MACRO_P(2,ORDER_PP_ENV_REF)

#define ORDER_PP_DEF_8env_to_seq_of_pairs ORDER_PP_FN_MACRO_P(1,ORDER_PP_ENV_TO_SEQ_OF_PAIRS)
#define ORDER_PP_ENV_TO_SEQ_OF_PAIRS(P,e) ORDER_PP_SEQ_TERMINATE(ORDER_PP_ENV_TO_SEQ_OF_PAIRS_A P##e)
#define ORDER_PP_ENV_TO_SEQ_OF_PAIRS_A(P,s,v) ((P##s,P##v))ORDER_PP_ENV_TO_SEQ_OF_PAIRS_B
#define ORDER_PP_ENV_TO_SEQ_OF_PAIRS_A0
#define ORDER_PP_ENV_TO_SEQ_OF_PAIRS_B(P,s,v) ((P##s,P##v))ORDER_PP_ENV_TO_SEQ_OF_PAIRS_A
#define ORDER_PP_ENV_TO_SEQ_OF_PAIRS_B0

#define ORDER_PP_DEF_8seq_of_pairs_to_env ORDER_PP_FN_MACRO_P(1,ORDER_PP_SEQ_OF_PAIRS_TO_ENV)
#define ORDER_PP_SEQ_OF_PAIRS_TO_ENV(P,s) ORDER_PP_SEQ_TERMINATE(ORDER_PP_SEQ_OF_PAIRS_TO_ENV_A P##s)
#define ORDER_PP_SEQ_OF_PAIRS_TO_ENV_A(p) (,ORDER_PP_REM p)ORDER_PP_SEQ_OF_PAIRS_TO_ENV_B
#define ORDER_PP_SEQ_OF_PAIRS_TO_ENV_A0
#define ORDER_PP_SEQ_OF_PAIRS_TO_ENV_B(p) (,ORDER_PP_REM p)ORDER_PP_SEQ_OF_PAIRS_TO_ENV_A
#define ORDER_PP_SEQ_OF_PAIRS_TO_ENV_B0
