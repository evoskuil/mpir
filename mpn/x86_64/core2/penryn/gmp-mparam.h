/* Generated by tuneup.c, 2010-03-24, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          19
#define MUL_TOOM3_THRESHOLD              56
#define MUL_TOOM4_THRESHOLD             154
#define MUL_TOOM8H_THRESHOLD            224

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          24
#define SQR_TOOM3_THRESHOLD              85
#define SQR_TOOM4_THRESHOLD             246
#define SQR_TOOM8_THRESHOLD             270

#define POWM_THRESHOLD                   64

#define GCD_ACCEL_THRESHOLD              64
#define GCDEXT_THRESHOLD                152
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 5
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                17
#define DIVREM_HENSEL_QR_1_THRESHOLD      8
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      3
#define DIVREM_EUCLID_HENSEL_THRESHOLD      8

#define ROOTREM_THRESHOLD                 6

#define GET_STR_DC_THRESHOLD             12
#define GET_STR_PRECOMPUTE_THRESHOLD     17
#define SET_STR_DC_THRESHOLD           6984
#define SET_STR_PRECOMPUTE_THRESHOLD  27317

#define MUL_FFT_TABLE  { 336, 800, 2112, 2816, 7168, 20480, 81920, 327680, 1835008, 5242880, 20971520, 0 }
#define MUL_FFT_MODF_THRESHOLD          400
#define MUL_FFT_FULL_THRESHOLD         2240

#define SQR_FFT_TABLE  { 336, 800, 1984, 2816, 7168, 20480, 81920, 327680, 1835008, 5242880, 20971520, 0 }
#define SQR_FFT_MODF_THRESHOLD          336
#define SQR_FFT_FULL_THRESHOLD         2112

#define MULLOW_BASECASE_THRESHOLD        17
#define MULLOW_DC_THRESHOLD              17
#define MULLOW_MUL_THRESHOLD           3754

#define MULHIGH_BASECASE_THRESHOLD       18
#define MULHIGH_DC_THRESHOLD             18
#define MULHIGH_MUL_THRESHOLD          3754

#define MULMOD_2EXPM1_THRESHOLD          16

#define FAC_UI_THRESHOLD              14657
#define DC_DIV_QR_THRESHOLD              41
#define DC_DIVAPPR_Q_N_THRESHOLD        122
#define INV_DIV_QR_THRESHOLD           2801
#define INV_DIVAPPR_Q_N_THRESHOLD       122
#define DC_DIV_Q_THRESHOLD              148
#define INV_DIV_Q_THRESHOLD            3762
#define DC_DIVAPPR_Q_THRESHOLD          124
#define INV_DIVAPPR_Q_THRESHOLD        8669
#define DC_BDIV_QR_THRESHOLD             48
#define DC_BDIV_Q_THRESHOLD              35
/* Tuneup completed successfully, took 3298 seconds */
