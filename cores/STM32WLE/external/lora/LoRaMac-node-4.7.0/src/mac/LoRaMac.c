# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __SOFTFP__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define stm32wle5xx 1
#define SUPPORT_LORA 1
#define SUPPORT_LORA_P2P 1
#define LORA_IO_SPI_PORT 2
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define RAK3372 +RAK5005-O_V1.0 1
#define rak3172 1
#define CORE_CM4 1
#define USE_HAL_DRIVER 1
#define STM32WLE5xx 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define REGION_LA915 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_SPI 1
#define SUPPORT_AT 1
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
#define __UTILITIES_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h" 2





# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
typedef enum LmnStatus_e
{
  LMN_STATUS_ERROR = 0,
  LMN_STATUS_OK = !LMN_STATUS_ERROR
} LmnStatus_t;
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 61 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
#define POW2(n) ( 1 << n )




typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 101 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 112 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 132 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 178 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 201 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/boards/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 1
# 53 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
#define __REGION_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 62 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 1
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
#define __LORAMAC_H__ 
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h"
#define __TIMER_H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h" 1
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
#define UTIL_TIME_SERVER_H__ 
# 58 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 




# 143 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 181 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef unsigned int size_t;
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_compiler.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_compiler.h"
#define __CMSIS_COMPILER_H 
# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_compiler.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __CMSIS_GCC_H 


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __ASM __asm


#define __INLINE inline


#define __STATIC_INLINE static inline


#define __STATIC_FORCEINLINE __attribute__((always_inline)) static inline


#define __NO_RETURN __attribute__((__noreturn__))


#define __USED __attribute__((used))


#define __WEAK __attribute__((weak))


#define __PACKED __attribute__((packed, aligned(1)))


#define __PACKED_STRUCT struct __attribute__((packed, aligned(1)))


#define __PACKED_UNION union __attribute__((packed, aligned(1)))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  
# 74 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
 struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32(x) (((struct T_UINT32 *)(x))->v)


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT16_WRITE(addr,val) (void)((((struct T_UINT16_WRITE *)(void *)(addr))->v) = (val))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT16_READ(addr) (((const struct T_UINT16_READ *)(const void *)(addr))->v)


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32_WRITE(addr,val) (void)((((struct T_UINT32_WRITE *)(void *)(addr))->v) = (val))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32_READ(addr) (((const struct T_UINT32_READ *)(const void *)(addr))->v)


#define __ALIGNED(x) __attribute__((aligned(x)))


#define __RESTRICT __restrict


#define __COMPILER_BARRIER() __ASM volatile("":::"memory")
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}

#define __PROGRAM_START __cmsis_start



#define __INITIAL_SP __StackTop



#define __STACK_LIMIT __StackLimit



#define __VECTOR_TABLE __Vectors



#define __VECTOR_TABLE_ATTRIBUTE __attribute((used, section(".vectors")))
# 196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 368 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 506 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 558 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 624 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 833 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{
# 849 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
  return(0U);

}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{
# 872 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
  (void)fpscr;

}
# 894 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __CMSIS_GCC_OUT_REG(r) "=r" (r)
#define __CMSIS_GCC_RW_REG(r) "+r" (r)
#define __CMSIS_GCC_USE_REG(r) "r" (r)






#define __NOP() __ASM volatile ("nop")





#define __WFI() __ASM volatile ("wfi")







#define __WFE() __ASM volatile ("wfe")






#define __SEV() __ASM volatile ("sev")
# 933 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 967 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 986 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 1001 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 1021 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 1039 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __BKPT(value) __ASM volatile ("bkpt "#value)
# 1048 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1068 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
  return result;
}
# 1078 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1089 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 1129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 1151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1168 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __SSAT(ARG1,ARG2) __extension__ ({ int32_t __RES, __ARG1 = (ARG1); __ASM ("ssat %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })
# 1252 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __USAT(ARG1,ARG2) __extension__ ({ uint32_t __RES, __ARG1 = (ARG1); __ASM ("usat %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })
# 1268 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 1305 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 1327 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1342 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1354 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1621 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

#define __SSAT16(ARG1,ARG2) ({ int32_t __RES, __ARG1 = (ARG1); __ASM ("ssat16 %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })






#define __USAT16(ARG1,ARG2) ({ uint32_t __RES, __ARG1 = (ARG1); __ASM ("usat16 %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })






__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_gcc.h"
#define __PKHBT(ARG1,ARG2,ARG3) ( ((((uint32_t)(ARG1)) ) & 0x0000FFFFUL) | ((((uint32_t)(ARG2)) << (ARG3)) & 0xFFFF0000UL) )


#define __PKHTB(ARG1,ARG2,ARG3) ( ((((uint32_t)(ARG1)) ) & 0xFFFF0000UL) | ((((uint32_t)(ARG2)) >> (ARG3)) & 0x0000FFFFUL) )


__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Drivers/CMSIS/Include/cmsis_compiler.h" 2
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h"
#define __UTILITIES_CONF_H__ 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h" 1
# 22 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h"
#define __STM32_MEM_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h" 1
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h" 2





#define UTIL_MEM_PLACE_IN_SECTION(__x__) UTIL_PLACE_IN_SECTION( __x__ )
#define UTIL_MEM_ALIGN ALIGN
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h"
void UTIL_MEM_cpy_8( void *dst, const void *src, uint16_t size );
# 56 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h"
void UTIL_MEM_cpyr_8( void *dst, const void *src, uint16_t size );
# 65 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_mem.h"
void UTIL_MEM_set_8( void *dst, uint8_t value, uint16_t size );
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h" 1
# 21 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h"
#define __STM32_TINY_VSNPRINTF_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 1 3 4
# 31 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 3 4
#define _STDARG_H 
#define _ANSI_STDARG_H_ 

#undef __need___va_list




#define __GNUC_VA_LIST 

# 40 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;






#define va_start(v,l) __builtin_va_start(v,l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v,l) __builtin_va_arg(v,l)


#define va_copy(d,s) __builtin_va_copy(d,s)

#define __va_copy(d,s) __builtin_va_copy(d,s)
# 99 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;





#define _VA_LIST_ 


#define _VA_LIST 


#define _VA_LIST_DEFINED 


#define _VA_LIST_T_H 


#define __va_list__ 
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h" 2
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 1 3







#define _STRING_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _WANT_IO_C99_FORMATS 1


#define _WANT_IO_LONG_LONG 1


#define _WANT_REGISTER_FINI 1
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _REENT_CHECK_VERIFY 1





#define _MB_LEN_MAX 1
# 53 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define HAVE_INITFINI_ARRAY 1



#define _ATEXIT_DYNAMIC_ALLOC 1


#define _HAVE_LONG_DOUBLE 1


#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL 1


#define _LDBL_EQ_DBL 1


#define _FVWRITE_IN_STREAMIO 1


#define _FSEEK_OPTIMIZATION 1


#define _WIDE_ORIENT 1


#define _UNBUF_STREAM_OPT 1
# 95 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _RETARGETABLE_LOCKING 1
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 1 3

#define __SYS_CONFIG_H__ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN 
# 473 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 1


#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
# 5 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define _POINTER_INT long





#undef __RAND_MAX



#define __RAND_MAX 0x7fffffff
# 250 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define __EXPORT 



#define __IMPORT 






#define _READ_WRITE_RETURN_TYPE int





#define _READ_WRITE_BUFSIZE_TYPE int
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 31 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _BEGIN_STD_C 
#define _END_STD_C 
#define _NOTHROW 



#define _LONG_DOUBLE long double





#define _ATTRIBUTE(attrs) __attribute__ (attrs)
# 69 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _ELIDABLE_INLINE static __inline__



#define _NOINLINE __attribute__ ((__noinline__))
#define _NOINLINE_STATIC _NOINLINE static
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define _SYS__TYPES_H 

#define __need_size_t 
#define __need_wint_t 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t




#define _WINT_T 




typedef unsigned int wint_t;

#undef __need_wint_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 25 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 1 3





#define _MACHINE__TYPES_H 
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 127 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#undef __size_t



typedef unsigned int __size_t;
# 146 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define unsigned signed
typedef signed int _ssize_t;
#undef unsigned
# 158 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;



#define _CLOCK_T_ unsigned long


typedef unsigned long __clock_t;




#define _TIME_T_ __int_least64_t

typedef __int_least64_t __time_t;


#define _CLOCKID_T_ unsigned long


typedef unsigned long __clockid_t;

#define _TIMER_T_ unsigned long
typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3

#define _NULL 0



#define __Long long
typedef unsigned long __ULong;
# 34 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 1 3

#define __SYS_LOCK_H__ 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; class _LOCK_T lock = &__lock_ ## lock

#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) __retarget_lock_try_acquire_recursive(lock)

extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};





#define _ATEXIT_SIZE 32

struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
#define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}





#define _REENT_INIT_ATEXIT _NULL, _ATEXIT_INIT,
# 122 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 183 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_SMALL_CHECK_INIT(ptr) 


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _RAND48_SEED_0 (0x330e)
#define _RAND48_SEED_1 (0xabcd)
#define _RAND48_SEED_2 (0x1234)
#define _RAND48_MULT_0 (0xe66d)
#define _RAND48_MULT_1 (0xdeec)
#define _RAND48_MULT_2 (0x0005)
#define _RAND48_ADD (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24
# 613 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};





#define _REENT_STDIO_STREAM(var,index) &(var)->__sf[index]


#define _REENT_INIT(var) { 0, _REENT_STDIO_STREAM(&(var), 0), _REENT_STDIO_STREAM(&(var), 1), _REENT_STDIO_STREAM(&(var), 2), 0, "", 0, _NULL, 0, _NULL, _NULL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, "", {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {0, {0}}, {0, {0}}, {0, {0}}, "", "", 0, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _REENT_INIT_ATEXIT _NULL, {_NULL, 0, _NULL} }
# 751 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_INIT_PTR_ZEROED(var) { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); (var)->_stdout = _REENT_STDIO_STREAM(var, 1); (var)->_stderr = _REENT_STDIO_STREAM(var, 2); (var)->_new._reent._rand_next = 1; (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reent._r48._add = _RAND48_ADD; }
# 765 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_CHECK_RAND48(ptr) 
#define _REENT_CHECK_MP(ptr) 
#define _REENT_CHECK_TM(ptr) 
#define _REENT_CHECK_ASCTIME_BUF(ptr) 
#define _REENT_CHECK_EMERGENCY(ptr) 
#define _REENT_CHECK_MISC(ptr) 
#define _REENT_CHECK_SIGNAL_BUF(ptr) 

#define _REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr) ((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)
#define _REENT_MP_P5S(ptr) ((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr) ((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr) ((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))



#define _REENT_INIT_PTR(var) { memset((var), 0, sizeof(*(var))); _REENT_INIT_PTR_ZEROED(var); }







#define _Kmax (sizeof (size_t) << 3)







#define __ATTRIBUTE_IMPURE_PTR__ 


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 832 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT _impure_ptr


#define _GLOBAL_REENT _global_impure_ptr





#define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 48 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 2 3

#define __PMT(args) args
#define __DOTS , ...
#define __THROW 


#define __ASMNAME(cname) __XSTRING (__USER_LABEL_PREFIX__) cname


#define __ptr_t void *
#define __long_double_t long double

#define __attribute_malloc__ 
#define __attribute_pure__ 
#define __attribute_format_strfmon__(a,b) 
#define __flexarr [0]


#define __bounded 
#define __unbounded 
#define __ptrvalue 
# 78 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __has_extension __has_feature


#define __has_feature(x) 0
# 94 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __BEGIN_DECLS 
#define __END_DECLS 
# 107 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __GNUCLIKE_ASM 3
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 



#define __GNUCLIKE___TYPEOF 1
#define __GNUCLIKE___OFFSETOF 1
#define __GNUCLIKE___SECTION 1


#define __GNUCLIKE_CTOR_SECTION_HANDLING 1


#define __GNUCLIKE_BUILTIN_CONSTANT_P 1






#define __GNUCLIKE_BUILTIN_VARARGS 1
#define __GNUCLIKE_BUILTIN_STDARG 1
#define __GNUCLIKE_BUILTIN_VAALIST 1



#define __GNUC_VA_LIST_COMPATIBILITY 1






#define __compiler_membar() __asm __volatile(" " : : : "memory")



#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 


#define __GNUCLIKE_BUILTIN_MEMCPY 1


#define __CC_SUPPORTS_INLINE 1
#define __CC_SUPPORTS___INLINE 1
#define __CC_SUPPORTS___INLINE__ 1

#define __CC_SUPPORTS___FUNC__ 1
#define __CC_SUPPORTS_WARNING 1

#define __CC_SUPPORTS_VARADIC_XXX 1

#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
# 177 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __P(protos) protos
#define __CONCAT1(x,y) x ## y
#define __CONCAT(x,y) __CONCAT1(x,y)
#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#define __const const
#define __signed signed
#define __volatile volatile
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __weak_symbol __attribute__((__weak__))
# 243 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __packed __attribute__((__packed__))
#define __aligned(x) __attribute__((__aligned__(x)))
#define __section(x) __attribute__((__section__(x)))


#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#define __alloc_size2(n,x) __attribute__((__alloc_size__(n, x)))





#define __alloc_align(x) __attribute__((__alloc_align__(x)))
# 280 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Alignas(x) __aligned(x)






#define _Alignof(x) __alignof(x)
# 296 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Atomic(T) struct { T volatile __val; }





#define _Noreturn __dead2
# 331 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Thread_local __thread
# 351 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __generic(expr,t,yes,no) __builtin_choose_expr( __builtin_types_compatible_p(__typeof(expr), t), yes, no)
# 366 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __min_size(x) static (x)





#define __malloc_like __attribute__((__malloc__))
#define __pure __attribute__((__pure__))






#define __always_inline __inline__ __attribute__((__always_inline__))





#define __noinline __attribute__ ((__noinline__))





#define __nonnull(x) __attribute__((__nonnull__ x))
#define __nonnull_all __attribute__((__nonnull__))






#define __fastcall __attribute__((__fastcall__))
#define __result_use_check __attribute__((__warn_unused_result__))






#define __returns_twice __attribute__((__returns_twice__))





#define __unreachable() __builtin_unreachable()
# 434 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __restrict restrict
# 467 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __predict_true(exp) __builtin_expect((exp), 1)
#define __predict_false(exp) __builtin_expect((exp), 0)






#define __null_sentinel __attribute__((__sentinel__))
#define __exported __attribute__((__visibility__("default")))


#define __hidden __attribute__((__visibility__("hidden")))
# 489 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __offsetof(type,field) offsetof(type, field)
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
# 500 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __containerof(x,s,m) ({ const volatile __typeof(((s *)0)->m) *__x = (x); __DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));})
# 522 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))

#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg,firstvararg) __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
# 539 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printf0like(fmtarg,firstvararg) 




#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))




#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)


#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")



#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)

#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
# 593 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __FBSDID(s) struct __hack



#define __RCSID(s) struct __hack



#define __RCSID_SOURCE(s) struct __hack



#define __SCCSID(s) struct __hack



#define __COPYRIGHT(s) struct __hack



#define __DECONST(type,var) ((type)(__uintptr_t)(const void *)(var))



#define __DEVOLATILE(type,var) ((type)(__uintptr_t)(volatile void *)(var))



#define __DEQUALIFY(type,var) ((type)(__uintptr_t)(const volatile void *)(var))






#define _Nonnull 
#define _Nullable 
#define _Null_unspecified 
#define __NULLABILITY_PRAGMA_PUSH 
#define __NULLABILITY_PRAGMA_POP 
# 653 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __arg_type_tag(arg_kind,arg_idx,type_tag_idx) 
#define __datatype_type_tag(kind,type) 
# 672 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __lock_annotate(x) 





#define __lockable __lock_annotate(lockable)


#define __locks_exclusive(...) __lock_annotate(exclusive_lock_function(__VA_ARGS__))

#define __locks_shared(...) __lock_annotate(shared_lock_function(__VA_ARGS__))



#define __trylocks_exclusive(...) __lock_annotate(exclusive_trylock_function(__VA_ARGS__))

#define __trylocks_shared(...) __lock_annotate(shared_trylock_function(__VA_ARGS__))



#define __unlocks(...) __lock_annotate(unlock_function(__VA_ARGS__))


#define __asserts_exclusive(...) __lock_annotate(assert_exclusive_lock(__VA_ARGS__))

#define __asserts_shared(...) __lock_annotate(assert_shared_lock(__VA_ARGS__))



#define __requires_exclusive(...) __lock_annotate(exclusive_locks_required(__VA_ARGS__))

#define __requires_shared(...) __lock_annotate(shared_locks_required(__VA_ARGS__))

#define __requires_unlocked(...) __lock_annotate(locks_excluded(__VA_ARGS__))



#define __no_lock_analysis __lock_annotate(no_thread_safety_analysis)


#define __guarded_by(x) __lock_annotate(guarded_by(x))
#define __pt_guarded_by(x) __lock_annotate(pt_guarded_by(x))
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3


#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 27 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3


void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);
# 86 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *_strdup_r (struct _reent *, const char *);



char *_strndup_r (struct _reent *, const char *, size_t);
# 112 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char * _strerror_r (struct _reent *, int, int, int *);
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *strsignal (int __signo);
# 175 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/string.h" 1 3
# 176 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3


# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h" 2
# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h"

# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_tiny_vsnprintf.h"
int tiny_vsnprintf_like(char *buf, const int size, const char *fmt, va_list args);
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h" 2
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h"
#define VLEVEL_OFF 0
#define VLEVEL_ALWAYS 0

#define VLEVEL_L 1
#define VLEVEL_M 2
#define VLEVEL_H 3

#define TS_OFF 0
#define TS_ON 1

#define T_REG_OFF 0
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h"
#define UTIL_PLACE_IN_SECTION(__x__) __attribute__((section (__x__)))





#undef ALIGN



#define ALIGN(n) __attribute__((aligned(n)))





#define UTIL_SEQ_INIT_CRITICAL_SECTION() UTILS_INIT_CRITICAL_SECTION()




#define UTIL_SEQ_ENTER_CRITICAL_SECTION() UTILS_ENTER_CRITICAL_SECTION()




#define UTIL_SEQ_EXIT_CRITICAL_SECTION() UTILS_EXIT_CRITICAL_SECTION()




#define UTIL_SEQ_MEMSET8(dest,value,size) UTIL_MEM_set_8( dest, value, size )




#define UTILS_INIT_CRITICAL_SECTION() 




#define UTILS_ENTER_CRITICAL_SECTION() uint32_t primask_bit= __get_PRIMASK(); __disable_irq()





#define UTILS_EXIT_CRITICAL_SECTION() __set_PRIMASK(primask_bit)
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/utilities_conf.h"
#define UTIL_ADV_TRACE_CONDITIONNAL 
#define UTIL_ADV_TRACE_UNCHUNK_MODE 
#define UTIL_ADV_TRACE_DEBUG(...) 
#define UTIL_ADV_TRACE_INIT_CRITICAL_SECTION() UTILS_INIT_CRITICAL_SECTION()
#define UTIL_ADV_TRACE_ENTER_CRITICAL_SECTION() UTILS_ENTER_CRITICAL_SECTION()
#define UTIL_ADV_TRACE_EXIT_CRITICAL_SECTION() UTILS_EXIT_CRITICAL_SECTION()
#define UTIL_ADV_TRACE_TMP_BUF_SIZE (512U)
#define UTIL_ADV_TRACE_TMP_MAX_TIMESTMAP_SIZE (15U)
#define UTIL_ADV_TRACE_FIFO_SIZE (1024U)
#define UTIL_ADV_TRACE_MEMSET8(dest,value,size) UTIL_MEM_set_8((dest),(value),(size))
#define UTIL_ADV_TRACE_VSNPRINTF(...) tiny_vsnprintf_like(__VA_ARGS__)
# 61 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h" 2
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
typedef enum {
  UTIL_TIMER_ONESHOT = 0,
  UTIL_TIMER_PERIODIC = 1
} UTIL_TIMER_Mode_t;





typedef enum {
  UTIL_TIMER_OK = 0,
  UTIL_TIMER_INVALID_PARAM = 1,
  UTIL_TIMER_HW_ERROR = 2,
  UTIL_TIMER_UNKNOWN_ERROR = 3
} UTIL_TIMER_Status_t;




typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    uint8_t IsPending;
    uint8_t IsRunning;
    uint8_t IsReloadStopped;
    UTIL_TIMER_Mode_t Mode;
    void ( *Callback )( void *);
    void *argument;
 struct TimerEvent_s *Next;
} UTIL_TIMER_Object_t;




typedef struct
{
    UTIL_TIMER_Status_t (* InitTimer )( void );
    UTIL_TIMER_Status_t (* DeInitTimer )( void );

    UTIL_TIMER_Status_t (* StartTimerEvt )( uint32_t timeout );
    UTIL_TIMER_Status_t (* StopTimerEvt )( void);

    uint32_t (* SetTimerContext)( void );
    uint32_t (* GetTimerContext)( void );

    uint32_t (* GetTimerElapsedTime)( void );
    uint32_t (* GetTimerValue)( void );
    uint32_t (* GetMinimumTimeout)( void );

    uint32_t (* ms2Tick)( uint32_t timeMicroSec );
    uint32_t (* Tick2ms)( uint32_t tick );
} UTIL_TIMER_Driver_s;




typedef uint32_t UTIL_TIMER_Time_t;
# 142 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
extern const UTIL_TIMER_Driver_s UTIL_TimerDriver;
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_Init(void);






UTIL_TIMER_Status_t UTIL_TIMER_DeInit(void);
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_Create( UTIL_TIMER_Object_t *TimerObject, uint32_t PeriodValue, UTIL_TIMER_Mode_t Mode, void ( *Callback )( void *) , void *Argument);







UTIL_TIMER_Status_t UTIL_TIMER_Start( UTIL_TIMER_Object_t *TimerObject );
# 201 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_StartWithPeriod( UTIL_TIMER_Object_t *TimerObject, uint32_t PeriodValue);







UTIL_TIMER_Status_t UTIL_TIMER_Stop( UTIL_TIMER_Object_t *TimerObject );
# 219 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_SetPeriod(UTIL_TIMER_Object_t *TimerObject, uint32_t NewPeriodValue);
# 228 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_SetReloadMode(UTIL_TIMER_Object_t *TimerObject, UTIL_TIMER_Mode_t ReloadMode);
# 237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Status_t UTIL_TIMER_GetRemainingTime(UTIL_TIMER_Object_t *TimerObject, uint32_t *Time);







uint32_t UTIL_TIMER_IsRunning( UTIL_TIMER_Object_t *TimerObject );







uint32_t UTIL_TIMER_GetFirstRemainingTime(void);






UTIL_TIMER_Time_t UTIL_TIMER_GetCurrentTime(void);
# 269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
UTIL_TIMER_Time_t UTIL_TIMER_GetElapsedTime(UTIL_TIMER_Time_t past );
# 278 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/timer/stm32_timer.h"
void UTIL_TIMER_IRQ_Handler( void );
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h" 2
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h"
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h"
#define TimerTime_t UTIL_TIMER_Time_t




#define TimerEvent_t UTIL_TIMER_Object_t




#define TimerInit(HANDLE,CB) do { UTIL_TIMER_Create( HANDLE, TIMERTIME_T_MAX, UTIL_TIMER_ONESHOT, CB, NULL); } while(0)






#define TimerSetValue(HANDLE,TIMEOUT) do{ UTIL_TIMER_SetPeriod(HANDLE, TIMEOUT); } while(0)






#define TimerStart(HANDLE) do { UTIL_TIMER_Start(HANDLE); } while(0)






#define TimerStop(HANDLE) do { if (UTIL_TIMER_IsRunning(HANDLE)) { UTIL_TIMER_Stop(HANDLE); } } while(0)
# 100 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/timer.h"
#define TimerGetCurrentTime UTIL_TIMER_GetCurrentTime




#define TimerGetElapsedTime UTIL_TIMER_GetElapsedTime



#define TimerTempCompensation(x,y) (x)
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/systime.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/systime.h"
#define __SYSTIME_H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h" 1
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
#define __STM32_SYS_TIME_H__ 
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 1 3







#define _TIME_H_ 





#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 17 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/time.h" 1 3

#define _MACHTIME_H_ 




#define _CLOCKS_PER_SEC_ 100
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3





#define CLOCKS_PER_SEC _CLOCKS_PER_SEC_
#define CLK_TCK CLOCKS_PER_SEC

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 1 3
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3

# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;
#define __BIT_TYPES_DEFINED__ 1



#define _SYS_TYPES_H 
# 97 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;
#define _BLKCNT_T_DECLARED 



typedef __blksize_t blksize_t;
#define _BLKSIZE_T_DECLARED 



typedef unsigned long clock_t;
#define __clock_t_defined 
#define _CLOCK_T_DECLARED 



typedef __int_least64_t time_t;
#define __time_t_defined 
#define _TIME_T_DECLARED 



typedef long daddr_t;
#define __daddr_t_defined 


typedef char * caddr_t;
#define __caddr_t_defined 



typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
#define _FSBLKCNT_T_DECLARED 



typedef __id_t id_t;
#define _ID_T_DECLARED 



typedef __ino_t ino_t;
#define _INO_T_DECLARED 
# 157 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __off_t off_t;
#define _OFF_T_DECLARED 


typedef __dev_t dev_t;
#define _DEV_T_DECLARED 


typedef __uid_t uid_t;
#define _UID_T_DECLARED 


typedef __gid_t gid_t;
#define _GID_T_DECLARED 



typedef __pid_t pid_t;
#define _PID_T_DECLARED 



typedef __key_t key_t;
#define _KEY_T_DECLARED 



typedef _ssize_t ssize_t;
#define _SSIZE_T_DECLARED 



typedef __mode_t mode_t;
#define _MODE_T_DECLARED 



typedef __nlink_t nlink_t;
#define _NLINK_T_DECLARED 



typedef __clockid_t clockid_t;
#define __clockid_t_defined 
#define _CLOCKID_T_DECLARED 



typedef __timer_t timer_t;
#define __timer_t_defined 
#define _TIMER_T_DECLARED 



typedef __useconds_t useconds_t;
#define _USECONDS_T_DECLARED 



typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED 


typedef __int64_t sbintime_t;


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 1 3
# 19 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 3
#define _SYS__PTHREADTYPES_H_ 
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/types.h" 1 3
# 225 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3



#undef __need_inttypes
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 1 3
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
#define _SYS_TIMESPEC_H_ 


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 1 3
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
#define _SYS__TIMESPEC_H_ 
# 47 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 2 3
# 58 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 30 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3







struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;






};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *restrict _s,
        size_t _maxsize, const char *restrict _fmt,
        const struct tm *restrict _t);







char *asctime_r (const struct tm *restrict,
     char *restrict);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *restrict,
     struct tm *restrict);
struct tm *localtime_r (const time_t *restrict,
     struct tm *restrict);


# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type *__gettzinfo (void);
# 240 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
#define CLOCK_ENABLED 1
#define CLOCK_DISABLED 0



#define CLOCK_ALLOWED 1


#define CLOCK_DISALLOWED 0






#define TIMER_ABSTIME 4







#define CLOCK_REALTIME ((clockid_t) 1)
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h" 2
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
#define TM_DAYS_IN_LEAP_YEAR ( ( uint32_t ) 366U )
#define TM_DAYS_IN_YEAR ( ( uint32_t ) 365U )
#define TM_SECONDS_IN_1DAY ( ( uint32_t )86400U )
#define TM_SECONDS_IN_1HOUR ( ( uint32_t ) 3600U )
#define TM_SECONDS_IN_1MINUTE ( ( uint32_t ) 60U )
#define TM_MINUTES_IN_1HOUR ( ( uint32_t ) 60U )
#define TM_HOURS_IN_1DAY ( ( uint32_t ) 24U )




#define TM_MONTH_JANUARY ( ( uint8_t ) 0U )
#define TM_MONTH_FEBRUARY ( ( uint8_t ) 1U )
#define TM_MONTH_MARCH ( ( uint8_t ) 2U )
#define TM_MONTH_APRIL ( ( uint8_t ) 3U )
#define TM_MONTH_MAY ( ( uint8_t ) 4U )
#define TM_MONTH_JUNE ( ( uint8_t ) 5U )
#define TM_MONTH_JULY ( ( uint8_t ) 6U )
#define TM_MONTH_AUGUST ( ( uint8_t ) 7U )
#define TM_MONTH_SEPTEMBER ( ( uint8_t ) 8U )
#define TM_MONTH_OCTOBER ( ( uint8_t ) 9U )
#define TM_MONTH_NOVEMBER ( ( uint8_t )10U )
#define TM_MONTH_DECEMBER ( ( uint8_t )11U )




#define TM_WEEKDAY_SUNDAY ( ( uint8_t )0U )
#define TM_WEEKDAY_MONDAY ( ( uint8_t )1U )
#define TM_WEEKDAY_TUESDAY ( ( uint8_t )2U )
#define TM_WEEKDAY_WEDNESDAY ( ( uint8_t )3U )
#define TM_WEEKDAY_THURSDAY ( ( uint8_t )4U )
#define TM_WEEKDAY_FRIDAY ( ( uint8_t )5U )
#define TM_WEEKDAY_SATURDAY ( ( uint8_t )6U )




#define UNIX_GPS_EPOCH_OFFSET 315964800
# 122 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"

# 122 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
typedef struct SysTime_s
{
uint32_t Seconds;
int16_t SubSeconds;
}SysTime_t;




typedef struct
{
  void (*BKUPWrite_Seconds) ( uint32_t Seconds);
  uint32_t (*BKUPRead_Seconds) ( void );
  void (*BKUPWrite_SubSeconds) ( uint32_t SubSeconds);
  uint32_t (*BKUPRead_SubSeconds) ( void );
  uint32_t (*GetCalendarTime)( uint16_t* SubSeconds );
} UTIL_SYSTIM_Driver_s;
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
extern const UTIL_SYSTIM_Driver_s UTIL_SYSTIMDriver;
# 174 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
SysTime_t SysTimeAdd( SysTime_t a, SysTime_t b );
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
SysTime_t SysTimeSub( SysTime_t a, SysTime_t b );






void SysTimeSet( SysTime_t sysTime );






SysTime_t SysTimeGet( void );






SysTime_t SysTimeGetMcuTime( void );
# 214 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
uint32_t SysTimeToMs( SysTime_t sysTime );
# 223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
SysTime_t SysTimeFromMs( uint32_t timeMs );







uint32_t SysTimeMkTime( const struct tm* localtime );
# 240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/STM32CubeWL/Utilities/misc/stm32_systime.h"
void SysTimeLocalTime( const uint32_t timestamp, struct tm *localtime );
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak3172/systime.h" 2
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define __LORAMAC_TYPES_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define LORAMAC_CRYPTO_UNICAST_KEYS 0




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORAMAC_MAX_MC_CTX 4
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_0 0
# 93 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_1 1
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_2 2
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_3 3
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_4 4
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_5 5
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_6 6
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_7 7
# 205 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_8 8
# 221 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_9 9
# 237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_10 10
# 253 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_11 11
# 269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_12 12
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_13 13
# 301 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_14 14
# 317 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define DR_15 15
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_0 0
# 351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_1 1
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_2 2
# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_3 3
# 399 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_4 4
# 415 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_5 5
# 431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_6 6
# 447 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_7 7
# 463 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_8 8
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_9 9
# 495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_10 10
# 511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_11 11
# 527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_12 12
# 543 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_13 13
# 559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
#define TX_POWER_14 14




#define TX_POWER_15 15






typedef enum DeviceClass_e
{





    CLASS_A = 0x00,





    CLASS_B = 0x01,





    CLASS_C = 0x02,
}DeviceClass_t;







typedef enum eFType
{





    FRAME_TYPE_A,





    FRAME_TYPE_B,





    FRAME_TYPE_C,





    FRAME_TYPE_D,
}FType_t;




typedef enum eFCntIdentifier
{



    FCNT_UP = 0,




    N_FCNT_DOWN,




    A_FCNT_DOWN,




    FCNT_DOWN,



    MC_FCNT_DOWN_0,



    MC_FCNT_DOWN_1,



    MC_FCNT_DOWN_2,



    MC_FCNT_DOWN_3,



    RJ_COUNT_0,



    RJ_COUNT_1,
}FCntIdentifier_t;




typedef enum eKeyIdentifier
{



    APP_KEY = 0,



    NWK_KEY,



    J_S_INT_KEY,



    J_S_ENC_KEY,



    F_NWK_S_INT_KEY,



    S_NWK_S_INT_KEY,



    NWK_S_ENC_KEY,



    APP_S_KEY,



    MC_ROOT_KEY,



    MC_KE_KEY = 127,



    MC_KEY_0,



    MC_APP_S_KEY_0,



    MC_NWK_S_KEY_0,



    MC_KEY_1,



    MC_APP_S_KEY_1,



    MC_NWK_S_KEY_1,



    MC_KEY_2,



    MC_APP_S_KEY_2,



    MC_NWK_S_KEY_2,



    MC_KEY_3,



    MC_APP_S_KEY_3,



    MC_NWK_S_KEY_3,



    SLOT_RAND_ZERO_KEY,



    NO_KEY,
}KeyIdentifier_t;




typedef enum eAddressIdentifier
{



    MULTICAST_0_ADDR = 0,



    MULTICAST_1_ADDR = 1,



    MULTICAST_2_ADDR = 2,



    MULTICAST_3_ADDR = 3,



    UNICAST_DEV_ADDR = 4,
}AddressIdentifier_t;




typedef struct sMcRxParams
{



    DeviceClass_t Class;
    union
    {
        struct
        {



            uint32_t Frequency;



            int8_t Datarate;




            uint16_t Periodicity;
        }ClassB;
        struct
        {



            uint32_t Frequency;



            int8_t Datarate;
        }ClassC;
    }Params;
}McRxParams_t;




typedef struct sMcChannelParams
{




    
# 857 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 857 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
        IsRemotelySetup;



    
# 861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
        IsEnabled;



    AddressIdentifier_t GroupID;



    uint32_t Address;



    union uMcKeys
    {




        uint8_t *McKeyE;



        struct
        {



            uint8_t *McAppSKey;



            uint8_t *McNwkSKey;
        }Session;
    }McKeys;



    uint32_t FCountMin;



    uint32_t FCountMax;



    McRxParams_t RxParams;
}McChannelParams_t;




typedef struct sMulticastCtx
{



    McChannelParams_t ChannelParams;



    uint32_t* DownLinkCounter;
# 931 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
    uint8_t PingNb;





    uint16_t PingPeriod;



    uint16_t PingOffset;



    uint8_t FPendingSet;
}MulticastCtx_t;




typedef enum eJoinReqIdentifier
{



    REJOIN_REQ_0 = 0x00,



    REJOIN_REQ_1 = 0x01,



    REJOIN_REQ_2 = 0x02,



    JOIN_REQ = 0xFF,
}JoinReqIdentifier_t;






typedef enum eLoRaMacMoteCmd
{



    MOTE_MAC_RESET_IND = 0x01,



    MOTE_MAC_LINK_CHECK_REQ = 0x02,



    MOTE_MAC_LINK_ADR_ANS = 0x03,



    MOTE_MAC_DUTY_CYCLE_ANS = 0x04,



    MOTE_MAC_RX_PARAM_SETUP_ANS = 0x05,



    MOTE_MAC_DEV_STATUS_ANS = 0x06,



    MOTE_MAC_NEW_CHANNEL_ANS = 0x07,



    MOTE_MAC_RX_TIMING_SETUP_ANS = 0x08,



    MOTE_MAC_TX_PARAM_SETUP_ANS = 0x09,



    MOTE_MAC_DL_CHANNEL_ANS = 0x0A,



    MOTE_MAC_REKEY_IND = 0x0B,



    MOTE_MAC_DEVICE_TIME_REQ = 0x0D,



    MOTE_MAC_ADR_PARAM_SETUP_ANS = 0x0C,



    MOTE_MAC_REJOIN_PARAM_ANS = 0x0F,



    MOTE_MAC_DEVICE_MODE_IND = 0x20,



    MOTE_MAC_PING_SLOT_INFO_REQ = 0x10,



    MOTE_MAC_PING_SLOT_CHANNEL_ANS = 0x11,



    MOTE_MAC_BEACON_TIMING_REQ = 0x12,



    MOTE_MAC_BEACON_FREQ_ANS = 0x13,
}LoRaMacMoteCmd_t;






typedef enum eLoRaMacSrvCmd
{



    SRV_MAC_RESET_CONF = 0x01,



    SRV_MAC_LINK_CHECK_ANS = 0x02,



    SRV_MAC_LINK_ADR_REQ = 0x03,



    SRV_MAC_DUTY_CYCLE_REQ = 0x04,



    SRV_MAC_RX_PARAM_SETUP_REQ = 0x05,



    SRV_MAC_DEV_STATUS_REQ = 0x06,



    SRV_MAC_NEW_CHANNEL_REQ = 0x07,



    SRV_MAC_RX_TIMING_SETUP_REQ = 0x08,



    SRV_MAC_TX_PARAM_SETUP_REQ = 0x09,



    SRV_MAC_DL_CHANNEL_REQ = 0x0A,



    SRV_MAC_REKEY_CONF = 0x0B,



    SRV_MAC_ADR_PARAM_SETUP_REQ = 0x0C,



    SRV_MAC_FORCE_REJOIN_REQ = 0x0E,



    SRV_MAC_REJOIN_PARAM_REQ = 0x0F,



    SRV_MAC_DEVICE_MODE_CONF = 0x20,



    SRV_MAC_DEVICE_TIME_ANS = 0x0D,



    SRV_MAC_PING_SLOT_INFO_ANS = 0x10,



    SRV_MAC_PING_SLOT_CHANNEL_REQ = 0x11,



    SRV_MAC_BEACON_TIMING_ANS = 0x12,



    SRV_MAC_BEACON_FREQ_REQ = 0x13,
}LoRaMacSrvCmd_t;




typedef struct sBand
{



    uint16_t DCycle;



    int8_t TxMaxPower;




    UTIL_TIMER_Time_t LastBandUpdateTime;




    UTIL_TIMER_Time_t LastMaxCreditAssignTime;




    UTIL_TIMER_Time_t TimeCredits;




    UTIL_TIMER_Time_t MaxTimeCredits;



    
# 1181 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 1181 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h"
        ReadyForTransmission;
}Band_t;




typedef union uDrRange
{



    int8_t Value;



    struct sFields
    {







        int8_t Min : 4;







        int8_t Max : 4;
    }Fields;
}DrRange_t;




typedef struct sChannelParams
{



    uint32_t Frequency;



    uint32_t Rx1Frequency;



    DrRange_t DrRange;



    uint8_t Band;
}ChannelParams_t;






typedef enum eLoRaMacFrameType
{



    FRAME_TYPE_JOIN_REQ = 0x00,



    FRAME_TYPE_JOIN_ACCEPT = 0x01,



    FRAME_TYPE_DATA_UNCONFIRMED_UP = 0x02,



    FRAME_TYPE_DATA_UNCONFIRMED_DOWN = 0x03,



    FRAME_TYPE_DATA_CONFIRMED_UP = 0x04,



    FRAME_TYPE_DATA_CONFIRMED_DOWN = 0x05,



    FRAME_TYPE_REJOIN = 0x06,



    FRAME_TYPE_PROPRIETARY = 0x07,
}LoRaMacFrameType_t;




typedef enum eLoRaMacBatteryLevel
{



    BAT_LEVEL_EXT_SRC = 0x00,



    BAT_LEVEL_EMPTY = 0x01,



    BAT_LEVEL_FULL = 0xFE,



    BAT_LEVEL_NO_MEASURE = 0xFF,
}LoRaMacBatteryLevel_t;
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h"
#define __REGIONNVM_H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTypes.h" 1
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h" 2




typedef enum eRegionCN470ChannelPlan
{
    CHANNEL_PLAN_UNKNOWN,
    CHANNEL_PLAN_20MHZ_TYPE_A,
    CHANNEL_PLAN_20MHZ_TYPE_B,
    CHANNEL_PLAN_26MHZ_TYPE_A,
    CHANNEL_PLAN_26MHZ_TYPE_B
}RegionCN470ChannelPlan_t;



#define REGION_NVM_MAX_NB_CHANNELS 96
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h"
#define REGION_NVM_MAX_NB_BANDS 6
# 76 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h"
#define REGION_NVM_CHANNELS_MASK_SIZE 6
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h"
typedef struct sRegionNvmDataGroup1
{




    uint16_t ChannelsMaskRemaining[ 6 ];






    uint8_t JoinChannelGroupsCurrentIndex;



    uint8_t JoinTrialsCounter;




    uint32_t Crc32;
}RegionNvmDataGroup1_t;





typedef struct sRegionNvmDataGroup2
{



    ChannelParams_t Channels[ 96 ];



    uint16_t ChannelsMask[ 6 ];



    uint16_t ChannelsDefaultMask[ 6 ];




    RegionCN470ChannelPlan_t ChannelPlan;




    uint8_t CommonJoinChannelIndex;




    
# 142 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h" 3 4
   _Bool 
# 142 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionNvm.h"
        IsOtaaDevice;





    int16_t RssiFreeThreshold;




    uint32_t CarrierSenseTime;





    uint32_t Crc32;
}RegionNvmDataGroup2_t;
# 82 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCryptoNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCryptoNvm.h"
#define __LORAMAC_CRYPTO_NVM_H__ 
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCryptoNvm.h"
typedef struct sFCntList
{



    uint32_t FCntUp;




    uint32_t NFCntDown;




    uint32_t AFCntDown;




    uint32_t FCntDown;



    uint32_t McFCntDown[4];




    uint16_t RJcount1;
}FCntList_t;




typedef struct sLoRaMacCryptoNvmData
{




    Version_t LrWanVersion;




    uint16_t DevNonce;




    uint32_t JoinNonce;



    FCntList_t FCntList;





    uint32_t LastDownFCnt;



    uint32_t Crc32;
}LoRaMacCryptoNvmData_t;
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element-nvm.h" 1
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element-nvm.h"
#define __SECURE_ELEMENT_NVM_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element-nvm.h"
#define SE_KEY_SIZE 16




#define SE_EUI_SIZE 8




#define SE_PIN_SIZE 4





#define NUM_OF_KEYS 23




typedef struct sKey
{



    KeyIdentifier_t KeyID;



    uint8_t KeyValue[16];
} Key_t;


typedef struct sSecureElementNvCtx
{



    uint8_t DevEui[8];



    uint8_t JoinEui[8];



    uint8_t Pin[4];





    Key_t KeyList[23];




    uint32_t Crc32;
} SecureElementNvmData_t;
# 84 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassBNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassBNvm.h"
#define __LORAMACCLASSBNVM_H__ 
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassBNvm.h"
typedef struct sLoRaMacClassBPingSlotNvmData
{
    struct sPingSlotCtrlNvm
    {



        uint8_t Assigned : 1;



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint8_t PingNb;



    uint16_t PingPeriod;



    uint32_t Frequency;



    int8_t Datarate;



    uint8_t FPendingSet;
} LoRaMacClassBPingSlotNvmData_t;





typedef struct sLoRaMacClassBBeaconNvmData
{
    struct sBeaconCtrlNvm
    {



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint32_t Frequency;
} LoRaMacClassBBeaconNvmData_t;




typedef struct sLoRaMacClassBNvmData
{



    LoRaMacClassBPingSlotNvmData_t PingSlotCtx;



    LoRaMacClassBBeaconNvmData_t BeaconCtx;



    uint32_t Crc32;
} LoRaMacClassBNvmData_t;
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 2




#define LORAMAC_VERSION 0x01010100




#define LORAMAC_FALLBACK_VERSION 0x01000400




#define MAX_ACK_RETRIES 8




#define UP_LINK 0




#define DOWN_LINK 1




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORA_MAC_COMMAND_MAX_LENGTH 128





#define LORAMAC_NVM_NOTIFY_FLAG_NONE 0x00




#define LORAMAC_NVM_NOTIFY_FLAG_CRYPTO 0x01




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP1 0x02




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP2 0x04




#define LORAMAC_NVM_NOTIFY_FLAG_SECURE_ELEMENT 0x08




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP1 0x10




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP2 0x20




#define LORAMAC_NVM_NOTIFY_FLAG_CLASS_B 0x40






#define LORAMAC_CERT_FPORT 224




typedef enum eActivationType
{



    ACTIVATION_TYPE_NONE = 0,



    ACTIVATION_TYPE_ABP = 1,



    ACTIVATION_TYPE_OTAA = 2,
}ActivationType_t;




typedef struct sRxChannelParams
{



    uint32_t Frequency;







    uint8_t Datarate;
}RxChannelParams_t;




typedef enum eLoRaMacRxSlot
{



    RX_SLOT_WIN_1,



    RX_SLOT_WIN_2,



    RX_SLOT_WIN_CLASS_C,



    RX_SLOT_WIN_CLASS_C_MULTICAST,



    RX_SLOT_WIN_CLASS_B_PING_SLOT,



    RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT,



    RX_SLOT_NONE,
}LoRaMacRxSlot_t;




typedef struct sLoRaMacParams
{





    uint32_t SystemMaxRxError;




    uint8_t MinRxSymbols;



    uint32_t MaxRxWindow;



    uint32_t ReceiveDelay1;



    uint32_t ReceiveDelay2;



    uint32_t JoinAcceptDelay1;



    uint32_t JoinAcceptDelay2;



    uint8_t ChannelsNbTrans;



    uint8_t Rx1DrOffset;



    RxChannelParams_t Rx2Channel;



    RxChannelParams_t RxCChannel;



    uint8_t UplinkDwellTime;



    uint8_t DownlinkDwellTime;



    float MaxEirp;



    float AntennaGain;




    uint16_t AdrAckLimit;




    uint16_t AdrAckDelay;
}LoRaMacParams_t;






typedef union uPingSlotInfo
{



    uint8_t Value;



    struct sInfoFields
    {




        uint8_t Periodicity : 3;



        uint8_t RFU : 5;
    }Fields;
}PingSlotInfo_t;






typedef struct sBeaconInfo
{




    SysTime_t Time;



    uint32_t Frequency;



    uint8_t Datarate;



    int16_t Rssi;



    int8_t Snr;
# 393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    uint8_t Param;




    struct sGwSpecific
    {



        uint8_t InfoDesc;



        uint8_t Info[6];
    }GwSpecific;
}BeaconInfo_t;




typedef enum eLoRaMacEventInfoStatus
{



    LORAMAC_EVENT_INFO_STATUS_OK = 0,



    LORAMAC_EVENT_INFO_STATUS_ERROR,



    LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_ERROR,



    LORAMAC_EVENT_INFO_STATUS_RX2_ERROR,



    LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL,





    LORAMAC_EVENT_INFO_STATUS_DOWNLINK_REPEATED,




    LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR,



    LORAMAC_EVENT_INFO_STATUS_ADDRESS_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MIC_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MULTICAST_FAIL,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOCKED,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOST,



    LORAMAC_EVENT_INFO_STATUS_BEACON_NOT_FOUND,
}LoRaMacEventInfoStatus_t;




typedef union eLoRaMacFlags_t
{



    uint8_t Value;



    struct sMacFlagBits
    {



        uint8_t McpsReq : 1;



        uint8_t McpsInd : 1;



        uint8_t MlmeReq : 1;



        uint8_t MlmeInd : 1;



        uint8_t MacDone : 1;



        uint8_t NvmHandle : 1;
    }Bits;
}LoRaMacFlags_t;




typedef enum eLoRaMacRegion
{



    LORAMAC_REGION_AS923,



    LORAMAC_REGION_AU915,



    LORAMAC_REGION_CN470,



    LORAMAC_REGION_CN779,



    LORAMAC_REGION_EU433,



    LORAMAC_REGION_EU868,



    LORAMAC_REGION_KR920,



    LORAMAC_REGION_IN865,



    LORAMAC_REGION_US915,



    LORAMAC_REGION_RU864,
    LORAMAC_REGION_LA915,
}LoRaMacRegion_t;

typedef struct sLoRaMacNvmDataGroup1
{



    uint32_t AdrAckCounter;



    UTIL_TIMER_Time_t LastTxDoneTime;



    UTIL_TIMER_Time_t AggregatedTimeOff;



    uint32_t LastRxMic;



    int8_t ChannelsTxPower;



    int8_t ChannelsDatarate;




    
# 604 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 604 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        SrvAckRequested;




    uint32_t Rejoin0UplinksCounter;




    uint8_t ForceRejoinRetriesCounter;





    uint16_t RekeyIndUplinksCounter;



    uint32_t Crc32;
}LoRaMacNvmDataGroup1_t;

typedef struct sLoRaMacNvmDataGroup2
{



    LoRaMacRegion_t Region;



    LoRaMacParams_t MacParams;



    LoRaMacParams_t MacParamsDefaults;



    int8_t ChannelsTxPowerDefault;



    int8_t ChannelsDatarateDefault;



    uint32_t NetID;



    uint32_t DevAddr;



    MulticastCtx_t MulticastChannelList[4];



    DeviceClass_t DeviceClass;




    
# 669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        PublicNetwork;



    
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        AdrCtrlOn;




    uint8_t MaxDCycle;



    
# 682 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 682 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        DutyCycleOn;




    
# 687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        ChannelsDatarateChangedLinkAdrReq;



    
# 691 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 691 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        DownlinkReceived;



    
# 695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsCertPortOn;



    uint16_t AggregatedDCycle;





    SysTime_t InitializationTime;



    Version_t Version;



    ActivationType_t NetworkActivation;





    uint32_t Rejoin0UplinksLimit;




    uint8_t ForceRejoinMaxRetries;




    uint8_t ForceRejoinType;



    uint32_t Rejoin0CycleInSec;



    uint32_t Rejoin1CycleInSec;




    
# 742 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 742 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsRejoinAcceptPending;



    
# 746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsRejoin0RequestQueued;



    
# 750 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 750 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsRejoin1RequestQueued;



    
# 754 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 754 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsRejoin2RequestQueued;



    uint32_t Crc32;
}LoRaMacNvmDataGroup2_t;





typedef struct sLoRaMacNvmData
{




    LoRaMacCryptoNvmData_t Crypto;




    LoRaMacNvmDataGroup1_t MacGroup1;




    LoRaMacNvmDataGroup2_t MacGroup2;



    SecureElementNvmData_t SecureElement;




    RegionNvmDataGroup1_t RegionGroup1;




    RegionNvmDataGroup2_t RegionGroup2;



    LoRaMacClassBNvmData_t ClassB;
}LoRaMacNvmData_t;
# 825 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
typedef enum eMcps
{



    MCPS_UNCONFIRMED,



    MCPS_CONFIRMED,



    MCPS_MULTICAST,



    MCPS_PROPRIETARY,
}Mcps_t;




typedef struct sRequestReturnParam
{





    UTIL_TIMER_Time_t DutyCycleWaitTime;
}RequestReturnParam_t;




typedef struct sMcpsReqUnconfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqUnconfirmed_t;




typedef struct sMcpsReqConfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqConfirmed_t;




typedef struct sMcpsReqProprietary
{



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqProprietary_t;




typedef struct sMcpsReq
{



    Mcps_t Type;




    union uMcpsParam
    {



        McpsReqUnconfirmed_t Unconfirmed;



        McpsReqConfirmed_t Confirmed;



        McpsReqProprietary_t Proprietary;
    }Req;




    RequestReturnParam_t ReqReturn;
}McpsReq_t;




typedef struct sMcpsConfirm
{



    Mcps_t McpsRequest;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Datarate;



    int8_t TxPower;



    
# 988 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 988 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        AckReceived;



    uint8_t NbTrans;



    UTIL_TIMER_Time_t TxTimeOnAir;



    uint32_t UpLinkCounter;



    uint32_t Channel;
}McpsConfirm_t;




typedef struct sMcpsIndication
{



    Mcps_t McpsIndication;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Multicast;



    uint8_t Port;



    uint8_t RxDatarate;



    uint8_t IsUplinkTxPending;



    uint8_t* Buffer;



    uint8_t BufferSize;



    
# 1047 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1047 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        RxData;



    int16_t Rssi;



    int8_t Snr;



    LoRaMacRxSlot_t RxSlot;



    
# 1063 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1063 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        AckReceived;



    uint32_t DownLinkCounter;



    uint32_t DevAddress;



    
# 1075 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1075 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        DeviceTimeAnsReceived;





    UTIL_TIMER_Time_t ResponseTimeout;
}McpsIndication_t;
# 1110 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
typedef enum eMlme
{



    MLME_UNKNOWN,





    MLME_JOIN,





    MLME_REJOIN_0,





    MLME_REJOIN_1,





    MLME_REJOIN_2,





    MLME_LINK_CHECK,





    MLME_TXCW,



    MLME_DERIVE_MC_KE_KEY,



    MLME_DERIVE_MC_KEY_PAIR,





    MLME_DEVICE_TIME,






    MLME_BEACON,






    MLME_BEACON_ACQUISITION,





    MLME_PING_SLOT_INFO,





    MLME_BEACON_TIMING,







    MLME_BEACON_LOST,






    MLME_REVERT_JOIN,
}Mlme_t;




typedef struct sMlmeReqJoin
{





    ActivationType_t NetworkActivation;



    uint8_t Datarate;
}MlmeReqJoin_t;




typedef struct sMlmeReqTxCw
{



    uint16_t Timeout;



    uint32_t Frequency;



    int8_t Power;
}MlmeReqTxCw_t;




typedef struct sMlmeReqPingSlotInfo
{
    PingSlotInfo_t PingSlot;
}MlmeReqPingSlotInfo_t;




typedef struct sMlmeReqDeriveMcKEKey
{



    KeyIdentifier_t KeyID;



    uint16_t Nonce;



    uint8_t* DevEUI;
}MlmeReqDeriveMcKEKey_t;




typedef struct sMlmeReqDeriveMcSessionKeyPair
{



    AddressIdentifier_t GroupID;
}MlmeReqDeriveMcSessionKeyPair_t;




typedef struct sMlmeReq
{



    Mlme_t Type;




    union uMlmeParam
    {



        MlmeReqJoin_t Join;



        MlmeReqTxCw_t TxCw;



        MlmeReqPingSlotInfo_t PingSlotInfo;



        MlmeReqDeriveMcKEKey_t DeriveMcKEKey;



        MlmeReqDeriveMcSessionKeyPair_t DeriveMcSessionKeyPair;
    }Req;




    RequestReturnParam_t ReqReturn;
}MlmeReq_t;




typedef struct sMlmeConfirm
{



    Mlme_t MlmeRequest;



    LoRaMacEventInfoStatus_t Status;



    UTIL_TIMER_Time_t TxTimeOnAir;




    uint8_t DemodMargin;



    uint8_t NbGateways;



    uint8_t NbRetries;




    UTIL_TIMER_Time_t BeaconTimingDelay;



    uint8_t BeaconTimingChannel;
}MlmeConfirm_t;




typedef struct sMlmeIndication
{



    Mlme_t MlmeIndication;



    LoRaMacEventInfoStatus_t Status;




    BeaconInfo_t BeaconInfo;
}MlmeIndication_t;
# 1480 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
typedef enum eMib
{





    MIB_DEVICE_CLASS,





    MIB_NETWORK_ACTIVATION,





    MIB_DEV_EUI,





    MIB_JOIN_EUI,



    MIB_SE_PIN,







    MIB_ADR,





    MIB_NET_ID,





    MIB_DEV_ADDR,





    MIB_APP_KEY,





    MIB_NWK_KEY,





    MIB_J_S_INT_KEY,





    MIB_J_S_ENC_KEY,





    MIB_F_NWK_S_INT_KEY,





    MIB_S_NWK_S_INT_KEY,





    MIB_NWK_S_ENC_KEY,





    MIB_APP_S_KEY,





    MIB_MC_KE_KEY,





    MIB_MC_KEY_0,





    MIB_MC_APP_S_KEY_0,





    MIB_MC_NWK_S_KEY_0,





    MIB_MC_KEY_1,





    MIB_MC_APP_S_KEY_1,





    MIB_MC_NWK_S_KEY_1,





    MIB_MC_KEY_2,





    MIB_MC_APP_S_KEY_2,





    MIB_MC_NWK_S_KEY_2,





    MIB_MC_KEY_3,





    MIB_MC_APP_S_KEY_3,





    MIB_MC_NWK_S_KEY_3,







    MIB_PUBLIC_NETWORK,







    MIB_CHANNELS,





    MIB_RX2_CHANNEL,





    MIB_RX2_DEFAULT_CHANNEL,





    MIB_RXC_CHANNEL,





    MIB_RXC_DEFAULT_CHANNEL,





    MIB_CHANNELS_MASK,





    MIB_CHANNELS_DEFAULT_MASK,





    MIB_CHANNELS_NB_TRANS,





    MIB_MAX_RX_WINDOW_DURATION,





    MIB_RECEIVE_DELAY_1,





    MIB_RECEIVE_DELAY_2,





    MIB_JOIN_ACCEPT_DELAY_1,





    MIB_JOIN_ACCEPT_DELAY_2,







    MIB_CHANNELS_MIN_TX_DATARATE,







    MIB_CHANNELS_DEFAULT_DATARATE,







    MIB_CHANNELS_DATARATE,







    MIB_CHANNELS_TX_POWER,







    MIB_CHANNELS_DEFAULT_TX_POWER,





    MIB_SYSTEM_MAX_RX_ERROR,




    MIB_MIN_RX_SYMBOLS,
# 1805 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    MIB_ANTENNA_GAIN,
# 1816 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    MIB_DEFAULT_ANTENNA_GAIN,



    MIB_NVM_CTXS,



    MIB_ABP_LORAWAN_VERSION,



    MIB_LORAWAN_VERSION,



    MIB_REJOIN_0_CYCLE,



    MIB_REJOIN_1_CYCLE,



    MIB_BEACON_INTERVAL,



    MIB_BEACON_RESERVED,



    MIB_BEACON_GUARD,



    MIB_BEACON_WINDOW,



    MIB_BEACON_WINDOW_SLOTS,



    MIB_PING_SLOT_WINDOW,



    MIB_BEACON_SYMBOL_TO_DEFAULT,



    MIB_BEACON_SYMBOL_TO_EXPANSION_MAX,



    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_MAX,




    MIB_BEACON_SYMBOL_TO_EXPANSION_FACTOR,




    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_FACTOR,



    MIB_MAX_BEACON_LESS_PERIOD,







     MIB_PING_SLOT_DATARATE,



     MIB_IS_CERT_FPORT_ON,



     MIB_ADR_ACK_LIMIT,



     MIB_ADR_ACK_DELAY,



     MIB_ADR_ACK_DEFAULT_LIMIT,



     MIB_ADR_ACK_DEFAULT_DELAY,



     MIB_RSSI_FREE_THRESHOLD,



     MIB_CARRIER_SENSE_TIME
}Mib_t;




typedef union uMibParam
{





    DeviceClass_t Class;





    ActivationType_t NetworkActivation;





    uint8_t* DevEui;





    uint8_t* JoinEui;





    uint8_t* SePin;





    
# 1965 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1965 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        AdrEnable;





    uint32_t NetID;





    uint32_t DevAddr;





    uint8_t* AppKey;





    uint8_t* NwkKey;





    uint8_t* JSIntKey;





    uint8_t* JSEncKey;





    uint8_t* FNwkSIntKey;





    uint8_t* SNwkSIntKey;





    uint8_t* NwkSEncKey;





    uint8_t* AppSKey;





    uint8_t* McKEKey;





    uint8_t* McKey0;





    uint8_t* McAppSKey0;





    uint8_t* McNwkSKey0;





    uint8_t* McKey1;





    uint8_t* McAppSKey1;





    uint8_t* McNwkSKey1;





    uint8_t* McKey2;





    uint8_t* McAppSKey2;





    uint8_t* McNwkSKey2;





    uint8_t* McKey3;





    uint8_t* McAppSKey3;





    uint8_t* McNwkSKey3;





    
# 2109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 2109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        EnablePublicNetwork;





    ChannelParams_t* ChannelList;





    RxChannelParams_t Rx2Channel;





    RxChannelParams_t Rx2DefaultChannel;





    RxChannelParams_t RxCChannel;





    RxChannelParams_t RxCDefaultChannel;





    uint16_t* ChannelsMask;





    uint16_t* ChannelsDefaultMask;





    uint8_t ChannelsNbTrans;





    uint32_t MaxRxWindow;





    uint32_t ReceiveDelay1;





    uint32_t ReceiveDelay2;





    uint32_t JoinAcceptDelay1;





    uint32_t JoinAcceptDelay2;





    int8_t ChannelsMinTxDatarate;





    int8_t ChannelsDefaultDatarate;





    int8_t ChannelsDatarate;





    int8_t ChannelsDefaultTxPower;





    int8_t ChannelsTxPower;





    McChannelParams_t MulticastChannel;





    uint32_t SystemMaxRxError;





    uint8_t MinRxSymbols;





    float AntennaGain;





    float DefaultAntennaGain;






    LoRaMacNvmData_t* Contexts;





    Version_t AbpLrWanVersion;





    struct sLrWanVersion
    {
        Version_t LoRaWan;
        Version_t LoRaWanRegion;
    }LrWanVersion;



    uint32_t Rejoin0CycleInSec;



    uint32_t Rejoin1CycleInSec;



    uint32_t Rejoin2CycleInSec;





    uint32_t BeaconInterval;





    uint32_t BeaconReserved;





    uint32_t BeaconGuard;





    uint32_t BeaconWindow;





    uint32_t BeaconWindowSlots;





    uint32_t PingSlotWindow;





    uint32_t BeaconSymbolToDefault;





    uint32_t BeaconSymbolToExpansionMax;





    uint32_t PingSlotSymbolToExpansionMax;






    uint32_t BeaconSymbolToExpansionFactor;






    uint32_t PingSlotSymbolToExpansionFactor;





    uint32_t MaxBeaconLessPeriod;





    int8_t PingSlotDatarate;





    
# 2368 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
   _Bool 
# 2368 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
        IsCertPortOn;





    uint16_t AdrAckLimit;





    uint16_t AdrAckDelay;





    int16_t RssiFreeThreshold;





    uint32_t CarrierSenseTime;
}MibParam_t;




typedef struct eMibRequestConfirm
{



    Mib_t Type;




    MibParam_t Param;
}MibRequestConfirm_t;




typedef struct sLoRaMacTxInfo
{



    uint8_t MaxPossibleApplicationDataSize;




    uint8_t CurrentPossiblePayloadSize;
}LoRaMacTxInfo_t;




typedef enum eLoRaMacStatus
{



    LORAMAC_STATUS_OK,



    LORAMAC_STATUS_BUSY,



    LORAMAC_STATUS_SERVICE_UNKNOWN,



    LORAMAC_STATUS_PARAMETER_INVALID,



    LORAMAC_STATUS_FREQUENCY_INVALID,



    LORAMAC_STATUS_DATARATE_INVALID,



    LORAMAC_STATUS_FREQ_AND_DR_INVALID,



    LORAMAC_STATUS_NO_NETWORK_JOINED,



    LORAMAC_STATUS_LENGTH_ERROR,




    LORAMAC_STATUS_REGION_NOT_SUPPORTED,




    LORAMAC_STATUS_SKIPPED_APP_DATA,
# 2491 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    LORAMAC_STATUS_DUTYCYCLE_RESTRICTED,



    LORAMAC_STATUS_NO_CHANNEL_FOUND,



    LORAMAC_STATUS_NO_FREE_CHANNEL_FOUND,



    LORAMAC_STATUS_BUSY_BEACON_RESERVED_TIME,



    LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME,



    LORAMAC_STATUS_BUSY_UPLINK_COLLISION,



    LORAMAC_STATUS_CRYPTO_ERROR,



    LORAMAC_STATUS_FCNT_HANDLER_ERROR,



    LORAMAC_STATUS_MAC_COMMAD_ERROR,



    LORAMAC_STATUS_CLASS_B_ERROR,



    LORAMAC_STATUS_CONFIRM_QUEUE_ERROR,



    LORAMAC_STATUS_MC_GROUP_UNDEFINED,



    LORAMAC_STATUS_ERROR
}LoRaMacStatus_t;





typedef struct sLoRaMacPrimitives
{





    void ( *MacMcpsConfirm )( McpsConfirm_t* McpsConfirm );





    void ( *MacMcpsIndication )( McpsIndication_t* McpsIndication );





    void ( *MacMlmeConfirm )( MlmeConfirm_t* MlmeConfirm );





    void ( *MacMlmeIndication )( MlmeIndication_t* MlmeIndication );
}LoRaMacPrimitives_t;




typedef struct sLoRaMacCallback
{
# 2587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    uint8_t ( *GetBatteryLevel )( void );





    float ( *GetTemperatureLevel )( void );






    void ( *NvmDataChange )( uint16_t notifyFlags );






    void ( *MacProcessNotify )( void );
}LoRaMacCallback_t;





static const uint8_t LoRaMacMaxEirpTable[] = { 8, 10, 12, 13, 14, 16, 18, 20, 21, 24, 26, 27, 29, 30, 33, 36 };
# 2638 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacInitialization( LoRaMacPrimitives_t* primitives, LoRaMacCallback_t* callbacks, LoRaMacRegion_t region );
# 2647 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStart( void );
# 2656 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStop( void );







# 2663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 3 4
_Bool 
# 2663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
    LoRaMacIsBusy( void );






void LoRaMacProcess( void );
# 2697 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacQueryTxPossible( uint8_t size, LoRaMacTxInfo_t* txInfo );
# 2715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelAdd( uint8_t id, ChannelParams_t params );
# 2729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelRemove( uint8_t id );
# 2744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetup( McChannelParams_t *channel );
# 2758 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelDelete( AddressIdentifier_t groupID );
# 2768 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
uint8_t LoRaMacMcChannelGetGroupId( uint32_t mcAddress );
# 2785 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetupRxParams( AddressIdentifier_t groupID, McRxParams_t *rxParams, uint8_t *status );
# 2813 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibGetRequestConfirm( MibRequestConfirm_t* mibGet );
# 2844 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibSetRequestConfirm( MibRequestConfirm_t* mibSet );
# 2877 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMlmeRequest( MlmeReq_t* mlmeRequest );
# 2911 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcpsRequest( McpsReq_t* mcpsRequest );
# 2923 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacDeInitialization( void );






void LoRaMacReset( void );
# 64 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
#define __REGIONCOMMON_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define __LORAMAC_HEADER_TYPES_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_MHDR_FIELD_SIZE 1


#define LORAMAC_JOIN_TYPE_FIELD_SIZE 1


#define LORAMAC_JOIN_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_EUI_FIELD_SIZE 8


#define LORAMAC_DEV_NONCE_FIELD_SIZE 2


#define LORAMAC_JOIN_NONCE_FIELD_SIZE 3


#define LORAMAC_RJCOUNT_0_FIELD_SIZE 2


#define LORAMAC_RJCOUNT_1_FIELD_SIZE 2


#define LORAMAC_NET_ID_FIELD_SIZE 3


#define LORAMAC_DEV_ADDR_FIELD_SIZE 4


#define LORAMAC_DL_SETTINGS_FIELD_SIZE 1


#define LORAMAC_RX_DELAY_FIELD_SIZE 1


#define LORAMAC_CF_LIST_FIELD_SIZE 16


#define LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE LORAMAC_DEV_ADDR_FIELD_SIZE


#define LORAMAC_FHDR_F_CTRL_FIELD_SIZE 1


#define LORAMAC_FHDR_F_CNT_FIELD_SIZE 2


#define LORAMAC_FHDR_F_OPTS_MAX_FIELD_SIZE 15


#define LORAMAC_F_PORT_FIELD_SIZE 1


#define LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE 242


#define LORAMAC_MIC_FIELD_SIZE 4






#define LORAMAC_JOIN_REQ_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_1_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_1_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_RE_JOIN_0_2_MSG_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_EUI_FIELD_SIZE + LORAMAC_RJCOUNT_0_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_JOIN_ACCEPT_FRAME_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_NONCE_FIELD_SIZE + LORAMAC_NET_ID_FIELD_SIZE + LORAMAC_DEV_ADDR_FIELD_SIZE + LORAMAC_DL_SETTINGS_FIELD_SIZE + LORAMAC_RX_DELAY_FIELD_SIZE + LORAMAC_CF_LIST_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 160 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define JOIN_ACCEPT_MIC_COMPUTATION_OFFSET ( LORAMAC_MHDR_FIELD_SIZE + LORAMAC_JOIN_TYPE_FIELD_SIZE + LORAMAC_JOIN_EUI_FIELD_SIZE + LORAMAC_DEV_NONCE_FIELD_SIZE )
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_OVERHEAD_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 182 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
#define LORAMAC_FRAME_PAYLOAD_MIN_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_MIC_FIELD_SIZE )







#define LORAMAC_FRAME_PAYLOAD_MAX_SIZE ( LORAMAC_MHDR_FIELD_SIZE + ( LORAMAC_FHDR_DEV_ADDR_FIELD_SIZE + LORAMAC_FHDR_F_CTRL_FIELD_SIZE + LORAMAC_FHDR_F_CNT_FIELD_SIZE ) + LORAMAC_F_PORT_FIELD_SIZE + LORAMAC_MAC_PAYLOAD_FIELD_MAX_SIZE + LORAMAC_MIC_FIELD_SIZE )
# 200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h"
typedef union uLoRaMacDLSettings
{



    uint8_t Value;



    struct sDLSettingsBits
    {



        uint8_t RX2DataRate : 4;



        uint8_t RX1DRoffset : 3;



        uint8_t OptNeg : 1;
    }Bits;
}LoRaMacDLSettings_t;






typedef union uLoRaMacHeader
{



    uint8_t Value;



    struct sMacHeaderBits
    {



        uint8_t Major : 2;



        uint8_t RFU : 3;



        uint8_t MType : 3;
    }Bits;
}LoRaMacHeader_t;






typedef union uLoRaMacFrameCtrl
{



    uint8_t Value;



    struct sCtrlBits
    {



        uint8_t FOptsLen : 4;



        uint8_t FPending : 1;



        uint8_t Ack : 1;



        uint8_t AdrAckReq : 1;



        uint8_t Adr : 1;
    }Bits;
}LoRaMacFrameCtrl_t;






typedef struct sLoRaMacFrameHeader
{



    uint32_t DevAddr;



    LoRaMacFrameCtrl_t FCtrl;



    uint16_t FCnt;



    uint8_t FOpts[15];
}LoRaMacFrameHeader_t;
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 1
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 2






#define REGION_COMMON_DEFAULT_RECEIVE_DELAY1 1000




#define REGION_COMMON_DEFAULT_RECEIVE_DELAY2 ( REGION_COMMON_DEFAULT_RECEIVE_DELAY1 + 1000 )




#define REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY1 5000




#define REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY2 ( REGION_COMMON_DEFAULT_JOIN_ACCEPT_DELAY1 + 1000 )




#define REGION_COMMON_DEFAULT_ADR_ACK_LIMIT 64




#define REGION_COMMON_DEFAULT_ADR_ACK_DELAY 32




#define REGION_COMMON_DEFAULT_RETRANSMIT_TIMEOUT 2000





#define REGION_COMMON_DEFAULT_RETRANSMIT_TIMEOUT_RND 1000




#define REGION_COMMON_DEFAULT_RX1_DR_OFFSET 0




#define REGION_COMMON_DEFAULT_DOWNLINK_DWELL_TIME 0







#define REGION_COMMON_DEFAULT_PING_SLOT_PERIODICITY 7
# 117 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
#define REGION_COMMON_CLASS_B_C_RESP_TIMEOUT 8000


typedef struct sRegionCommonLinkAdrParams
{



    uint8_t NbRep;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t ChMaskCtrl;



    uint16_t ChMask;
}RegionCommonLinkAdrParams_t;

typedef struct sRegionCommonLinkAdrReqVerifyParams
{



    Version_t Version;



    uint8_t Status;



    
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
        AdrEnabled;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t NbRep;



    int8_t CurrentDatarate;



    int8_t CurrentTxPower;



    int8_t CurrentNbRep;



    uint8_t NbChannels;



    uint16_t* ChannelsMask;



    int8_t MinDatarate;



    int8_t MaxDatarate;



    ChannelParams_t* Channels;



    int8_t MinTxPower;



    int8_t MaxTxPower;
}RegionCommonLinkAdrReqVerifyParams_t;

typedef struct sRegionCommonRxBeaconSetupParams
{



    const uint8_t* Datarates;



    uint32_t Frequency;



    uint8_t BeaconSize;



    uint8_t BeaconDatarate;



    uint8_t BeaconChannelBW;



    uint32_t RxTime;



    uint16_t SymbolTimeout;
}RegionCommonRxBeaconSetupParams_t;

typedef struct sRegionCommonCountNbOfEnabledChannelsParams
{



    
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
        Joined;



    uint8_t Datarate;



    uint16_t* ChannelsMask;



    ChannelParams_t* Channels;



    Band_t* Bands;



    uint16_t MaxNbChannels;





    uint16_t* JoinChannels;
}RegionCommonCountNbOfEnabledChannelsParams_t;

typedef struct sRegionCommonIdentifyChannelsParam
{



    UTIL_TIMER_Time_t AggrTimeOff;



    UTIL_TIMER_Time_t LastAggrTx;



    
# 291 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 291 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
        DutyCycleEnabled;



    uint8_t MaxBands;



    SysTime_t ElapsedTimeSinceStartUp;



    
# 303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
   _Bool 
# 303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
        LastTxIsJoinRequest;



    UTIL_TIMER_Time_t ExpectedTimeOnAir;



    RegionCommonCountNbOfEnabledChannelsParams_t* CountNbOfEnabledChannelsParam;
}RegionCommonIdentifyChannelsParam_t;

typedef struct sRegionCommonSetDutyCycleParams
{



    UTIL_TIMER_Time_t DutyCycleTimePeriod;



    uint8_t MaxBands;



    Band_t* Bands;
}RegionCommonSetDutyCycleParams_t;

typedef struct sRegionCommonGetNextLowerTxDrParams
{
    int8_t CurrentDr;
    int8_t MaxDr;
    int8_t MinDr;
    uint8_t NbChannels;
    uint16_t* ChannelsMask;
    ChannelParams_t* Channels;
}RegionCommonGetNextLowerTxDrParams_t;
# 352 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint8_t RegionCommonValueInRange( int8_t value, int8_t min, int8_t max );
# 372 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"

# 372 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
_Bool 
# 372 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
    RegionCommonChanVerifyDr( uint8_t nbChannels, uint16_t* channelsMask, int8_t dr,
                            int8_t minDr, int8_t maxDr, ChannelParams_t* channels );
# 387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"

# 387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
_Bool 
# 387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
    RegionCommonChanDisable( uint16_t* channelsMask, uint8_t id, uint8_t maxChannels );
# 401 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint8_t RegionCommonCountChannels( uint16_t* channelsMask, uint8_t startIdx, uint8_t stopIdx );
# 413 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
void RegionCommonChanMaskCopy( uint16_t* channelsMaskDest, uint16_t* channelsMaskSrc, uint8_t len );
# 427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
void RegionCommonSetBandTxDone( Band_t* band, UTIL_TIMER_Time_t lastTxAirTime, 
# 427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
                                                                        _Bool 
# 427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
                                                                             joined, SysTime_t elapsedTimeSinceStartup );
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
UTIL_TIMER_Time_t RegionCommonUpdateBandTimeOff( 
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
                                          _Bool 
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
                                               joined, Band_t* bands,
                                           uint8_t nbBands, 
# 450 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
                                                           _Bool 
# 450 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
                                                                dutyCycleEnabled,
                                           
# 451 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h" 3 4
                                          _Bool 
# 451 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
                                               lastTxIsJoinRequest, SysTime_t elapsedTimeSinceStartup,
                                           UTIL_TIMER_Time_t expectedTimeOnAir );
# 466 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint8_t RegionCommonParseLinkAdrReq( uint8_t* payload, RegionCommonLinkAdrParams_t* parseLinkAdr );
# 482 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint8_t RegionCommonLinkAdrReqVerifyParams( RegionCommonLinkAdrReqVerifyParams_t* verifyParams, int8_t* dr, int8_t* txPow, uint8_t* nbRep );
# 493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint32_t RegionCommonComputeSymbolTimeLoRa( uint8_t phyDr, uint32_t bandwidthInHz );
# 502 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint32_t RegionCommonComputeSymbolTimeFsk( uint8_t phyDrInKbps );
# 520 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
void RegionCommonComputeRxWindowParameters( uint32_t tSymbolInUs, uint8_t minRxSymbols, uint32_t rxErrorInMs, uint32_t wakeUpTimeInMs, uint32_t* windowTimeoutInSymbols, int32_t* windowOffsetInMs );
# 537 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
int8_t RegionCommonComputeTxPower( int8_t txPowerIndex, float maxEirp, float antennaGain );






void RegionCommonRxBeaconSetup( RegionCommonRxBeaconSetupParams_t* rxBeaconSetupParams );
# 559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
void RegionCommonCountNbOfEnabledChannels( RegionCommonCountNbOfEnabledChannelsParams_t* countNbOfEnabledChannelsParams,
                                           uint8_t* enabledChannels, uint8_t* nbEnabledChannels, uint8_t* nbRestrictedChannels );
# 583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
LoRaMacStatus_t RegionCommonIdentifyChannels( RegionCommonIdentifyChannelsParam_t* identifyChannelsParam,
                                              UTIL_TIMER_Time_t* aggregatedTimeOff, uint8_t* enabledChannels,
                                              uint8_t* nbEnabledChannels, uint8_t* nbRestrictedChannels,
                                              UTIL_TIMER_Time_t* nextTxDelay );
# 595 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
int8_t RegionCommonGetNextLowerTxDr( RegionCommonGetNextLowerTxDrParams_t *params );
# 606 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
int8_t RegionCommonLimitTxPower( int8_t txPower, int8_t maxBandTxPower );
# 617 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/RegionCommon.h"
uint32_t RegionCommonGetBandwidth( uint32_t drIndex, const uint32_t* bandwidths );



typedef uint32_t (*IsSingleChannel_t)(void);

typedef uint8_t (*AlternateDr_t)(void);

typedef struct SingleChannel_s
{
    IsSingleChannel_t IsSingleChannel;
    AlternateDr_t AlternateDr;
}SingleChannel_t;

int32_t US915_SingleChannelRegisterCallback(SingleChannel_t* SingleChannel);

int32_t AU915_SingleChannelRegisterCallback(SingleChannel_t* SingleChannel);
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 2




#define LC(channelIndex) ( uint16_t )( 1 << ( channelIndex - 1 ) )






#define REGION_VERSION 0x02010003







typedef enum ePhyAttribute
{




    PHY_FREQUENCY,



    PHY_MIN_RX_DR,



    PHY_MIN_TX_DR,



    PHY_MAX_RX_DR,



    PHY_MAX_TX_DR,





    PHY_TX_DR,



    PHY_DEF_TX_DR,




    PHY_RX_DR,



    PHY_MAX_TX_POWER,




    PHY_TX_POWER,



    PHY_DEF_TX_POWER,



    PHY_DEF_ADR_ACK_LIMIT,



    PHY_DEF_ADR_ACK_DELAY,



    PHY_MAX_PAYLOAD,



    PHY_DUTY_CYCLE,



    PHY_MAX_RX_WINDOW,



    PHY_RECEIVE_DELAY1,



    PHY_RECEIVE_DELAY2,



    PHY_JOIN_ACCEPT_DELAY1,



    PHY_JOIN_ACCEPT_DELAY2,



    PHY_RETRANSMIT_TIMEOUT,



    PHY_DEF_DR1_OFFSET,



    PHY_DEF_RX2_FREQUENCY,



    PHY_DEF_RX2_DR,



    PHY_CHANNELS_MASK,



    PHY_CHANNELS_DEFAULT_MASK,



    PHY_MAX_NB_CHANNELS,



    PHY_CHANNELS,



    PHY_DEF_UPLINK_DWELL_TIME,



    PHY_DEF_DOWNLINK_DWELL_TIME,



    PHY_DEF_MAX_EIRP,



    PHY_DEF_ANTENNA_GAIN,



    PHY_NEXT_LOWER_TX_DR,



    PHY_BEACON_INTERVAL,



    PHY_BEACON_RESERVED,



    PHY_BEACON_GUARD,



    PHY_BEACON_WINDOW,



    PHY_BEACON_WINDOW_SLOTS,



    PHY_PING_SLOT_WINDOW,



    PHY_BEACON_SYMBOL_TO_DEFAULT,



    PHY_BEACON_SYMBOL_TO_EXPANSION_MAX,



    PHY_PING_SLOT_SYMBOL_TO_EXPANSION_MAX,




    PHY_BEACON_SYMBOL_TO_EXPANSION_FACTOR,




    PHY_PING_SLOT_SYMBOL_TO_EXPANSION_FACTOR,



    PHY_MAX_BEACON_LESS_PERIOD,



    PHY_BEACON_DELAY_BEACON_TIMING_ANS,



    PHY_BEACON_CHANNEL_FREQ,



    PHY_BEACON_FORMAT,



    PHY_BEACON_CHANNEL_DR,



    PHY_BEACON_NB_CHANNELS,



    PHY_BEACON_CHANNEL_OFFSET,



    PHY_PING_SLOT_CHANNEL_FREQ,



    PHY_PING_SLOT_CHANNEL_DR,



    PHY_PING_SLOT_NB_CHANNELS,



    PHY_SF_FROM_DR,



    PHY_BW_FROM_DR,
}PhyAttribute_t;




typedef enum eInitType
{






    INIT_TYPE_DEFAULTS,




    INIT_TYPE_RESET_TO_DEFAULT_CHANNELS,




    INIT_TYPE_ACTIVATE_DEFAULT_CHANNELS
}InitType_t;

typedef enum eChannelsMask
{



    CHANNELS_MASK,



    CHANNELS_DEFAULT_MASK
}ChannelsMask_t;




typedef struct sBeaconFormat
{



    uint8_t BeaconSize;



    uint8_t Rfu1Size;



    uint8_t Rfu2Size;
}BeaconFormat_t;




typedef union uPhyParam
{



    uint32_t Value;



    float fValue;



    uint16_t* ChannelsMask;



    ChannelParams_t* Channels;



    BeaconFormat_t BeaconFormat;



    UTIL_TIMER_Time_t DutyCycleTimePeriod;
}PhyParam_t;




typedef struct sGetPhyParams
{



    PhyAttribute_t Attribute;





    int8_t Datarate;






    uint8_t UplinkDwellTime;






    uint8_t DownlinkDwellTime;





    uint8_t Channel;
}GetPhyParams_t;




typedef struct sSetBandTxDoneParams
{



    uint8_t Channel;



    
# 455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        Joined;



    UTIL_TIMER_Time_t LastTxDoneTime;



    UTIL_TIMER_Time_t LastTxAirTime;



    SysTime_t ElapsedTimeSinceStartUp;
}SetBandTxDoneParams_t;




typedef struct sInitDefaultsParams
{



    void* NvmGroup1;



    void* NvmGroup2;



    void* Bands;



    InitType_t Type;
}InitDefaultsParams_t;




typedef union uVerifyParams
{



    uint32_t Frequency;



    int8_t TxPower;



    
# 509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        DutyCycle;



    struct sDatarateParams
    {



        int8_t Datarate;



        uint8_t DownlinkDwellTime;



        uint8_t UplinkDwellTime;
    }DatarateParams;
}VerifyParams_t;




typedef struct sApplyCFListParams
{
    uint8_t JoinChannel;



    uint8_t* Payload;



    uint8_t Size;
}ApplyCFListParams_t;




typedef struct sChanMaskSetParams
{



    uint16_t* ChannelsMaskIn;



    ChannelsMask_t ChannelsMaskType;
}ChanMaskSetParams_t;




typedef struct sRxConfigParams
{



    uint8_t Channel;



    int8_t Datarate;



    uint8_t Bandwidth;



    int8_t DrOffset;



    uint32_t Frequency;



     uint32_t WindowTimeout;



    int32_t WindowOffset;



    uint8_t DownlinkDwellTime;



    
# 601 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 601 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        RxContinuous;



    LoRaMacRxSlot_t RxSlot;






    ActivationType_t NetworkActivation;
}RxConfigParams_t;




typedef struct sTxConfigParams
{



    uint8_t Channel;



    int8_t Datarate;



    int8_t TxPower;



    float MaxEirp;



    float AntennaGain;



    uint16_t PktLen;
}TxConfigParams_t;




typedef struct sLinkAdrReqParams
{



    Version_t Version;



    uint8_t* Payload;



    uint8_t PayloadSize;



    uint8_t UplinkDwellTime;



    
# 670 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 670 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        AdrEnabled;



    int8_t CurrentDatarate;



    int8_t CurrentTxPower;



    uint8_t CurrentNbRep;
}LinkAdrReqParams_t;




typedef struct sRxParamSetupReqParams
{



    int8_t Datarate;



    int8_t DrOffset;



    uint32_t Frequency;
}RxParamSetupReqParams_t;




typedef struct sNewChannelReqParams
{



    ChannelParams_t* NewChannel;



    int8_t ChannelId;
}NewChannelReqParams_t;




typedef struct sTxParamSetupReqParams
{



    uint8_t UplinkDwellTime;



    uint8_t DownlinkDwellTime;



    uint8_t MaxEirp;
}TxParamSetupReqParams_t;




typedef struct sDlChannelReqParams
{



    uint8_t ChannelId;



    uint32_t Rx1Frequency;
}DlChannelReqParams_t;




typedef enum eAlternateDrType
{



    ALTERNATE_DR,



    ALTERNATE_DR_RESTORE
}AlternateDrType_t;




typedef struct sNextChanParams
{



    UTIL_TIMER_Time_t AggrTimeOff;



    UTIL_TIMER_Time_t LastAggrTx;



    int8_t Datarate;



    
# 788 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 788 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        Joined;



    
# 792 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 792 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        DutyCycleEnabled;



    SysTime_t ElapsedTimeSinceStartUp;



    
# 800 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
   _Bool 
# 800 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
        LastTxIsJoinRequest;



    uint16_t PktLen;
}NextChanParams_t;




typedef struct sChannelAddParams
{



    ChannelParams_t* NewChannel;



    uint8_t ChannelId;
}ChannelAddParams_t;




typedef struct sChannelRemoveParams
{



    uint8_t ChannelId;
}ChannelRemoveParams_t;




typedef struct sRxBeaconSetupParams
{



    uint16_t SymbolTimeout;



    uint32_t RxTime;



    uint32_t Frequency;
}RxBeaconSetup_t;
# 862 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 862 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 862 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionIsActive( LoRaMacRegion_t region );
# 873 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
PhyParam_t RegionGetPhyParam( LoRaMacRegion_t region, GetPhyParams_t* getPhy );
# 882 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
void RegionSetBandTxDone( LoRaMacRegion_t region, SetBandTxDoneParams_t* txDone );
# 891 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
void RegionInitDefaults( LoRaMacRegion_t region, InitDefaultsParams_t* params );
# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionVerify( LoRaMacRegion_t region, VerifyParams_t* verify, PhyAttribute_t phyAttribute );
# 914 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
void RegionApplyCFList( LoRaMacRegion_t region, ApplyCFListParams_t* applyCFList );
# 925 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 925 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 925 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionChanMaskSet( LoRaMacRegion_t region, ChanMaskSetParams_t* chanMaskSet );
# 938 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 938 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 938 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionRxConfig( LoRaMacRegion_t region, RxConfigParams_t* rxConfig, int8_t* datarate );
# 993 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
void RegionComputeRxWindowParameters( LoRaMacRegion_t region, int8_t datarate, uint8_t minRxSymbols, uint32_t rxError, RxConfigParams_t *rxConfigParams );
# 1008 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 1008 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 1008 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionTxConfig( LoRaMacRegion_t region, TxConfigParams_t* txConfig, int8_t* txPower, UTIL_TIMER_Time_t* txTimeOnAir );
# 1027 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
uint8_t RegionLinkAdrReq( LoRaMacRegion_t region, LinkAdrReqParams_t* linkAdrReq, int8_t* drOut, int8_t* txPowOut, uint8_t* nbRepOut, uint8_t* nbBytesParsed );
# 1038 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
uint8_t RegionRxParamSetupReq( LoRaMacRegion_t region, RxParamSetupReqParams_t* rxParamSetupReq );
# 1049 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
int8_t RegionNewChannelReq( LoRaMacRegion_t region, NewChannelReqParams_t* newChannelReq );
# 1062 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
int8_t RegionTxParamSetupReq( LoRaMacRegion_t region, TxParamSetupReqParams_t* txParamSetupReq );
# 1073 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
int8_t RegionDlChannelReq( LoRaMacRegion_t region, DlChannelReqParams_t* dlChannelReq );
# 1086 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
int8_t RegionAlternateDr( LoRaMacRegion_t region, int8_t currentDr, AlternateDrType_t type );
# 1102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
LoRaMacStatus_t RegionNextChannel( LoRaMacRegion_t region, NextChanParams_t* nextChanParams, uint8_t* channel, UTIL_TIMER_Time_t* time, UTIL_TIMER_Time_t* aggregatedTimeOff );
# 1113 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
LoRaMacStatus_t RegionChannelAdd( LoRaMacRegion_t region, ChannelAddParams_t* channelAdd );
# 1124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"

# 1124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h" 3 4
_Bool 
# 1124 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
    RegionChannelsRemove( LoRaMacRegion_t region, ChannelRemoveParams_t* channelRemove );
# 1137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
uint8_t RegionApplyDrOffset( LoRaMacRegion_t region, uint8_t downlinkDwellTime, int8_t dr, int8_t drOffset );
# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/region/Region.h"
void RegionRxBeaconSetup( LoRaMacRegion_t region, RxBeaconSetup_t* rxBeaconSetup, uint8_t* outDr );






Version_t RegionGetVersion( void );
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
#define __LORAMACCLASSB_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
typedef enum eBeaconState
{



    BEACON_STATE_ACQUISITION,



    BEACON_STATE_ACQUISITION_BY_TIME,



    BEACON_STATE_TIMEOUT,



    BEACON_STATE_BEACON_MISSED,




    BEACON_STATE_REACQUISITION,



    BEACON_STATE_LOCKED,



    BEACON_STATE_HALT,




    BEACON_STATE_IDLE,



    BEACON_STATE_GUARD,



    BEACON_STATE_RX,



    BEACON_STATE_LOST,
}BeaconState_t;




typedef enum ePingSlotState
{



    PINGSLOT_STATE_CALC_PING_OFFSET,



    PINGSLOT_STATE_SET_TIMER,



    PINGSLOT_STATE_IDLE,



    PINGSLOT_STATE_RX,
}PingSlotState_t;




typedef struct sPingSlotContext
{




    uint32_t PingSlotWindow;



    uint16_t PingOffset;




    uint16_t SymbolTimeout;



    MulticastCtx_t *NextMulticastChannel;
}PingSlotContext_t;





typedef struct sBeaconContext
{
    struct sBeaconCtrl
    {



        uint8_t BeaconMode : 1;



        uint8_t BeaconAcquired : 1;



        uint8_t BeaconDelaySet : 1;



        uint8_t BeaconChannelSet : 1;



        uint8_t AcquisitionPending : 1;



        uint8_t ResumeBeaconing : 1;
    }Ctrl;




    float Temperature;



    SysTime_t BeaconTime;



    SysTime_t LastBeaconRx;



    SysTime_t NextBeaconRx;





    UTIL_TIMER_Time_t NextBeaconRxAdjusted;




    uint16_t SymbolTimeout;



    UTIL_TIMER_Time_t BeaconWindowMovement;



    uint8_t BeaconTimingChannel;



    UTIL_TIMER_Time_t BeaconTimingDelay;
    UTIL_TIMER_Time_t TimeStamp;




    SysTime_t BeaconTimePrecision;
}BeaconContext_t;




typedef struct sLoRaMacClassBCallback
{





    float ( *GetTemperatureLevel )( void );






    void ( *MacProcessNotify )( void );
}LoRaMacClassBCallback_t;




typedef struct sLoRaMacClassBParams
{



    MlmeIndication_t *MlmeIndication;



    McpsIndication_t *McpsIndication;



    MlmeConfirm_t *MlmeConfirm;



    LoRaMacFlags_t *LoRaMacFlags;



    uint32_t *LoRaMacDevAddr;



    LoRaMacRegion_t *LoRaMacRegion;



    LoRaMacParams_t *LoRaMacParams;



    MulticastCtx_t *MulticastChannels;



    ActivationType_t *NetworkActivation;
}LoRaMacClassBParams_t;





typedef void ( *LoRaMacClassBNvmEvent )( void );
# 306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
void LoRaMacClassBInit( LoRaMacClassBParams_t *classBParams, LoRaMacClassBCallback_t *callbacks,
                        LoRaMacClassBNvmData_t* nvm );






void LoRaMacClassBSetBeaconState( BeaconState_t beaconState );






void LoRaMacClassBSetPingSlotState( PingSlotState_t pingSlotState );






void LoRaMacClassBSetMulticastSlotState( PingSlotState_t multicastSlotState );







# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsAcquisitionInProgress( void );




void LoRaMacClassBBeaconTimerEvent( void* context );




void LoRaMacClassBPingSlotTimerEvent( void* context );




void LoRaMacClassBMulticastSlotTimerEvent( void* context );
# 359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"

# 359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBRxBeacon( uint8_t *payload, uint16_t size );








# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsBeaconExpected( void );








# 375 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 375 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsPingExpected( void );








# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsMulticastExpected( void );







# 390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsAcquisitionPending( void );







# 397 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 397 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBIsBeaconModeActive( void );




void LoRaMacClassBHaltBeaconing( void );




void LoRaMacClassBResumeBeaconing( void );






void LoRaMacClassBSetPingSlotInfo( uint8_t periodicity );
# 423 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacClassBSwitchClass( DeviceClass_t nextClass );
# 438 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacClassBMibGetRequestConfirm( MibRequestConfirm_t *mibGet );
# 454 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
LoRaMacStatus_t LoRaMacMibClassBSetRequestConfirm( MibRequestConfirm_t *mibSet );




void LoRaMacClassBPingSlotInfoAns( void );
# 469 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
uint8_t LoRaMacClassBPingSlotChannelReq( uint8_t datarate, uint32_t frequency );
# 478 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
void LoRaMacClassBBeaconTimingAns( uint16_t beaconTimingDelay, uint8_t beaconTimingChannel, UTIL_TIMER_Time_t lastRxDone );




void LoRaMacClassBDeviceTimeAns( void );
# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"

# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h" 3 4
_Bool 
# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
    LoRaMacClassBBeaconFreqReq( uint32_t frequency );
# 501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
UTIL_TIMER_Time_t LoRaMacClassBIsUplinkCollision( UTIL_TIMER_Time_t txTimeOnAir );





void LoRaMacClassBStopRxSlots( void );





void LoRaMacClassBStartRxSlots( void );
# 523 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
void LoRaMacClassBSetMulticastPeriodicity( MulticastCtx_t* multicastChannel );
# 533 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacClassB.h"
void LoRaMacClassBSetFPendingBit( uint32_t address, uint8_t fPendingSet );




void LoRaMacClassBProcess( void );
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
#define __LORAMAC_CRYPTO_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 1 3







#define _STDLIB_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3


#define __need_size_t 
#define __need_wchar_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 17 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/stdlib.h" 1 3

#define _MACHSTDLIB_H_ 
# 21 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 2 3
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3



# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;



#define __compar_fn_t_defined 
typedef int (*__compar_fn_t) (const void *, const void *);


#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define RAND_MAX __RAND_MAX

int __locale_mb_cur_max (void);

#define MB_CUR_MAX __locale_mb_cur_max()

void abort (void) __attribute__ ((__noreturn__));
int abs (int);





int atexit (void (*__func)(void));
double atof (const char *__nptr);



int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__))
      __attribute__((__alloc_size__(1, 2))) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);



char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);




long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(1))) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *restrict, const wchar_t *restrict, size_t, _mbstate_t *);
# 137 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2))) ;
# 159 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
void srand (unsigned __seed);
double strtod (const char *restrict __n, char **restrict __end_PTR);
double _strtod_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR);

float strtof (const char *restrict __n, char **restrict __end_PTR);







long strtol (const char *restrict __n, char **restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long strtoul (const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
# 191 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
int system (const char *__string);
# 202 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
void _Exit (int __status) __attribute__ ((__noreturn__));




int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);



int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);
# 263 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *restrict __n, char **restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long strtoull (const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);
# 284 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
int _unsetenv_r (struct _reent *, const char *__string);







char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) ;
void * _calloc_r (struct _reent *, size_t, size_t) ;
void _free_r (struct _reent *, void *) ;
void * _realloc_r (struct _reent *, void *, size_t) ;
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 322 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3
extern long double _strtold_r (struct _reent *, const char *restrict, char **restrict);

extern long double strtold (const char *restrict, char **restrict);
# 339 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdlib.h" 3

# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h" 2




# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h"
#define __LORAMAC_MESSAGE_TYPES_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacHeaderTypes.h" 1
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h" 2





# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacMessageTypes.h"
typedef struct sLoRaMacMessageJoinRequest
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t DevNonce;



    uint32_t MIC;
}LoRaMacMessageJoinRequest_t;




typedef struct sLoRaMacMessageReJoinType1
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t JoinEUI[8];



    uint8_t DevEUI[8];



    uint16_t RJcount1;



    uint32_t MIC;
}LoRaMacMessageReJoinType1_t;




typedef struct sLoRaMacMessageReJoinType0or2
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t ReJoinType;



    uint8_t NetID[3];



    uint8_t DevEUI[8];



    uint16_t RJcount0;



    uint32_t MIC;
}LoRaMacMessageReJoinType0or2_t;




typedef struct sLoRaMacMessageJoinAccept
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    uint8_t JoinNonce[3];



    uint8_t NetID[3];



    uint32_t DevAddr;



    LoRaMacDLSettings_t DLSettings;



    uint8_t RxDelay;



    uint8_t CFList[16];



    uint32_t MIC;
}LoRaMacMessageJoinAccept_t;






typedef struct sLoRaMacMessageData
{



    uint8_t* Buffer;



    uint8_t BufSize;



    LoRaMacHeader_t MHDR;



    LoRaMacFrameHeader_t FHDR;



    uint8_t FPort;



    uint8_t* FRMPayload;



    uint8_t FRMPayloadSize;



    uint32_t MIC;
}LoRaMacMessageData_t;




typedef enum eLoRaMacMessageType
{



    LORAMAC_MSG_TYPE_JOIN_REQUEST,



    LORAMAC_MSG_TYPE_RE_JOIN_1,



    LORAMAC_MSG_TYPE_RE_JOIN_0_2,



    LORAMAC_MSG_TYPE_JOIN_ACCEPT,



    LORAMAC_MSG_TYPE_DATA,



    LORAMAC_MSG_TYPE_UNDEF,
}LoRaMacMessageType_t;




typedef struct sLoRaMacMessage
{
    LoRaMacMessageType_t Type;
    union uMessage
    {
        LoRaMacMessageJoinRequest_t JoinReq;
        LoRaMacMessageReJoinType1_t ReJoin1;
        LoRaMacMessageReJoinType0or2_t ReJoin0or2;
        LoRaMacMessageJoinAccept_t JoinAccept;
        LoRaMacMessageData_t Data;
    }Message;
}LoRaMacMessage_t;
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h" 2






#define USE_LRWAN_1_1_X_CRYPTO 1





#define USE_RANDOM_DEV_NONCE 0
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
#define USE_10X_JOIN_NONCE_COUNTER_CHECK 0




#define FCNT_DOWN_INITIAL_VALUE 0xFFFFFFFF




typedef enum eLoRaMacCryptoStatus
{



    LORAMAC_CRYPTO_SUCCESS = 0,



    LORAMAC_CRYPTO_FAIL_MIC,



    LORAMAC_CRYPTO_FAIL_ADDRESS,



    LORAMAC_CRYPTO_FAIL_JOIN_NONCE,



    LORAMAC_CRYPTO_FAIL_RJCOUNT0_OVERFLOW,



    LORAMAC_CRYPTO_FAIL_FCNT_ID,



    LORAMAC_CRYPTO_FAIL_FCNT_SMALLER,



    LORAMAC_CRYPTO_FAIL_FCNT_DUPLICATED,



    LORAMAC_CRYPTO_FAIL_PARAM,



    LORAMAC_CRYPTO_ERROR_NPE,



    LORAMAC_CRYPTO_ERROR_INVALID_KEY_ID,



    LORAMAC_CRYPTO_ERROR_INVALID_ADDR_ID,



    LORAMAC_CRYPTO_ERROR_INVALID_VERSION,



    LORAMAC_CRYPTO_ERROR_BUF_SIZE,



    LORAMAC_CRYPTO_ERROR_SECURE_ELEMENT_FUNC,



    LORAMAC_CRYPTO_ERROR_PARSER,



    LORAMAC_CRYPTO_ERROR_SERIALIZER,



    LORAMAC_CRYPTO_ERROR_RJCOUNT1_OVERFLOW,



    LORAMAC_CRYPTO_ERROR,
}LoRaMacCryptoStatus_t;







typedef void ( *LoRaMacCryptoNvmEvent )( void );
# 178 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoInit( LoRaMacCryptoNvmData_t* nvm );
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetLrWanVersion( Version_t version );
# 199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoGetFCntDown( FCntIdentifier_t fCntID, uint32_t frameFcnt, uint32_t* currentDown );







LoRaMacCryptoStatus_t LoRaMacCryptoGetFCntUp( uint32_t* currentUp );
# 217 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoGetRJcount( FCntIdentifier_t fCntID, uint16_t* rJcount );
# 226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetMulticastReference( MulticastCtx_t* multicastList );
# 235 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSetKey( KeyIdentifier_t keyID, uint8_t* key );
# 244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareJoinRequest( LoRaMacMessageJoinRequest_t* macMsg );
# 253 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareReJoinType1( LoRaMacMessageReJoinType1_t* macMsg );
# 262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoPrepareReJoinType0or2( LoRaMacMessageReJoinType0or2_t* macMsg );
# 273 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoHandleJoinAccept( JoinReqIdentifier_t joinReqType, uint8_t* joinEUI, LoRaMacMessageJoinAccept_t* macMsg );
# 284 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoSecureMessage( uint32_t fCntUp, uint8_t txDr, uint8_t txCh, LoRaMacMessageData_t* macMsg );
# 296 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoUnsecureMessage( AddressIdentifier_t addrID, uint32_t address, FCntIdentifier_t fCntID, uint32_t fCntDown, LoRaMacMessageData_t* macMsg );
# 311 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcRootKey( uint8_t versionMinor, KeyIdentifier_t keyID );
# 321 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcKEKey( KeyIdentifier_t keyID );
# 333 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCrypto.h"
LoRaMacCryptoStatus_t LoRaMacCryptoDeriveMcSessionKeyPair( AddressIdentifier_t addrID, uint32_t mcAddr );
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h" 1
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
#define __SECURE_ELEMENT_H__ 
# 53 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
typedef enum eSecureElementStatus
{



    SECURE_ELEMENT_SUCCESS = 0,



    SECURE_ELEMENT_FAIL_CMAC,



    SECURE_ELEMENT_ERROR_NPE,



    SECURE_ELEMENT_ERROR_INVALID_KEY_ID,



    SECURE_ELEMENT_ERROR_INVALID_LORAWAM_SPEC_VERSION,



    SECURE_ELEMENT_ERROR_BUF_SIZE,



    SECURE_ELEMENT_ERROR,



    SECURE_ELEMENT_FAIL_ENCRYPT,
}SecureElementStatus_t;
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementInit( SecureElementNvmData_t* nvm );
# 105 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementSetKey( KeyIdentifier_t keyID, uint8_t* key );
# 117 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementComputeAesCmac( uint8_t* micBxBuffer, uint8_t* buffer, uint16_t size, KeyIdentifier_t keyID, uint32_t* cmac );
# 128 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementVerifyAesCmac( uint8_t* buffer, uint16_t size, uint32_t expectedCmac, KeyIdentifier_t keyID );
# 139 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementAesEncrypt( uint8_t* buffer, uint16_t size, KeyIdentifier_t keyID, uint8_t* encBuffer );
# 149 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementDeriveAndStoreKey( uint8_t* input, KeyIdentifier_t rootKeyID, KeyIdentifier_t targetKeyID );
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/secure-element.h"
SecureElementStatus_t SecureElementProcessJoinAccept( JoinReqIdentifier_t joinReqType, uint8_t* joinEui,
                                                      uint16_t devNonce, uint8_t* encJoinAccept,
                                                      uint8_t encJoinAcceptSize, uint8_t* decJoinAccept,
                                                      uint8_t* versionMinor );







SecureElementStatus_t SecureElementSetDevEui( uint8_t* devEui );






uint8_t* SecureElementGetDevEui( void );







SecureElementStatus_t SecureElementSetJoinEui( uint8_t* joinEui );






uint8_t* SecureElementGetJoinEui( void );







SecureElementStatus_t SecureElementSetPin( uint8_t* pin );






uint8_t* SecureElementGetPin( void );
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTest.h" 1
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTest.h"
#define __LORAMACTEST_H__ 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTest.h"
void LoRaMacTestSetDutyCycleOn( 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTest.h" 3 4
                               _Bool 
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacTest.h"
                                    enable );
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 1
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
#define __LORAMAC_CONFIRMQUEUE_H__ 
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.h" 1
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 2




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




typedef struct sMlmeConfirmQueue
{



    Mlme_t Request;



    LoRaMacEventInfoStatus_t Status;



    
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
        ReadyToHandle;




    
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
        RestrictCommonReadyToHandle;
}MlmeConfirmQueue_t;






void LoRaMacConfirmQueueInit( LoRaMacPrimitives_t* primitive );
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"

# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueAdd( MlmeConfirmQueue_t* mlmeConfirm );







# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveLast( void );







# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveFirst( void );
# 118 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
void LoRaMacConfirmQueueSetStatus( LoRaMacEventInfoStatus_t status, Mlme_t request );
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatus( Mlme_t request );






void LoRaMacConfirmQueueSetStatusCmn( LoRaMacEventInfoStatus_t status );






LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatusCmn( void );
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"

# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsCmdActive( Mlme_t request );






void LoRaMacConfirmQueueHandleCb( MlmeConfirm_t* mlmeConfirm );






uint8_t LoRaMacConfirmQueueGetCnt( void );







# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsFull( void );
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h"
#define __LORAMAC_PARSER_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h"
typedef enum eLoRaMacParserStatus
{



    LORAMAC_PARSER_SUCCESS = 0,



    LORAMAC_PARSER_FAIL,



    LORAMAC_PARSER_ERROR_NPE,



    LORAMAC_PARSER_ERROR,
}LoRaMacParserStatus_t;
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacParser.h"
LoRaMacParserStatus_t LoRaMacParserJoinAccept( LoRaMacMessageJoinAccept_t *macMsg );







LoRaMacParserStatus_t LoRaMacParserData( LoRaMacMessageData_t *macMsg );
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
#define __LORAMAC_COMMANDS_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h" 2






#define LORAMAC_COMMADS_MAX_NUM_OF_PARAMS 2




typedef struct sMacCommand MacCommand_t;

struct sMacCommand
{



    MacCommand_t* Next;



    uint8_t CID;



    uint8_t Payload[2];



    size_t PayloadSize;



    
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h" 3 4
   _Bool 
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
        IsSticky;



    
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h" 3 4
   _Bool 
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
        IsConfirmationRequired;
};




typedef enum eLoRaMacCommandsStatus
{



    LORAMAC_COMMANDS_SUCCESS = 0,



    LORAMAC_COMMANDS_ERROR_NPE,



    LORAMAC_COMMANDS_ERROR_MEMORY,



    LORAMAC_COMMANDS_ERROR_CMD_NOT_FOUND,



    LORAMAC_COMMANDS_ERROR_UNKNOWN_CMD,



    LORAMAC_COMMANDS_ERROR,
}LoRaMacCommandStatus_t;





typedef void ( *LoRaMacCommandsNvmEvent )( void );






LoRaMacCommandStatus_t LoRaMacCommandsInit( void );
# 139 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsAddCmd( uint8_t cid, uint8_t* payload, size_t payloadSize );
# 148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsRemoveCmd( MacCommand_t* macCmd );
# 158 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetCmd( uint8_t cid, MacCommand_t** macCmd );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveNoneStickyCmds( void );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveStickyAnsCmds( void );
# 181 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetSizeSerializedCmds( size_t* size );
# 192 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsSerializeCmds( size_t availableSize, size_t* effectiveSize, uint8_t* buffer );
# 201 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacCommands.h"
uint8_t LoRaMacCommandsGetCmdSize( uint8_t cid );
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"
#define __LORAMACADR_H__ 
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"
typedef struct sCalcNextAdrParams
{



    
# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h" 3 4
   _Bool 
# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"
        UpdateChanMask;



    
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h" 3 4
   _Bool 
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"
        AdrEnabled;



    uint32_t AdrAckCounter;



    uint16_t AdrAckLimit;



    uint16_t AdrAckDelay;



    int8_t Datarate;



    int8_t TxPower;



    uint8_t NbTrans;



    uint8_t UplinkDwellTime;



    LoRaMacRegion_t Region;
}CalcNextAdrParams_t;
# 119 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"

# 119 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h" 3 4
_Bool 
# 119 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacAdr.h"
    LoRaMacAdrCalcNext( CalcNextAdrParams_t* adrNext, int8_t* drOut, int8_t* txPowOut,
                         uint8_t* nbTransOut, uint32_t* adrAckCounter );
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacSerializer.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacSerializer.h"
#define __LORAMAC_SERIALIZER_H__ 
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMacSerializer.h"
typedef enum eLoRaMacSerializerStatus
{



    LORAMAC_SERIALIZER_SUCCESS = 0,



    LORAMAC_SERIALIZER_ERROR_NPE,



    LORAMAC_SERIALIZER_ERROR_BUF_SIZE,



    LORAMAC_SERIALIZER_ERROR,
}LoRaMacSerializerStatus_t;







LoRaMacSerializerStatus_t LoRaMacSerializerJoinRequest( LoRaMacMessageJoinRequest_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerReJoinType1( LoRaMacMessageReJoinType1_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerReJoinType0or2( LoRaMacMessageReJoinType0or2_t* macMsg );







LoRaMacSerializerStatus_t LoRaMacSerializerData( LoRaMacMessageData_t* macMsg );
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
#define __RADIO_H__ 
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
typedef enum
{
    MODEM_FSK = 0,
    MODEM_LORA,
}RadioModems_t;




typedef enum
{
    RF_IDLE = 0,
    RF_RX_RUNNING,
    RF_TX_RUNNING,
    RF_CAD,
}RadioState_t;




typedef struct
{



    void ( *TxDone )( void );



    void ( *TxTimeout )( void );
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    void ( *RxDone )( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr );



    void ( *RxTimeout )( void );



    void ( *RxError )( void );





    void ( *FhssChangeChannel )( uint8_t currentChannel );






    void ( *CadDone ) ( 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                       _Bool 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                            channelActivityDetected );




    void ( *GnssDone )( void );




    void ( *WifiDone )( void );
}RadioEvents_t;




struct Radio_s
{





    void ( *Init )( RadioEvents_t *events );





    RadioState_t ( *GetStatus )( void );





    void ( *SetModem )( RadioModems_t modem );





    void ( *SetChannel )( uint32_t freq );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
   _Bool 
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
           ( *IsChannelFree )( uint32_t freq, uint32_t rxBandwidth, int16_t rssiThresh, uint32_t maxCarrierSenseTime );
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    uint32_t ( *Random )( void );
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    void ( *SetRxConfig )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint32_t bandwidthAfc, uint16_t preambleLen,
                              uint16_t symbTimeout, 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                                   _Bool 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                                        fixLen,
                              uint8_t payloadLen,
                              
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                             _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                  crcOn, 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                         _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                              freqHopOn, uint8_t hopPeriod,
                              
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                             _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                  iqInverted, 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                              _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                                   rxContinuous );
# 245 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    void ( *SetTxConfig )( RadioModems_t modem, int8_t power, uint32_t fdev,
                              uint32_t bandwidth, uint32_t datarate,
                              uint8_t coderate, uint16_t preambleLen,
                              
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                             _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                  fixLen, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                          _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                               crcOn, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                                      _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                                           freqHopOn,
                              uint8_t hopPeriod, 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                                _Bool 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                                     iqInverted, uint32_t timeout );






    
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
   _Bool 
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
           ( *CheckRfFrequency )( uint32_t frequency );
# 283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    uint32_t ( *TimeOnAir )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                                   _Bool 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                                        fixLen, uint8_t payloadLen,
                              
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                             _Bool 
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                  crcOn );







    void ( *Send )( uint8_t *buffer, uint8_t size );



    void ( *Sleep )( void );



    void ( *Standby )( void );





    void ( *Rx )( uint32_t timeout );



    void ( *StartCad )( void );







    void ( *SetTxContinuousWave )( uint32_t freq, int8_t power, uint16_t time );





    int16_t ( *Rssi )( RadioModems_t modem );






    void ( *Write )( uint32_t addr, uint8_t data );






    uint8_t ( *Read )( uint32_t addr );







    void ( *WriteBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );







    void ( *ReadBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );






    void ( *SetMaxPayloadLength )( RadioModems_t modem, uint8_t max );







    void ( *SetPublicNetwork )( 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h" 3 4
                                  _Bool 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
                                       enable );





    uint32_t ( *GetWakeupTime )( void );



    void ( *IrqProcess )( void );
# 393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    void ( *RxBoosted )( uint32_t timeout );
# 402 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/radio/radio.h"
    void ( *SetRxDutyCycle ) ( uint32_t rxTime, uint32_t sleepTime );
};







extern const struct Radio_s Radio;
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/service/lora/service_lora_arssi.h" 1

#define __SERVICE_LORA_ARSSI_H__ 
# 12 "/home/jenkins/workspace/RUI_Release/rui-v3/component/service/lora/service_lora_arssi.h"
typedef struct chan_rssi_t
{
    uint32_t chan;
    uint16_t mask;
    int8_t rssi;
} chan_rssi;

void service_lora_arssi_tx_callback(uint8_t channel);
void service_lora_arssi_rx_callback(int8_t rssi);
int32_t service_lora_get_arssi(chan_rssi *iterator);
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 1

#define _UDRV_SYSTEM_H_ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/timer/udrv_timer.h" 1

#define _UDRV_TIMER_H_ 







typedef enum {
        TIMER_0 = 0,
        TIMER_1 = 1,
        TIMER_2 = 2,
        TIMER_3 = 3,
        TIMER_4 = 4,
        TIMER_ID_MAX = 5,
} TimerID_E;

typedef enum {
        SYSTIMER_LORAWAN = 0,
        SYSTIMER_TRANSPARENT_MODE = 1,
        SYSTIMER_PROTOCOL_MODE = 2,
        SYSTIMER_LED = 3,
        SYSTIMER_LCT = 4,
        SYSTIMER_ID_MAX = 5,
} SysTimerID_E;

typedef enum hwtmr_op_mode {
    HTMR_ONESHOT = 0,
    HTMR_PERIODIC = 1,
} TimerMode_E;

typedef void (*timer_handler) (void *m_data);


struct udrv_timer_api {
    void (*TIMER_INIT) (void);
    int32_t (*TIMER_CREATE) (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
    int32_t (*TIMER_START) (TimerID_E timer_id, uint32_t count, void *m_data);
    int32_t (*TIMER_STOP) (TimerID_E timer_id);
};

void udrv_timer_init (void);
int32_t udrv_timer_create (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_timer_start (TimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_timer_stop (TimerID_E timer_id);

int32_t udrv_system_timer_create (SysTimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_system_timer_start (SysTimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_system_timer_stop (SysTimerID_E timer_id);

void udrv_system_timer_handler_handler (void *pdata);

unsigned long udrv_get_microsecond(void);
# 11 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 2

#define RANDOM_LENGTH 4
#define SEED_LENGTH 4


#define EVENT_QUEUE_SIZE (128)
#define EVENT_DATA_SIZE (8)




typedef enum
{
    UDRV_SYS_EVT_OP_SERIAL_UART = 0x00,







    UDRV_SYS_EVT_OP_LORAWAN,
    UDRV_SYS_EVT_OP_LORAWAN_JOIN_CB,

    UDRV_SYS_EVT_OP_USER_APP,
    UDRV_SYS_EVT_OP_USER_TIMER,
    UDRV_SYS_EVT_OP_SYS_TIMER,



    UDRV_SYS_EVT_OP_SERIAL_FALLBACK,
    UDRV_SYS_EVT_OP_RTC,
    UDRV_SYS_EVT_OP_GPIO_INTERRUPT,
} udrv_system_event_op_t;

typedef struct
{
    udrv_system_event_op_t request;
    void *p_context;
} udrv_system_event_t;

typedef void (*UDRV_TASK_HANDLER) (void);

void udrv_system_event_init(void);

int32_t udrv_system_event_produce(udrv_system_event_t *event);

void udrv_system_event_consume(void);

void udrv_system_reboot(void);
# 69 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h"
void udrv_system_critical_section_begin(uint32_t *mask);

void udrv_system_critical_section_end (uint32_t *mask);

unsigned long udrv_system_random (unsigned long maxvalue);

void udrv_system_randomseed(unsigned long seed);

int32_t udrv_system_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t udrv_system_user_app_timer_start (uint32_t count, void *m_data);

int32_t udrv_system_user_app_timer_stop (void);

int32_t udrv_create_thread(char *name, UDRV_TASK_HANDLER handler);
void udrv_destroy_thread(char *name);
void udrv_destroy_myself(void);
void udrv_thread_lock(void);
void udrv_thread_unlock(void);
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 2




#define LORAMAC_PHY_MAXPAYLOAD 255




#define LORA_MAC_COMMAND_MAX_FOPTS_LENGTH 15




#define BACKOFF_DC_1_HOUR 100




#define BACKOFF_DC_10_HOURS 1000




#define BACKOFF_DC_24_HOURS 10000




#define ADR_ACK_COUNTER_MAX 0xFFFFFFFF




#define ABP_JOIN_PENDING_DELAY_MS 10




enum eLoRaMacState
{
    LORAMAC_IDLE = 0x00000000,
    LORAMAC_STOPPED = 0x00000001,
    LORAMAC_TX_RUNNING = 0x00000002,
    LORAMAC_RX = 0x00000004,
    LORAMAC_ACK_RETRY = 0x00000010,
    LORAMAC_TX_DELAYED = 0x00000020,
    LORAMAC_TX_CONFIG = 0x00000040,
    LORAMAC_RX_ABORT = 0x00000080,
    LORAMAC_ABP_JOIN_PENDING = 0x00000100,
};




typedef enum eLoRaMacRequestHandling
{
    LORAMAC_REQUEST_HANDLING_OFF = 0,
    LORAMAC_REQUEST_HANDLING_ON = !LORAMAC_REQUEST_HANDLING_OFF
}LoRaMacRequestHandling_t;

typedef struct sLoRaMacCtx
{



    uint16_t PktBufferLen;



    uint8_t PktBuffer[255];



    LoRaMacMessage_t TxMsg;



    uint8_t AppData[255];



    uint8_t AppDataSize;



    uint8_t RxPayload[255];
    SysTime_t LastTxSysTime;



    uint32_t MacState;



    LoRaMacPrimitives_t* MacPrimitives;



    LoRaMacCallback_t* MacCallbacks;



    RadioEvents_t RadioEvents;



    UTIL_TIMER_Object_t TxDelayedTimer;



    UTIL_TIMER_Object_t RxWindowTimer1;
    UTIL_TIMER_Object_t RxWindowTimer2;





    uint32_t RxWindow1Delay;
    uint32_t RxWindow2Delay;



    RxConfigParams_t RxWindow1Config;
    RxConfigParams_t RxWindow2Config;
    RxConfigParams_t RxWindowCConfig;



    UTIL_TIMER_Object_t RetransmitTimeoutTimer;



    uint8_t ChannelsNbTransCounter;



    
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        RetransmitTimeoutRetry;




    
# 194 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 194 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        NodeAckRequested;



    uint8_t Channel;



    UTIL_TIMER_Time_t TxTimeOnAir;



    McpsIndication_t McpsIndication;



    McpsConfirm_t McpsConfirm;



    MlmeConfirm_t MlmeConfirm;



    MlmeIndication_t MlmeIndication;



    LoRaMacRxSlot_t RxSlot;



    LoRaMacFlags_t MacFlags;



    LoRaMacRequestHandling_t AllowRequests;



    UTIL_TIMER_Object_t Rejoin0CycleTimer;



    UTIL_TIMER_Object_t Rejoin1CycleTimer;



    UTIL_TIMER_Object_t ForceRejoinReqCycleTimer;



    UTIL_TIMER_Time_t Rejoin0CycleTime;



    UTIL_TIMER_Time_t Rejoin1CycleTime;



    UTIL_TIMER_Time_t ForceRejonCycleTime;



    UTIL_TIMER_Time_t DutyCycleWaitTime;



    UTIL_TIMER_Time_t ResponseTimeoutStartTime;



    UTIL_TIMER_Object_t AbpJoinPendingTimer;



    uint8_t MacCommandsBuffer[128];
}LoRaMacCtx_t;




static LoRaMacCtx_t MacCtx;

static LoRaMacNvmData_t Nvm;

static Band_t RegionBands[6];




typedef union uLoRaMacRadioEvents
{
    uint32_t Value;
    struct sEvents
    {
        uint32_t RxProcessPending : 1;
        uint32_t RxTimeout : 1;
        uint32_t RxError : 1;
        uint32_t TxTimeout : 1;
        uint32_t RxDone : 1;
        uint32_t TxDone : 1;
    }Events;
}LoRaMacRadioEvents_t;




LoRaMacRadioEvents_t LoRaMacRadioEvents = { .Value = 0 };




static void OnRadioTxDone( void );





static void PrepareRxDoneAbort( void );




static void OnRadioRxDone( uint8_t* payload, uint16_t size, int16_t rssi, int8_t snr );




static void OnRadioTxTimeout( void );




static void OnRadioRxError( void );




static void OnRadioRxTimeout( void );




static void OnTxDelayedTimerEvent( void* context );




static void OnRxWindow1TimerEvent( void* context );




static void OnRxWindow2TimerEvent( void* context );




static void OnRejoin0CycleTimerEvent( void* context );




static void OnRejoin1CycleTimerEvent( void* context );





static void OnForceRejoinReqCycleTimerEvent( void* context );




static void OnRetransmitTimeoutTimerEvent( void* context );
# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static LoRaMacCryptoStatus_t GetFCntDown( AddressIdentifier_t addrID, FType_t fType, LoRaMacMessageData_t* macMsg, Version_t lrWanVersion,
                                          FCntIdentifier_t* fCntID, uint32_t* currentDown );






static LoRaMacStatus_t SwitchClass( DeviceClass_t deviceClass );
# 400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static uint8_t GetMaxAppPayloadWithoutFOptsLength( int8_t datarate );
# 418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static 
# 418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           ValidatePayloadLength( uint8_t lenN, int8_t datarate, uint8_t fOptsLen );
# 429 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static void ProcessMacCommands( uint8_t* payload, uint8_t macIndex, uint8_t commandsSize, int8_t snr, LoRaMacRxSlot_t rxSlot );
# 440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t Send( LoRaMacHeader_t* macHdr, uint8_t fPort, void* fBuffer, uint16_t fBufferSize );
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t SendReJoinReq( JoinReqIdentifier_t joinReqType );
# 462 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t PrepareFrame( LoRaMacHeader_t* macHdr, LoRaMacFrameCtrl_t* fCtrl, uint8_t fPort, void* fBuffer, uint16_t fBufferSize );
# 471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static LoRaMacStatus_t ScheduleTx( 
# 471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  _Bool 
# 471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       allowDelayedTx );







static LoRaMacStatus_t SecureFrame( uint8_t txDr, uint8_t txCh );




static void CalculateBackOff( void );
# 493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static void RemoveMacCommands( LoRaMacRxSlot_t rxSlot, LoRaMacFrameCtrl_t fCtrl, Mcps_t request );
# 504 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t SendFrameOnChannel( uint8_t channel );
# 516 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t SetTxContinuousWave( uint16_t timeout, uint32_t frequency, uint8_t power );
# 525 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static 
# 525 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 525 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           ConvertRejoinCycleTime( uint32_t rejoinCycleTime, uint32_t* timeInMiliSec );






static void ResetMacParameters( 
# 532 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                               _Bool 
# 532 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                    isRejoin );






static 
# 539 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 539 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           IsReJoin0Required( void );







static void RxWindowSetup( UTIL_TIMER_Object_t* rxTimer, RxConfigParams_t* rxConfig );





static void OpenContinuousRxCWindow( void );






static LoRaMacNvmData_t* GetNvmData( void );
# 573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static LoRaMacStatus_t RestoreNvmData( LoRaMacNvmData_t* contexts );
# 587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
LoRaMacStatus_t DetermineFrameType( LoRaMacMessageData_t* macMsg, FType_t* fType );
# 597 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static 
# 597 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 597 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetrans( uint8_t counter, uint8_t limit );






static 
# 604 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 604 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetransUnconfirmedUplink( void );






static 
# 611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetransConfirmedUplink( void );
# 621 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static uint32_t IncreaseAdrAckCounter( uint32_t counter );






static 
# 628 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 628 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           StopRetransmission( void );




static void OnMacProcessNotify( void );




static void CallNvmDataChangeCallback( uint16_t notifyFlags );






static uint8_t IsRequestPending( void );






static void LoRaMacEnableRequests( LoRaMacRequestHandling_t requestState );




static void LoRaMacCheckForRxAbort( void );







static uint8_t LoRaMacCheckForBeaconAcquisition( void );
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckForMinimumAbpDatarate( 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       _Bool 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            adr, ActivationType_t activation, 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                              _Bool 
# 677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                   datarateChanged );




static void LoRaMacHandleMlmeRequest( void );




static void LoRaMacHandleMcpsRequest( void );




static void LoRaMacHandleRequestEvents( void );




static void LoRaMacHandleIndicationEvents( void );




static void LoRaMacHandleRejoinEvents( void );






static void LoRaMacHandleNvm( LoRaMacNvmData_t* nvmData );
# 724 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
static 
# 724 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 724 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           LoRaMacHandleResponseTimeout( UTIL_TIMER_Time_t timeoutInMs, UTIL_TIMER_Time_t startTimeInMs );




struct
{
    UTIL_TIMER_Time_t CurTime;
}TxDoneParams;




struct
{
    UTIL_TIMER_Time_t LastRxDone;
    uint8_t *Payload;
    uint16_t Size;
    int16_t Rssi;
    int8_t Snr;
}RxDoneParams;

static void OnRadioTxDone( void )
{
    TxDoneParams.CurTime = UTIL_TIMER_GetCurrentTime( );
    MacCtx.LastTxSysTime = SysTimeGet( );

    LoRaMacRadioEvents.Events.TxDone = 1;

    OnMacProcessNotify( );
}

static void OnRadioRxDone( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr )
{
    RxDoneParams.LastRxDone = UTIL_TIMER_GetCurrentTime( );
    RxDoneParams.Payload = payload;
    RxDoneParams.Size = size;
    RxDoneParams.Rssi = rssi;
    RxDoneParams.Snr = snr;

    LoRaMacRadioEvents.Events.RxDone = 1;
    LoRaMacRadioEvents.Events.RxProcessPending = 1;

    OnMacProcessNotify( );
}

static void OnRadioTxTimeout( void )
{
    LoRaMacRadioEvents.Events.TxTimeout = 1;

    OnMacProcessNotify( );
}

static void OnRadioRxError( void )
{
    LoRaMacRadioEvents.Events.RxError = 1;

    OnMacProcessNotify( );
}

static void OnRadioRxTimeout( void )
{
    LoRaMacRadioEvents.Events.RxTimeout = 1;

    OnMacProcessNotify( );
}

static void UpdateRxSlotIdleState( void )
{
    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        MacCtx.RxSlot = RX_SLOT_NONE;
    }
    else
    {
        MacCtx.RxSlot = RX_SLOT_WIN_CLASS_C;
    }
}

static void ProcessRadioTxDone( void )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    SetBandTxDoneParams_t txDone;

    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }


    uint32_t mask; BoardCriticalSectionBegin( &mask );
    uint32_t offset = UTIL_TIMER_GetCurrentTime( ) - TxDoneParams.CurTime;
    do{ UTIL_TIMER_SetPeriod(&MacCtx.RxWindowTimer1, MacCtx.RxWindow1Delay - offset); } while(0);
    do { UTIL_TIMER_Start(&MacCtx.RxWindowTimer1); } while(0);
    do{ UTIL_TIMER_SetPeriod(&MacCtx.RxWindowTimer2, MacCtx.RxWindow2Delay - offset); } while(0);
    do { UTIL_TIMER_Start(&MacCtx.RxWindowTimer2); } while(0);
    BoardCriticalSectionEnd( &mask );

    if( MacCtx.NodeAckRequested == 
# 823 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  1 
# 823 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       )
    {
        getPhy.Attribute = PHY_RETRANSMIT_TIMEOUT;
        phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
        do{ UTIL_TIMER_SetPeriod(&MacCtx.RetransmitTimeoutTimer, MacCtx.RxWindow2Delay + phyParam.Value); } while(0);
        do { UTIL_TIMER_Start(&MacCtx.RetransmitTimeoutTimer); } while(0);
    }
    else
    {

        MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_OK;
    }


    Nvm.MacGroup1.LastTxDoneTime = TxDoneParams.CurTime;


    txDone.Channel = MacCtx.Channel;
    txDone.LastTxDoneTime = TxDoneParams.CurTime;
    txDone.ElapsedTimeSinceStartUp = SysTimeSub( SysTimeGetMcuTime( ), Nvm.MacGroup2.InitializationTime );
    txDone.LastTxAirTime = MacCtx.TxTimeOnAir;
    txDone.Joined = 
# 844 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                    1
# 844 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                        ;
    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        txDone.Joined = 
# 847 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 847 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;
    }

    RegionSetBandTxDone( Nvm.MacGroup2.Region, &txDone );
}

static void PrepareRxDoneAbort( void )
{
    MacCtx.MacState |= LORAMAC_RX_ABORT;

    if( MacCtx.NodeAckRequested == 
# 857 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  1 
# 857 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       )
    {
        OnRetransmitTimeoutTimerEvent( 
# 859 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      ((void *)0) 
# 859 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           );
    }

    MacCtx.MacFlags.Bits.McpsInd = 1;
    MacCtx.MacFlags.Bits.MacDone = 1;

    UpdateRxSlotIdleState( );
}

static void ProcessRadioRxDone( void )
{
    LoRaMacHeader_t macHdr;
    ApplyCFListParams_t applyCFList;
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    LoRaMacCryptoStatus_t macCryptoStatus = LORAMAC_CRYPTO_ERROR;

    LoRaMacMessageData_t macMsgData;
    LoRaMacMessageJoinAccept_t macMsgJoinAccept;
    uint8_t *payload = RxDoneParams.Payload;
    uint16_t size = RxDoneParams.Size;
    int16_t rssi = RxDoneParams.Rssi;
    int8_t snr = RxDoneParams.Snr;

    uint8_t pktHeaderLen = 0;

    uint32_t downLinkCounter = 0;
    uint32_t address = Nvm.MacGroup2.DevAddr;
    uint8_t multicast = 0;
    AddressIdentifier_t addrID = UNICAST_DEV_ADDR;
    FCntIdentifier_t fCntID;
    uint8_t macCmdPayload[2] = { 0 };
    Mlme_t joinType = MLME_JOIN;

    LoRaMacRadioEvents.Events.RxProcessPending = 0;

    MacCtx.McpsConfirm.AckReceived = 
# 895 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                    0
# 895 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         ;
    MacCtx.McpsIndication.Rssi = rssi;
    MacCtx.McpsIndication.Snr = snr;
    MacCtx.McpsIndication.RxSlot = MacCtx.RxSlot;
    MacCtx.McpsIndication.Port = 0;
    MacCtx.McpsIndication.Multicast = 0;
    MacCtx.McpsIndication.IsUplinkTxPending = 0;
    MacCtx.McpsIndication.Buffer = 
# 902 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  ((void *)0)
# 902 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                      ;
    MacCtx.McpsIndication.BufferSize = 0;
    MacCtx.McpsIndication.RxData = 
# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  0
# 904 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       ;
    MacCtx.McpsIndication.AckReceived = 
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       0
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            ;
    MacCtx.McpsIndication.DownLinkCounter = 0;
    MacCtx.McpsIndication.McpsIndication = MCPS_UNCONFIRMED;
    MacCtx.McpsIndication.DevAddress = 0;
    MacCtx.McpsIndication.DeviceTimeAnsReceived = 
# 909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 0
# 909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      ;
    MacCtx.McpsIndication.ResponseTimeout = 0;

    Radio.Sleep( );

    if( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 )
    {
        do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer2)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer2); } } while(0);
    }


    if( LoRaMacClassBRxBeacon( payload, size ) == 
# 920 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 1 
# 920 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      )
    {
        MacCtx.MlmeIndication.BeaconInfo.Rssi = rssi;
        MacCtx.MlmeIndication.BeaconInfo.Snr = snr;
        return;
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 929 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1 
# 929 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  )
        {
            LoRaMacClassBSetPingSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBPingSlotTimerEvent( 
# 932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 );
            MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_PING_SLOT;
        }
        else if( LoRaMacClassBIsMulticastExpected( ) == 
# 935 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                       1 
# 935 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                            )
        {
            LoRaMacClassBSetMulticastSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBMulticastSlotTimerEvent( 
# 938 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 ((void *)0) 
# 938 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      );
            MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT;
        }
    }


    if( size == 0 )
    {
        MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
        PrepareRxDoneAbort( );
        return;
    }

    macHdr.Value = payload[pktHeaderLen++];


    if( macHdr.Bits.Major != 0 )
    {
        MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
        PrepareRxDoneAbort( );
        return;
    }

    switch( macHdr.Bits.MType )
    {
        case FRAME_TYPE_JOIN_ACCEPT:
        {

            if( size < ( 1 + 3 + 3 + 4 + 1 + 1 + 4 ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macMsgJoinAccept.Buffer = payload;
            macMsgJoinAccept.BufSize = size;


            if( ( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE ) && ( Nvm.MacGroup2.IsRejoinAcceptPending == 
# 976 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                                                       0 
# 976 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                                             ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macCryptoStatus = LoRaMacCryptoHandleJoinAccept( JOIN_REQ, SecureElementGetJoinEui( ), &macMsgJoinAccept );

            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                macCryptoStatus = LoRaMacCryptoHandleJoinAccept( REJOIN_REQ_0, SecureElementGetJoinEui( ), &macMsgJoinAccept );
                joinType = MLME_REJOIN_0;
            }

            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                macCryptoStatus = LoRaMacCryptoHandleJoinAccept( REJOIN_REQ_1, SecureElementGetJoinEui( ), &macMsgJoinAccept );
                joinType = MLME_REJOIN_1;
            }

            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                macCryptoStatus = LoRaMacCryptoHandleJoinAccept( REJOIN_REQ_2, SecureElementGetJoinEui( ), &macMsgJoinAccept );
                joinType = MLME_REJOIN_2;
            }

            if( LORAMAC_CRYPTO_SUCCESS == macCryptoStatus )
            {
                VerifyParams_t verifyRxDr;

                if( macMsgJoinAccept.DLSettings.Bits.RX2DataRate != 0x0F )
                {
                    verifyRxDr.DatarateParams.Datarate = macMsgJoinAccept.DLSettings.Bits.RX2DataRate;
                    verifyRxDr.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
                    if( RegionVerify( Nvm.MacGroup2.Region, &verifyRxDr, PHY_RX_DR ) == 
# 1010 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                       0 
# 1010 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                             )
                    {

                        if( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 1013 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                          1 
# 1013 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                               )
                        {
                            LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL, MLME_JOIN );
                        }
                        break;
                    }
                }


                Nvm.MacGroup2.NetID = ( uint32_t ) macMsgJoinAccept.NetID[0];
                Nvm.MacGroup2.NetID |= ( ( uint32_t ) macMsgJoinAccept.NetID[1] << 8 );
                Nvm.MacGroup2.NetID |= ( ( uint32_t ) macMsgJoinAccept.NetID[2] << 16 );


                Nvm.MacGroup2.DevAddr = macMsgJoinAccept.DevAddr;


                Nvm.MacGroup2.MacParams.Rx1DrOffset = macMsgJoinAccept.DLSettings.Bits.RX1DRoffset;


                if( macMsgJoinAccept.DLSettings.Bits.RX2DataRate != 0x0F )
                {
                    Nvm.MacGroup2.MacParams.Rx2Channel.Datarate = macMsgJoinAccept.DLSettings.Bits.RX2DataRate;
                    Nvm.MacGroup2.MacParams.RxCChannel.Datarate = macMsgJoinAccept.DLSettings.Bits.RX2DataRate;
                }


                Nvm.MacGroup2.MacParams.ReceiveDelay1 = macMsgJoinAccept.RxDelay;
                if( Nvm.MacGroup2.MacParams.ReceiveDelay1 == 0 )
                {
                    Nvm.MacGroup2.MacParams.ReceiveDelay1 = 1;
                }
                Nvm.MacGroup2.MacParams.ReceiveDelay1 *= 1000;
                Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay1 + 1000;


                Nvm.MacGroup2.MacParams.ChannelsNbTrans = 1;


                if( macMsgJoinAccept.DLSettings.Bits.OptNeg == 0 )
                {
                    Nvm.MacGroup2.Version.Value = 0x01000400;
                }
                else
                {
                    Nvm.MacGroup2.Version.Value = 0x01010100;
                }


                applyCFList.Payload = macMsgJoinAccept.CFList;

                applyCFList.Size = size - 17;

                applyCFList.JoinChannel = MacCtx.Channel;

                RegionApplyCFList( Nvm.MacGroup2.Region, &applyCFList );

                Nvm.MacGroup2.NetworkActivation = ACTIVATION_TYPE_OTAA;


                if( Nvm.MacGroup2.Version.Fields.Minor >= 1 )
                {
                    Nvm.MacGroup1.RekeyIndUplinksCounter = 0;
                    macCmdPayload[0] = Nvm.MacGroup2.Version.Fields.Minor;
                    LoRaMacCommandsAddCmd( MOTE_MAC_REKEY_IND, macCmdPayload, 1 );
                }


                if( LoRaMacConfirmQueueIsCmdActive( joinType ) == 
# 1081 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                 1 
# 1081 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                      )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, joinType );
                }


                if( Nvm.MacGroup2.IsRejoinAcceptPending == 
# 1087 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                          1 
# 1087 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                               )
                {
                    Nvm.MacGroup2.IsRejoinAcceptPending = 
# 1089 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                         0
# 1089 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                              ;


                    do { if (UTIL_TIMER_IsRunning(&MacCtx.ForceRejoinReqCycleTimer)) { UTIL_TIMER_Stop(&MacCtx.ForceRejoinReqCycleTimer); } } while(0);
                }


                if( ( joinType == MLME_REJOIN_0 ) || ( joinType == MLME_REJOIN_1 ) )
                {
                    ResetMacParameters( 
# 1098 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       1 
# 1098 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            );
                }
            }
            else
            {

                if( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 1104 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 1104 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                       )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL, MLME_JOIN );
                }
            }
            break;
        }
        case FRAME_TYPE_DATA_CONFIRMED_DOWN:
            MacCtx.McpsIndication.McpsIndication = MCPS_CONFIRMED;

        case FRAME_TYPE_DATA_UNCONFIRMED_DOWN:

            getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
            getPhy.Datarate = MacCtx.McpsIndication.RxDatarate;
            getPhy.Attribute = PHY_MAX_PAYLOAD;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
            if( ( ( ( ( 0 ) > ( ( int16_t )( ( int16_t ) size - ( int16_t ) ( 1 + ( 4 + 1 + 2 ) + 1 + 4 ) ) ) ) ? ( 0 ) : ( ( int16_t )( ( int16_t ) size - ( int16_t ) ( 1 + ( 4 + 1 + 2 ) + 1 + 4 ) ) ) ) > ( int16_t )phyParam.Value ) ||
                ( size < ( 1 + ( 4 + 1 + 2 ) + 4 ) ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }
            macMsgData.Buffer = payload;
            macMsgData.BufSize = size;
            macMsgData.FRMPayload = MacCtx.RxPayload;
            macMsgData.FRMPayloadSize = 255;

            if( LORAMAC_PARSER_SUCCESS != LoRaMacParserData( &macMsgData ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }



            if( Nvm.MacGroup2.DeviceClass == CLASS_B )
            {
                if( LoRaMacClassBIsPingExpected( ) == 
# 1143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                     1 
# 1143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                          )
                {
                    LoRaMacClassBSetPingSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
                    LoRaMacClassBPingSlotTimerEvent( 
# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                    ((void *)0) 
# 1146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                         );
                    MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_PING_SLOT;
                    LoRaMacClassBSetFPendingBit( macMsgData.FHDR.DevAddr, ( uint8_t ) macMsgData.FHDR.FCtrl.Bits.FPending );
                }
                else if( LoRaMacClassBIsMulticastExpected( ) == 
# 1150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                               1 
# 1150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                    )
                {
                    LoRaMacClassBSetMulticastSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
                    LoRaMacClassBMulticastSlotTimerEvent( 
# 1153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                         ((void *)0) 
# 1153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                              );
                    MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT;
                    LoRaMacClassBSetFPendingBit( macMsgData.FHDR.DevAddr, ( uint8_t ) macMsgData.FHDR.FCtrl.Bits.FPending );
                }
            }


            MacCtx.McpsIndication.DevAddress = macMsgData.FHDR.DevAddr;

            FType_t fType;
            if( LORAMAC_STATUS_OK != DetermineFrameType( &macMsgData, &fType ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }


            multicast = 0;
            downLinkCounter = 0;
            for( uint8_t i = 0; i < 4; i++ )
            {
                if( ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address == macMsgData.FHDR.DevAddr ) &&
                    ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 1176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                      1 
# 1176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                           ) )
                {
                    multicast = 1;
                    addrID = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.GroupID;
                    downLinkCounter = *( Nvm.MacGroup2.MulticastChannelList[i].DownLinkCounter );
                    address = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address;
                    if( Nvm.MacGroup2.DeviceClass == CLASS_C )
                    {
                        MacCtx.McpsIndication.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                    }
                    break;
                }
            }


            if( ( multicast == 1 ) && ( ( fType != FRAME_TYPE_D ) ||
                                        ( macMsgData.FHDR.FCtrl.Bits.Ack != 0 ) ||
                                        ( macMsgData.FHDR.FCtrl.Bits.AdrAckReq != 0 ) ) )
            {
                MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                PrepareRxDoneAbort( );
                return;
            }


            macCryptoStatus = GetFCntDown( addrID, fType, &macMsgData, Nvm.MacGroup2.Version, &fCntID, &downLinkCounter );
            if( macCryptoStatus != LORAMAC_CRYPTO_SUCCESS )
            {
                if( macCryptoStatus == LORAMAC_CRYPTO_FAIL_FCNT_DUPLICATED )
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_DOWNLINK_REPEATED;
                }
                else
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                }
                MacCtx.McpsIndication.DownLinkCounter = downLinkCounter;
                PrepareRxDoneAbort( );
                return;
            }

            macCryptoStatus = LoRaMacCryptoUnsecureMessage( addrID, address, fCntID, downLinkCounter, &macMsgData );
            if( macCryptoStatus != LORAMAC_CRYPTO_SUCCESS )
            {
                if( macCryptoStatus == LORAMAC_CRYPTO_FAIL_ADDRESS )
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ADDRESS_FAIL;
                }
                else
                {

                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_MIC_FAIL;
                }
                PrepareRxDoneAbort( );
                return;
            }

            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsIndication.Multicast = multicast;
            MacCtx.McpsIndication.Buffer = 
# 1238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          ((void *)0)
# 1238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;
            MacCtx.McpsIndication.BufferSize = 0;
            MacCtx.McpsIndication.DownLinkCounter = downLinkCounter;
            MacCtx.McpsIndication.AckReceived = macMsgData.FHDR.FCtrl.Bits.Ack;

            MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsConfirm.AckReceived = macMsgData.FHDR.FCtrl.Bits.Ack;


            if( ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 ) ||
                ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_2 ) )
            {
                Nvm.MacGroup1.AdrAckCounter = 0;
                Nvm.MacGroup2.DownlinkReceived = 
# 1251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                1
# 1251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                    ;
            }


            if( multicast == 1 )
            {
                MacCtx.McpsIndication.McpsIndication = MCPS_MULTICAST;
            }
            else
            {
                if( macHdr.Bits.MType == FRAME_TYPE_DATA_CONFIRMED_DOWN )
                {
                    Nvm.MacGroup1.SrvAckRequested = 
# 1263 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                   1
# 1263 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                       ;
                    if( Nvm.MacGroup2.Version.Fields.Minor == 0 )
                    {
                        Nvm.MacGroup1.LastRxMic = macMsgData.MIC;
                    }
                    MacCtx.McpsIndication.McpsIndication = MCPS_CONFIRMED;


                    if( ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_1 ) &&
                        ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_2 ) )
                    {

                        MacCtx.McpsIndication.ResponseTimeout = 8000;
                        MacCtx.ResponseTimeoutStartTime = RxDoneParams.LastRxDone;
                    }
                }
                else
                {
                    Nvm.MacGroup1.SrvAckRequested = 
# 1281 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                   0
# 1281 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                        ;
                    MacCtx.McpsIndication.McpsIndication = MCPS_UNCONFIRMED;
                }
            }


            if( ( ( ( Nvm.MacGroup1.SrvAckRequested == 
# 1287 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      1 
# 1287 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           ) || ( macMsgData.FHDR.FCtrl.Bits.FPending > 0 ) ) && ( Nvm.MacGroup2.DeviceClass == CLASS_A ) ) ||
                ( MacCtx.McpsIndication.ResponseTimeout > 0 ) )
            {
                MacCtx.McpsIndication.IsUplinkTxPending = 1;
            }

            RemoveMacCommands( MacCtx.McpsIndication.RxSlot, macMsgData.FHDR.FCtrl, MacCtx.McpsConfirm.McpsRequest );

            switch( fType )
            {
                case FRAME_TYPE_A:
                {







                    ProcessMacCommands( macMsgData.FHDR.FOpts, 0, macMsgData.FHDR.FCtrl.Bits.FOptsLen, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    MacCtx.McpsIndication.Buffer = macMsgData.FRMPayload;
                    MacCtx.McpsIndication.BufferSize = macMsgData.FRMPayloadSize;
                    MacCtx.McpsIndication.RxData = 
# 1310 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                  1
# 1310 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      ;
                    break;
                }
                case FRAME_TYPE_B:
                {







                    ProcessMacCommands( macMsgData.FHDR.FOpts, 0, macMsgData.FHDR.FCtrl.Bits.FOptsLen, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    break;
                }
                case FRAME_TYPE_C:
                {







                    ProcessMacCommands( macMsgData.FRMPayload, 0, macMsgData.FRMPayloadSize, snr, MacCtx.McpsIndication.RxSlot );
                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    break;
                }
                case FRAME_TYPE_D:
                {







                    MacCtx.McpsIndication.Port = macMsgData.FPort;
                    MacCtx.McpsIndication.Buffer = macMsgData.FRMPayload;
                    MacCtx.McpsIndication.BufferSize = macMsgData.FRMPayloadSize;
                    MacCtx.McpsIndication.RxData = 
# 1351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                  1
# 1351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      ;
                    break;
                }
                default:
                    MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
                    PrepareRxDoneAbort( );
                    break;
            }


            if( Nvm.MacGroup2.IsRejoinAcceptPending == 
# 1361 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      1 
# 1361 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           )
            {
                Nvm.MacGroup2.IsRejoinAcceptPending = 
# 1363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                     0
# 1363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                          ;


                do { if (UTIL_TIMER_IsRunning(&MacCtx.ForceRejoinReqCycleTimer)) { UTIL_TIMER_Stop(&MacCtx.ForceRejoinReqCycleTimer); } } while(0);


                if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
                {
                    MacCtx.MlmeConfirm.Status = LORAMAC_EVENT_INFO_STATUS_OK;
                }
            }

            if( ( macMsgData.FPort == 224 ) && (Nvm.MacGroup2.IsCertPortOn == 
# 1375 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                            0 
# 1375 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                  ) )
            {

                MacCtx.McpsIndication.Port = macMsgData.FPort;
                MacCtx.McpsIndication.Buffer = 
# 1379 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              ((void *)0)
# 1379 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  ;
                MacCtx.McpsIndication.BufferSize = 0;
                MacCtx.McpsIndication.RxData = 
# 1381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              0
# 1381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                   ;
            }



            MacCtx.MacFlags.Bits.McpsInd = 1;

            break;
        case FRAME_TYPE_PROPRIETARY:
            memcpy1( MacCtx.RxPayload, &payload[pktHeaderLen], size - pktHeaderLen );

            MacCtx.McpsIndication.McpsIndication = MCPS_PROPRIETARY;
            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_OK;
            MacCtx.McpsIndication.Buffer = MacCtx.RxPayload;
            MacCtx.McpsIndication.BufferSize = size - pktHeaderLen;

            MacCtx.MacFlags.Bits.McpsInd = 1;
            break;
        default:
            MacCtx.McpsIndication.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
            PrepareRxDoneAbort( );
            break;
    }



    if( ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 ) ||
        ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_2 ) )
    {
        if( MacCtx.NodeAckRequested == 
# 1410 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      1 
# 1410 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           )
        {
            if( MacCtx.McpsConfirm.AckReceived == 
# 1412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 1 
# 1412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      )
            {
                OnRetransmitTimeoutTimerEvent( 
# 1414 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              ((void *)0) 
# 1414 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                   );
            }
        }
    }

    if( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_CLASS_C )
    {
        MacCtx.MacFlags.Bits.MacDone = 1;
    }

    UpdateRxSlotIdleState( );
}

static void ProcessRadioTxTimeout( void )
{
    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }
    UpdateRxSlotIdleState( );

    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT;
    LoRaMacConfirmQueueSetStatusCmn( LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT );
    if( MacCtx.NodeAckRequested == 
# 1437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  1 
# 1437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       )
    {
        MacCtx.RetransmitTimeoutRetry = 
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       1
# 1439 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           ;
    }
    MacCtx.MacFlags.Bits.MacDone = 1;
}

static void HandleRadioRxErrorTimeout( LoRaMacEventInfoStatus_t rx1EventInfoStatus, LoRaMacEventInfoStatus_t rx2EventInfoStatus )
{
    
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        classBRx = 
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                   0
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                        ;

    if( Nvm.MacGroup2.DeviceClass != CLASS_C )
    {
        Radio.Sleep( );
    }

    if( LoRaMacClassBIsBeaconExpected( ) == 
# 1453 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           1 
# 1453 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
    {
        LoRaMacClassBSetBeaconState( BEACON_STATE_TIMEOUT );
        LoRaMacClassBBeaconTimerEvent( 
# 1456 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      ((void *)0) 
# 1456 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           );
        classBRx = 
# 1457 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  1
# 1457 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      ;
    }
    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 1461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1 
# 1461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  )
        {
            LoRaMacClassBSetPingSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBPingSlotTimerEvent( 
# 1464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 1464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 );
            classBRx = 
# 1465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      1
# 1465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                          ;
        }
        if( LoRaMacClassBIsMulticastExpected( ) == 
# 1467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                  1 
# 1467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                       )
        {
            LoRaMacClassBSetMulticastSlotState( PINGSLOT_STATE_CALC_PING_OFFSET );
            LoRaMacClassBMulticastSlotTimerEvent( 
# 1470 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 ((void *)0) 
# 1470 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                      );
            classBRx = 
# 1471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      1
# 1471 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                          ;
        }
    }

    if( classBRx == 
# 1475 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                   0 
# 1475 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                         )
    {
        if( MacCtx.RxSlot == RX_SLOT_WIN_1 )
        {
            if( MacCtx.NodeAckRequested == 
# 1479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          1 
# 1479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                               )
            {
                MacCtx.McpsConfirm.Status = rx1EventInfoStatus;
            }
            LoRaMacConfirmQueueSetStatusCmn( rx1EventInfoStatus );

            if( UTIL_TIMER_GetElapsedTime( Nvm.MacGroup1.LastTxDoneTime ) >= MacCtx.RxWindow2Delay )
            {
                do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer2)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer2); } } while(0);
                MacCtx.MacFlags.Bits.MacDone = 1;
            }
        }
        else
        {
            if( MacCtx.NodeAckRequested == 
# 1493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          1 
# 1493 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                               )
            {
                MacCtx.McpsConfirm.Status = rx2EventInfoStatus;
            }
            LoRaMacConfirmQueueSetStatusCmn( rx2EventInfoStatus );
            MacCtx.MacFlags.Bits.MacDone = 1;
        }
    }

    UpdateRxSlotIdleState( );
}

static void ProcessRadioRxError( void )
{
    HandleRadioRxErrorTimeout( LORAMAC_EVENT_INFO_STATUS_RX1_ERROR, LORAMAC_EVENT_INFO_STATUS_RX2_ERROR );
}

static void ProcessRadioRxTimeout( void )
{
    HandleRadioRxErrorTimeout( LORAMAC_EVENT_INFO_STATUS_RX1_TIMEOUT, LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT );
}

static void LoRaMacHandleIrqEvents( void )
{
    LoRaMacRadioEvents_t events;

    uint32_t mask; BoardCriticalSectionBegin( &mask );
    events = LoRaMacRadioEvents;
    LoRaMacRadioEvents.Value = 0;
    BoardCriticalSectionEnd( &mask );

    if( events.Value != 0 )
    {
        if( events.Events.TxDone == 1 )
        {
            ProcessRadioTxDone( );
        }
        if( events.Events.RxDone == 1 )
        {
            ProcessRadioRxDone( );
        }
        if( events.Events.TxTimeout == 1 )
        {
            ProcessRadioTxTimeout( );
        }
        if( events.Events.RxError == 1 )
        {
            ProcessRadioRxError( );
        }
        if( events.Events.RxTimeout == 1 )
        {
            ProcessRadioRxTimeout( );
        }
    }
}


# 1549 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
_Bool 
# 1549 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
    LoRaMacIsBusy( void )
{
    if( MacCtx.MacState == LORAMAC_STOPPED )
    {
        return 
# 1553 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              0
# 1553 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                   ;
    }

    if( LoRaMacRadioEvents.Events.RxProcessPending == 1 )
    {
        return 
# 1558 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 1558 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }

    if( ( MacCtx.MacState == LORAMAC_IDLE ) &&
        ( MacCtx.AllowRequests == LORAMAC_REQUEST_HANDLING_ON ) )
    {
        return 
# 1564 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              0
# 1564 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                   ;
    }
    return 
# 1566 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          1
# 1566 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
              ;
}


static void LoRaMacEnableRequests( LoRaMacRequestHandling_t requestState )
{
    MacCtx.AllowRequests = requestState;
}

static void LoRaMacHandleRequestEvents( void )
{

    LoRaMacFlags_t reqEvents = MacCtx.MacFlags;

    if( MacCtx.MacState == LORAMAC_IDLE )
    {

        if( MacCtx.MacFlags.Bits.McpsReq == 1 )
        {
            MacCtx.MacFlags.Bits.McpsReq = 0;
        }

        if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
        {
            MacCtx.MacFlags.Bits.MlmeReq = 0;
        }


        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );


        if( reqEvents.Bits.McpsReq == 1 )
        {
            MacCtx.MacPrimitives->MacMcpsConfirm( &MacCtx.McpsConfirm );
        }

        if( reqEvents.Bits.MlmeReq == 1 )
        {
            LoRaMacConfirmQueueHandleCb( &MacCtx.MlmeConfirm );
            if( LoRaMacConfirmQueueGetCnt( ) > 0 )
            {
                MacCtx.MacFlags.Bits.MlmeReq = 1;
            }
        }


        LoRaMacClassBResumeBeaconing( );


        MacCtx.MacFlags.Bits.MacDone = 0;
    }
}

static void LoRaMacHandleIndicationEvents( void )
{

    if( MacCtx.MacFlags.Bits.MlmeInd == 1 )
    {
        MacCtx.MacFlags.Bits.MlmeInd = 0;
        MacCtx.MacPrimitives->MacMlmeIndication( &MacCtx.MlmeIndication );
    }


    if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {
        MacCtx.MacFlags.Bits.McpsInd = 0;
        MacCtx.MacPrimitives->MacMcpsIndication( &MacCtx.McpsIndication );
    }
}

static void LoRaMacHandleRejoinEvents( void )
{
    if( MacCtx.MacState == LORAMAC_IDLE )
    {
        MlmeReq_t mlmeReq;
        if( IsReJoin0Required( ) == 
# 1641 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   1 
# 1641 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                        )
        {
            mlmeReq.Type = MLME_REJOIN_0;
            LoRaMacMlmeRequest( &mlmeReq );
        }
        else if( Nvm.MacGroup2.IsRejoin0RequestQueued == 
# 1646 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                        1 
# 1646 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                             )
        {
            mlmeReq.Type = MLME_REJOIN_0;
            if( LoRaMacMlmeRequest( &mlmeReq ) == LORAMAC_STATUS_OK )
            {
                Nvm.MacGroup2.IsRejoin0RequestQueued = 
# 1651 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      0
# 1651 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           ;
            }
        }
        else if( Nvm.MacGroup2.IsRejoin1RequestQueued == 
# 1654 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                        1 
# 1654 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                             )
        {
            mlmeReq.Type = MLME_REJOIN_1;
            if( LoRaMacMlmeRequest( &mlmeReq ) == LORAMAC_STATUS_OK )
            {
                Nvm.MacGroup2.IsRejoin1RequestQueued = 
# 1659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      0
# 1659 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           ;
            }
        }
        else if( Nvm.MacGroup2.IsRejoin2RequestQueued == 
# 1662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                        1 
# 1662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                             )
        {
            mlmeReq.Type = MLME_REJOIN_2;
            if( LoRaMacMlmeRequest( &mlmeReq ) == LORAMAC_STATUS_OK )
            {
                Nvm.MacGroup2.IsRejoin2RequestQueued = 
# 1667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      0
# 1667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           ;
            }
        }
    }
}

static void LoRaMacHandleMcpsRequest( void )
{

    if( MacCtx.MacFlags.Bits.McpsReq == 1 )
    {
        
# 1678 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
       _Bool 
# 1678 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
            stopRetransmission = 
# 1678 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                 0
# 1678 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                      ;
        
# 1679 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
       _Bool 
# 1679 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
            waitForRetransmission = 
# 1679 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                    0
# 1679 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         ;

        if( ( MacCtx.McpsConfirm.McpsRequest == MCPS_UNCONFIRMED ) ||
            ( MacCtx.McpsConfirm.McpsRequest == MCPS_PROPRIETARY ) )
        {
            stopRetransmission = CheckRetransUnconfirmedUplink( );
        }
        else if( MacCtx.McpsConfirm.McpsRequest == MCPS_CONFIRMED )
        {
            if( MacCtx.RetransmitTimeoutRetry == 
# 1688 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                1 
# 1688 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                     )
            {
                stopRetransmission = CheckRetransConfirmedUplink( );
            }
            else
            {
                waitForRetransmission = 
# 1694 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       1
# 1694 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           ;
            }
        }

        if( stopRetransmission == 
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                 1 
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                      )
        {
            do { if (UTIL_TIMER_IsRunning(&MacCtx.TxDelayedTimer)) { UTIL_TIMER_Stop(&MacCtx.TxDelayedTimer); } } while(0);
            MacCtx.MacState &= ~LORAMAC_TX_DELAYED;
            StopRetransmission( );
        }
        else if( waitForRetransmission == 
# 1704 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         0 
# 1704 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                               )
        {
            MacCtx.MacFlags.Bits.MacDone = 0;

            MacCtx.RetransmitTimeoutRetry = 
# 1708 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           0
# 1708 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                ;

            OnTxDelayedTimerEvent( 
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  ((void *)0) 
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       );
        }
    }
}

static void LoRaMacHandleMlmeRequest( void )
{

    if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
    {
        if( ( LoRaMacConfirmQueueIsCmdActive( MLME_JOIN ) == 
# 1720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                            1 
# 1720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                 ) ||
            ( LoRaMacConfirmQueueIsCmdActive( MLME_REJOIN_0 ) == 
# 1721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                1 
# 1721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                     ) ||
            ( LoRaMacConfirmQueueIsCmdActive( MLME_REJOIN_1 ) == 
# 1722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                1 
# 1722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                     ) ||
            ( LoRaMacConfirmQueueIsCmdActive( MLME_REJOIN_2 ) == 
# 1723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                1 
# 1723 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                     ) )
        {
            MacCtx.ChannelsNbTransCounter = 0;
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
        }
        else if( LoRaMacConfirmQueueIsCmdActive( MLME_TXCW ) == 
# 1728 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                               1 
# 1728 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                    )
        {
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
        }
    }
}

static uint8_t LoRaMacCheckForBeaconAcquisition( void )
{
    if( ( LoRaMacConfirmQueueIsCmdActive( MLME_BEACON_ACQUISITION ) == 
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                      1 
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                           ) &&
        ( MacCtx.MacFlags.Bits.McpsReq == 0 ) )
    {
        if( MacCtx.MacFlags.Bits.MlmeReq == 1 )
        {
            MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
            return 0x01;
        }
    }
    return 0x00;
}

static 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckForMinimumAbpDatarate( 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       _Bool 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            adr, ActivationType_t activation, 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                              _Bool 
# 1749 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                   datarateChanged )
{
    if( ( adr == 
# 1751 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                1 
# 1751 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                     ) &&
        ( activation == ACTIVATION_TYPE_ABP ) &&
        ( datarateChanged == 
# 1753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            0 
# 1753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  ) )
    {
        return 
# 1755 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 1755 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }
    return 
# 1757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 1757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

static void LoRaMacCheckForRxAbort( void )
{

    if( ( MacCtx.MacState & LORAMAC_RX_ABORT ) == LORAMAC_RX_ABORT )
    {
        MacCtx.MacState &= ~LORAMAC_RX_ABORT;
        MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
    }
}

static void LoRaMacHandleNvm( LoRaMacNvmData_t* nvmData )
{
    uint32_t crc = 0;
    uint16_t notifyFlags = 0x00;

    if( MacCtx.MacState != LORAMAC_IDLE )
    {
        return;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->Crypto, sizeof( nvmData->Crypto ) -
                                                sizeof( nvmData->Crypto.Crc32 ) );
    if( crc != nvmData->Crypto.Crc32 )
    {
        nvmData->Crypto.Crc32 = crc;
        notifyFlags |= 0x01;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->MacGroup1, sizeof( nvmData->MacGroup1 ) -
                                                   sizeof( nvmData->MacGroup1.Crc32 ) );
    if( crc != nvmData->MacGroup1.Crc32 )
    {
        nvmData->MacGroup1.Crc32 = crc;
        notifyFlags |= 0x02;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->MacGroup2, sizeof( nvmData->MacGroup2 ) -
                                                   sizeof( nvmData->MacGroup2.Crc32 ) );
    if( crc != nvmData->MacGroup2.Crc32 )
    {
        nvmData->MacGroup2.Crc32 = crc;
        notifyFlags |= 0x04;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->SecureElement, sizeof( nvmData->SecureElement ) -
                                                       sizeof( nvmData->SecureElement.Crc32 ) );
    if( crc != nvmData->SecureElement.Crc32 )
    {
        nvmData->SecureElement.Crc32 = crc;
        notifyFlags |= 0x08;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->RegionGroup1, sizeof( nvmData->RegionGroup1 ) -
                                                sizeof( nvmData->RegionGroup1.Crc32 ) );
    if( crc != nvmData->RegionGroup1.Crc32 )
    {
        nvmData->RegionGroup1.Crc32 = crc;
        notifyFlags |= 0x10;
    }

    crc = Crc32( ( uint8_t* ) &nvmData->RegionGroup2, sizeof( nvmData->RegionGroup2 ) -
                                                sizeof( nvmData->RegionGroup2.Crc32 ) );
    if( crc != nvmData->RegionGroup2.Crc32 )
    {
        nvmData->RegionGroup2.Crc32 = crc;
        notifyFlags |= 0x20;
    }


    crc = Crc32( ( uint8_t* ) &nvmData->ClassB, sizeof( nvmData->ClassB ) -
                                                sizeof( nvmData->ClassB.Crc32 ) );
    if( crc != nvmData->ClassB.Crc32 )
    {
        nvmData->ClassB.Crc32 = crc;
        notifyFlags |= 0x40;
    }

    CallNvmDataChangeCallback( notifyFlags );
}

static 
# 1845 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 1845 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           LoRaMacHandleResponseTimeout( UTIL_TIMER_Time_t timeoutInMs, UTIL_TIMER_Time_t startTimeInMs )
{
    if( startTimeInMs != 0 )
    {
        UTIL_TIMER_Time_t elapsedTime = UTIL_TIMER_GetElapsedTime( startTimeInMs );
        if( elapsedTime > timeoutInMs )
        {
            Nvm.MacGroup1.SrvAckRequested = 
# 1852 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           0
# 1852 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                ;
            return 
# 1853 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  1
# 1853 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      ;
        }
    }
    return 
# 1856 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 1856 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

void LoRaMacProcess( void )
{
    uint8_t noTx = 
# 1861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  0
# 1861 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                       ;

    LoRaMacHandleIrqEvents( );
    LoRaMacClassBProcess( );


    if( MacCtx.MacFlags.Bits.MacDone == 1 )
    {
        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_OFF );
        LoRaMacCheckForRxAbort( );


        if( IsRequestPending( ) > 0 )
        {
            noTx |= LoRaMacCheckForBeaconAcquisition( );
        }

        if( noTx == 0x00 )
        {
            LoRaMacHandleMlmeRequest( );
            LoRaMacHandleMcpsRequest( );
        }
        LoRaMacHandleRequestEvents( );
        LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );
        MacCtx.MacFlags.Bits.NvmHandle = 1;
    }
    LoRaMacHandleIndicationEvents( );
    LoRaMacHandleRejoinEvents( );

    if( MacCtx.RxSlot == RX_SLOT_WIN_CLASS_C )
    {
        OpenContinuousRxCWindow( );
    }
    if( MacCtx.MacFlags.Bits.NvmHandle == 1 )
    {
        MacCtx.MacFlags.Bits.NvmHandle = 0;
        LoRaMacHandleNvm( &Nvm );
    }
}

static void OnTxDelayedTimerEvent( void* context )
{
    do { if (UTIL_TIMER_IsRunning(&MacCtx.TxDelayedTimer)) { UTIL_TIMER_Stop(&MacCtx.TxDelayedTimer); } } while(0);
    MacCtx.MacState &= ~LORAMAC_TX_DELAYED;

    if( LoRaMacHandleResponseTimeout( 8000,
                                      MacCtx.ResponseTimeoutStartTime ) == 
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                          1 
# 1907 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                               )
    {

        return;
    }


    switch( ScheduleTx( 
# 1914 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                       1 
# 1914 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                            ) )
    {
        case LORAMAC_STATUS_OK:
        case LORAMAC_STATUS_DUTYCYCLE_RESTRICTED:
        {
            break;
        }
        default:
        {

            MacCtx.McpsConfirm.Datarate = Nvm.MacGroup1.ChannelsDatarate;
            MacCtx.McpsConfirm.NbTrans = MacCtx.ChannelsNbTransCounter;
            MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR;
            LoRaMacConfirmQueueSetStatusCmn( LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR );
            StopRetransmission( );
            break;
        }
    }
}

static void OnRxWindow1TimerEvent( void* context )
{
    MacCtx.RxWindow1Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow1Config.DrOffset = Nvm.MacGroup2.MacParams.Rx1DrOffset;
    MacCtx.RxWindow1Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow1Config.RxContinuous = 
# 1939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         0
# 1939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow1Config.RxSlot = RX_SLOT_WIN_1;
    MacCtx.RxWindow1Config.NetworkActivation = Nvm.MacGroup2.NetworkActivation;

    RxWindowSetup( &MacCtx.RxWindowTimer1, &MacCtx.RxWindow1Config );
}

static void OnRxWindow2TimerEvent( void* context )
{


    if( MacCtx.RxSlot == RX_SLOT_WIN_1 )
    {
        return;
    }
    MacCtx.RxWindow2Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow2Config.Frequency = Nvm.MacGroup2.MacParams.Rx2Channel.Frequency;
    MacCtx.RxWindow2Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow2Config.RxContinuous = 
# 1957 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         0
# 1957 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow2Config.RxSlot = RX_SLOT_WIN_2;
    MacCtx.RxWindow2Config.NetworkActivation = Nvm.MacGroup2.NetworkActivation;

    RxWindowSetup( &MacCtx.RxWindowTimer2, &MacCtx.RxWindow2Config );
}

static void OnRetransmitTimeoutTimerEvent( void* context )
{
    do { if (UTIL_TIMER_IsRunning(&MacCtx.RetransmitTimeoutTimer)) { UTIL_TIMER_Stop(&MacCtx.RetransmitTimeoutTimer); } } while(0);

    if( MacCtx.NodeAckRequested == 
# 1968 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  1 
# 1968 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       )
    {
        MacCtx.RetransmitTimeoutRetry = 
# 1970 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       1
# 1970 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           ;
    }
    OnMacProcessNotify( );
}

static LoRaMacCryptoStatus_t GetFCntDown( AddressIdentifier_t addrID, FType_t fType, LoRaMacMessageData_t* macMsg, Version_t lrWanVersion,
                                          FCntIdentifier_t* fCntID, uint32_t* currentDown )
{
    if( ( macMsg == 
# 1978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                   ((void *)0) 
# 1978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                        ) || ( fCntID == 
# 1978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 1978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ) ||
        ( currentDown == 
# 1979 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        ((void *)0) 
# 1979 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ) )
    {
        return LORAMAC_CRYPTO_ERROR_NPE;
    }


    switch( addrID )
    {
        case UNICAST_DEV_ADDR:
            if( lrWanVersion.Fields.Minor == 1 )
            {
                if( ( fType == FRAME_TYPE_A ) || ( fType == FRAME_TYPE_D ) )
                {
                    *fCntID = A_FCNT_DOWN;
                }
                else
                {
                    *fCntID = N_FCNT_DOWN;
                }
            }
            else
            {
                *fCntID = FCNT_DOWN;
            }
            break;
        case MULTICAST_0_ADDR:
            *fCntID = MC_FCNT_DOWN_0;
            break;
        case MULTICAST_1_ADDR:
            *fCntID = MC_FCNT_DOWN_1;
            break;
        case MULTICAST_2_ADDR:
            *fCntID = MC_FCNT_DOWN_2;
            break;
        case MULTICAST_3_ADDR:
            *fCntID = MC_FCNT_DOWN_3;
            break;
        default:
            return LORAMAC_CRYPTO_FAIL_FCNT_ID;
    }

    return LoRaMacCryptoGetFCntDown( *fCntID, macMsg->FHDR.FCnt, currentDown );
}

static LoRaMacStatus_t SwitchClass( DeviceClass_t deviceClass )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;

    switch( Nvm.MacGroup2.DeviceClass )
    {
        case CLASS_A:
        {
            if( deviceClass == CLASS_A )
            {

                Nvm.MacGroup2.MacParams.RxCChannel = Nvm.MacGroup2.MacParams.Rx2Channel;

                status = LORAMAC_STATUS_OK;
            }
            if( deviceClass == CLASS_B )
            {
                status = LoRaMacClassBSwitchClass( deviceClass );
                if( status == LORAMAC_STATUS_OK )
                {
                    Nvm.MacGroup2.DeviceClass = deviceClass;
                }
            }

            if( deviceClass == CLASS_C )
            {
                Nvm.MacGroup2.DeviceClass = deviceClass;

                MacCtx.RxWindowCConfig = MacCtx.RxWindow2Config;
                MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;

                for( int8_t i = 0; i < 4; i++ )
                {
                    if( ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 2056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                          1 
# 2056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                               ) &&
                        ( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.Class == CLASS_C ) )
                    {
                        Nvm.MacGroup2.MacParams.RxCChannel.Frequency = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.Params.ClassC.Frequency;
                        Nvm.MacGroup2.MacParams.RxCChannel.Datarate = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.Params.ClassC.Datarate;

                        MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
                        MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                        MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
                        MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                        MacCtx.RxWindowCConfig.RxContinuous = 
# 2066 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                             1
# 2066 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                 ;
                        break;
                    }
                }


                MacCtx.NodeAckRequested = 
# 2072 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         0
# 2072 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;

                Radio.Sleep( );

                OpenContinuousRxCWindow( );


                if( Nvm.MacGroup2.Version.Fields.Minor >= 1 )
                {
                    LoRaMacCommandsAddCmd( MOTE_MAC_DEVICE_MODE_IND, ( uint8_t* )&Nvm.MacGroup2.DeviceClass, 1 );
                }

                status = LORAMAC_STATUS_OK;
            }
            break;
        }
        case CLASS_B:
        {
            status = LoRaMacClassBSwitchClass( deviceClass );
            if( status == LORAMAC_STATUS_OK )
            {
                Nvm.MacGroup2.DeviceClass = deviceClass;
            }
            break;
        }
        case CLASS_C:
        {
            if( deviceClass == CLASS_A )
            {

                MacCtx.RxSlot = RX_SLOT_NONE;

                Nvm.MacGroup2.DeviceClass = deviceClass;


                Radio.Sleep( );

                status = LORAMAC_STATUS_OK;


                if( Nvm.MacGroup2.Version.Fields.Minor >= 1 )
                {
                    LoRaMacCommandsAddCmd( MOTE_MAC_DEVICE_MODE_IND, ( uint8_t* )&Nvm.MacGroup2.DeviceClass, 1 );
                }
            }
            break;
        }
    }

    return status;
}

static uint8_t GetMaxAppPayloadWithoutFOptsLength( int8_t datarate )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;


    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    getPhy.Datarate = datarate;
    getPhy.Attribute = PHY_MAX_PAYLOAD;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

    return phyParam.Value;
}

static 
# 2138 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 2138 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           ValidatePayloadLength( uint8_t lenN, int8_t datarate, uint8_t fOptsLen )
{
    uint16_t maxN = 0;
    uint16_t payloadSize = 0;

    maxN = GetMaxAppPayloadWithoutFOptsLength( datarate );


    payloadSize = ( lenN + fOptsLen );


    if( ( payloadSize <= maxN ) && ( payloadSize <= 255 ) )
    {
        return 
# 2151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 2151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }
    return 
# 2153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 2153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

uint16_t GetMaxAppPayloadWithFOptsLength( void )
{
    size_t macCmdsSize = 0;
    size_t maxPayloadSize = 0;

    LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize );

    maxPayloadSize = GetMaxAppPayloadWithoutFOptsLength(Nvm.MacGroup1.ChannelsDatarate);

    return (maxPayloadSize - macCmdsSize);
}

static void ProcessMacCommands( uint8_t *payload, uint8_t macIndex, uint8_t commandsSize, int8_t snr, LoRaMacRxSlot_t rxSlot )
{
    uint8_t status = 0;
    
# 2171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 2171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        adrBlockFound = 
# 2171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 2171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;
    uint8_t macCmdPayload[2] = { 0x00, 0x00 };
    MacCommand_t* macCmd;

    if( ( rxSlot != RX_SLOT_WIN_1 ) && ( rxSlot != RX_SLOT_WIN_2 ) )
    {

        return;
    }

    while( macIndex < commandsSize )
    {

        if( ( LoRaMacCommandsGetCmdSize( payload[macIndex] ) + macIndex ) > commandsSize )
        {
            return;
        }


        switch( payload[macIndex++] )
        {
            case SRV_MAC_RESET_CONF:
            {
                uint8_t serverMinorVersion = payload[macIndex++];


                if( Nvm.MacGroup2.Version.Fields.Minor >= serverMinorVersion )
                {

                    if( LoRaMacCommandsGetCmd( MOTE_MAC_RESET_IND, &macCmd) == LORAMAC_COMMANDS_SUCCESS )
                    {
                        LoRaMacCommandsRemoveCmd( macCmd );
                    }
                }
                break;
            }
            case SRV_MAC_LINK_CHECK_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_LINK_CHECK ) == 
# 2209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                        1 
# 2209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                             )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_LINK_CHECK );
                    MacCtx.MlmeConfirm.DemodMargin = payload[macIndex++];
                    MacCtx.MlmeConfirm.NbGateways = payload[macIndex++];
                }
                break;
            }
            case SRV_MAC_LINK_ADR_REQ:
            {
                LinkAdrReqParams_t linkAdrReq;
                int8_t linkAdrDatarate = 0;
                int8_t linkAdrTxPower = 0;
                uint8_t linkAdrNbRep = 0;
                uint8_t linkAdrNbBytesParsed = 0;



                if( adrBlockFound == 
# 2227 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                    0 
# 2227 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          )
                {
                    adrBlockFound = 
# 2229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   1
# 2229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       ;

                    do
                    {

                        linkAdrReq.Payload = &payload[macIndex - 1];
                        linkAdrReq.AdrEnabled = Nvm.MacGroup2.AdrCtrlOn;
                        linkAdrReq.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
                        linkAdrReq.CurrentDatarate = Nvm.MacGroup1.ChannelsDatarate;
                        linkAdrReq.CurrentTxPower = Nvm.MacGroup1.ChannelsTxPower;
                        linkAdrReq.CurrentNbRep = Nvm.MacGroup2.MacParams.ChannelsNbTrans;
                        linkAdrReq.Version = Nvm.MacGroup2.Version;





                        if( Nvm.MacGroup2.AdrCtrlOn == 
# 2246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      1 
# 2246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                           )
                        {



                            linkAdrReq.PayloadSize = commandsSize - ( macIndex - 1 );
                        }
                        else
                        {





                            linkAdrReq.PayloadSize = 5;
                        }


                        status = RegionLinkAdrReq( Nvm.MacGroup2.Region, &linkAdrReq, &linkAdrDatarate,
                                                &linkAdrTxPower, &linkAdrNbRep, &linkAdrNbBytesParsed );

                        if(Nvm.MacGroup2.AdrCtrlOn == 
# 2267 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                     0
# 2267 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                          )
                        {
                            status = 0x00;
                        }

                        if( ( status & 0x07 ) == 0x07 )
                        {

                            if( linkAdrDatarate > Nvm.MacGroup1.ChannelsDatarate )
                            {
                                Nvm.MacGroup2.ChannelsDatarateChangedLinkAdrReq = 
# 2277 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                 1
# 2277 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                     ;
                            }
                            Nvm.MacGroup1.ChannelsDatarate = linkAdrDatarate;
                            Nvm.MacGroup1.ChannelsTxPower = linkAdrTxPower;
                            Nvm.MacGroup2.MacParams.ChannelsNbTrans = linkAdrNbRep;
                        }


                        for( uint8_t i = 0; i < ( linkAdrNbBytesParsed / 5 ); i++ )
                        {
                            LoRaMacCommandsAddCmd( MOTE_MAC_LINK_ADR_ANS, &status, 1 );
                        }

                        macIndex += linkAdrNbBytesParsed - 1;


                        if( macIndex >= commandsSize )
                            break;

                    } while( payload[macIndex++] == SRV_MAC_LINK_ADR_REQ );

                    if( macIndex < commandsSize )
                    {

                        macIndex--;
                    }
                }
                else
                {

                    macIndex += 4;
                }
                break;
            }
            case SRV_MAC_DUTY_CYCLE_REQ:
            {
                Nvm.MacGroup2.MaxDCycle = payload[macIndex++] & 0x0F;
                Nvm.MacGroup2.AggregatedDCycle = 1 << Nvm.MacGroup2.MaxDCycle;
                LoRaMacCommandsAddCmd( MOTE_MAC_DUTY_CYCLE_ANS, macCmdPayload, 0 );
                break;
            }
            case SRV_MAC_RX_PARAM_SETUP_REQ:
            {
                RxParamSetupReqParams_t rxParamSetupReq;
                status = 0x07;

                rxParamSetupReq.DrOffset = ( payload[macIndex] >> 4 ) & 0x07;
                rxParamSetupReq.Datarate = payload[macIndex] & 0x0F;
                macIndex++;

                if( rxParamSetupReq.Datarate == 0x0F )
                {

                    rxParamSetupReq.Datarate = Nvm.MacGroup2.MacParams.Rx2Channel.Datarate;
                }

                rxParamSetupReq.Frequency = ( uint32_t ) payload[macIndex++];
                rxParamSetupReq.Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                rxParamSetupReq.Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                rxParamSetupReq.Frequency *= 100;


                status = RegionRxParamSetupReq( Nvm.MacGroup2.Region, &rxParamSetupReq );

                if( ( status & 0x07 ) == 0x07 )
                {
                    Nvm.MacGroup2.MacParams.Rx2Channel.Datarate = rxParamSetupReq.Datarate;
                    Nvm.MacGroup2.MacParams.RxCChannel.Datarate = rxParamSetupReq.Datarate;
                    Nvm.MacGroup2.MacParams.Rx2Channel.Frequency = rxParamSetupReq.Frequency;
                    Nvm.MacGroup2.MacParams.RxCChannel.Frequency = rxParamSetupReq.Frequency;
                    Nvm.MacGroup2.MacParams.Rx1DrOffset = rxParamSetupReq.DrOffset;
                    MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                }
                macCmdPayload[0] = status;
                LoRaMacCommandsAddCmd( MOTE_MAC_RX_PARAM_SETUP_ANS, macCmdPayload, 1 );
                break;
            }
            case SRV_MAC_DEV_STATUS_REQ:
            {
                uint8_t batteryLevel = BAT_LEVEL_NO_MEASURE;
                if( ( MacCtx.MacCallbacks != 
# 2357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 2357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 ) && ( MacCtx.MacCallbacks->GetBatteryLevel != 
# 2357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                                ((void *)0) 
# 2357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                     ) )
                {
                    batteryLevel = MacCtx.MacCallbacks->GetBatteryLevel( );
                }
                macCmdPayload[0] = batteryLevel;
                macCmdPayload[1] = ( uint8_t )( snr & 0x3F );
                LoRaMacCommandsAddCmd( MOTE_MAC_DEV_STATUS_ANS, macCmdPayload, 2 );
                break;
            }
            case SRV_MAC_NEW_CHANNEL_REQ:
            {
                NewChannelReqParams_t newChannelReq;
                ChannelParams_t chParam;
                status = 0x03;

                newChannelReq.ChannelId = payload[macIndex++];
                newChannelReq.NewChannel = &chParam;

                chParam.Frequency = ( uint32_t ) payload[macIndex++];
                chParam.Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                chParam.Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                chParam.Frequency *= 100;
                chParam.Rx1Frequency = 0;
                chParam.DrRange.Value = payload[macIndex++];

                status = ( uint8_t )RegionNewChannelReq( Nvm.MacGroup2.Region, &newChannelReq );

                if( ( int8_t )status >= 0 )
                {
                    macCmdPayload[0] = status;
                    LoRaMacCommandsAddCmd( MOTE_MAC_NEW_CHANNEL_ANS, macCmdPayload, 1 );
                }
                break;
            }
            case SRV_MAC_RX_TIMING_SETUP_REQ:
            {
                uint8_t delay = payload[macIndex++] & 0x0F;

                if( delay == 0 )
                {
                    delay++;
                }
                Nvm.MacGroup2.MacParams.ReceiveDelay1 = delay * 1000;
                Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay1 + 1000;
                LoRaMacCommandsAddCmd( MOTE_MAC_RX_TIMING_SETUP_ANS, macCmdPayload, 0 );
                break;
            }
            case SRV_MAC_TX_PARAM_SETUP_REQ:
            {
                TxParamSetupReqParams_t txParamSetupReq;
                GetPhyParams_t getPhy;
                PhyParam_t phyParam;
                uint8_t eirpDwellTime = payload[macIndex++];

                txParamSetupReq.UplinkDwellTime = 0;
                txParamSetupReq.DownlinkDwellTime = 0;

                if( ( eirpDwellTime & 0x20 ) == 0x20 )
                {
                    txParamSetupReq.DownlinkDwellTime = 1;
                }
                if( ( eirpDwellTime & 0x10 ) == 0x10 )
                {
                    txParamSetupReq.UplinkDwellTime = 1;
                }
                txParamSetupReq.MaxEirp = eirpDwellTime & 0x0F;


                if( RegionTxParamSetupReq( Nvm.MacGroup2.Region, &txParamSetupReq ) != -1 )
                {

                    Nvm.MacGroup2.MacParams.UplinkDwellTime = txParamSetupReq.UplinkDwellTime;
                    Nvm.MacGroup2.MacParams.DownlinkDwellTime = txParamSetupReq.DownlinkDwellTime;
                    Nvm.MacGroup2.MacParams.MaxEirp = LoRaMacMaxEirpTable[txParamSetupReq.MaxEirp];

                    getPhy.Attribute = PHY_MIN_TX_DR;
                    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
                    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
                    Nvm.MacGroup1.ChannelsDatarate = ( ( ( Nvm.MacGroup1.ChannelsDatarate ) > ( ( int8_t )phyParam.Value ) ) ? ( Nvm.MacGroup1.ChannelsDatarate ) : ( ( int8_t )phyParam.Value ) );


                    LoRaMacCommandsAddCmd( MOTE_MAC_TX_PARAM_SETUP_ANS, macCmdPayload, 0 );
                }
                break;
            }
            case SRV_MAC_REKEY_CONF:
            {
                uint8_t serverMinorVersion = payload[macIndex++];


                if( Nvm.MacGroup2.Version.Fields.Minor >= serverMinorVersion )
                {

                    if( LoRaMacCommandsGetCmd( MOTE_MAC_REKEY_IND, &macCmd) == LORAMAC_COMMANDS_SUCCESS )
                    {
                        LoRaMacCommandsRemoveCmd( macCmd );
                    }
                }
                break;
            }
            case SRV_MAC_DL_CHANNEL_REQ:
            {
                DlChannelReqParams_t dlChannelReq;
                status = 0x03;

                dlChannelReq.ChannelId = payload[macIndex++];
                dlChannelReq.Rx1Frequency = ( uint32_t ) payload[macIndex++];
                dlChannelReq.Rx1Frequency |= ( uint32_t ) payload[macIndex++] << 8;
                dlChannelReq.Rx1Frequency |= ( uint32_t ) payload[macIndex++] << 16;
                dlChannelReq.Rx1Frequency *= 100;

                status = ( uint8_t )RegionDlChannelReq( Nvm.MacGroup2.Region, &dlChannelReq );

                if( ( int8_t )status >= 0 )
                {
                    macCmdPayload[0] = status;
                    LoRaMacCommandsAddCmd( MOTE_MAC_DL_CHANNEL_ANS, macCmdPayload, 1 );
                }
                break;
            }
            case SRV_MAC_ADR_PARAM_SETUP_REQ:
            {






                uint8_t delayExp = 0x0F & payload[macIndex];
                uint8_t limitExp = 0x0F & ( payload[macIndex] >> 4 );
                macIndex++;


                Nvm.MacGroup2.MacParams.AdrAckDelay = 0x01 << delayExp;


                Nvm.MacGroup2.MacParams.AdrAckLimit = 0x01 << limitExp;

                LoRaMacCommandsAddCmd( MOTE_MAC_ADR_PARAM_SETUP_ANS, macCmdPayload, 0 );
                break;
            }
            case SRV_MAC_FORCE_REJOIN_REQ:
            {







                uint8_t period = ( 0x38 & payload[macIndex] ) >> 3;
                Nvm.MacGroup2.ForceRejoinMaxRetries = 0x07 & payload[macIndex];
                macIndex++;
                Nvm.MacGroup2.ForceRejoinType = ( 0x70 & payload[macIndex] ) >> 4;
                Nvm.MacGroup1.ChannelsDatarate = 0x0F & payload[macIndex];
                macIndex ++;


                uint32_t rejoinCycleInSec = 32 * ( 0x01 << period ) + randr( 0, 32 );

                MacCtx.ForceRejonCycleTime = 0;
                Nvm.MacGroup1.ForceRejoinRetriesCounter = 0;
                ConvertRejoinCycleTime( rejoinCycleInSec, &MacCtx.ForceRejonCycleTime );
                OnForceRejoinReqCycleTimerEvent( 
# 2520 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                ((void *)0) 
# 2520 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                     );
                break;
            }
            case SRV_MAC_REJOIN_PARAM_REQ:
            {





                uint8_t maxCountN = 0x0F & payload[macIndex];
                uint8_t maxTimeN = 0x0F & ( payload[macIndex] >> 4 );
                uint32_t cycleInSec = 0x01 << ( maxTimeN + 10 );
                uint32_t timeInMs = 0;
                uint16_t uplinkLimit = 0x01 << ( maxCountN + 4 );
                macIndex++;
                macCmdPayload[0] = 0;

                if( ConvertRejoinCycleTime( cycleInSec, &timeInMs ) == 
# 2538 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                      1 
# 2538 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                           )
                {

                    Nvm.MacGroup2.Rejoin0CycleInSec = cycleInSec;

                    Nvm.MacGroup2.Rejoin0UplinksLimit = uplinkLimit;
                    MacCtx.Rejoin0CycleTime = timeInMs;

                    macCmdPayload[0] = 0x01;
                    do { if (UTIL_TIMER_IsRunning(&MacCtx.Rejoin0CycleTimer)) { UTIL_TIMER_Stop(&MacCtx.Rejoin0CycleTimer); } } while(0);
                    do{ UTIL_TIMER_SetPeriod(&MacCtx.Rejoin0CycleTimer, MacCtx.Rejoin0CycleTime); } while(0);
                    do { UTIL_TIMER_Start(&MacCtx.Rejoin0CycleTimer); } while(0);
                }
                LoRaMacCommandsAddCmd( MOTE_MAC_REJOIN_PARAM_ANS, macCmdPayload, 1 );
                break;
             }
            case SRV_MAC_DEVICE_MODE_CONF:
            {

                macIndex++;
                if( LoRaMacCommandsGetCmd( MOTE_MAC_DEVICE_MODE_IND, &macCmd) == LORAMAC_COMMANDS_SUCCESS )
                {
                    LoRaMacCommandsRemoveCmd( macCmd );
                }
                break;
            }
            case SRV_MAC_DEVICE_TIME_ANS:
            {


                if( LoRaMacConfirmQueueIsCmdActive( MLME_DEVICE_TIME ) == 
# 2568 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                         1 
# 2568 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                              )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_DEVICE_TIME );

                    SysTime_t gpsEpochTime = { 0 };
                    SysTime_t sysTime = { 0 };
                    SysTime_t sysTimeCurrent = { 0 };

                    gpsEpochTime.Seconds = ( uint32_t )payload[macIndex++];
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 8;
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 16;
                    gpsEpochTime.Seconds |= ( uint32_t )payload[macIndex++] << 24;
                    gpsEpochTime.SubSeconds = payload[macIndex++];



                    gpsEpochTime.SubSeconds = ( int16_t )( ( ( int32_t )gpsEpochTime.SubSeconds * 1000 ) >> 8 );


                    sysTime = gpsEpochTime;

                    sysTime.Seconds += 315964800;


                    sysTimeCurrent = SysTimeGet( );
                    sysTime = SysTimeAdd( sysTimeCurrent, SysTimeSub( sysTime, MacCtx.LastTxSysTime ) );


                    SysTimeSet( sysTime );
                    LoRaMacClassBDeviceTimeAns( );
                    MacCtx.McpsIndication.DeviceTimeAnsReceived = 
# 2598 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                 1
# 2598 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                     ;
                }
                else
                {

                    MacCtx.McpsIndication.DeviceTimeAnsReceived = 
# 2603 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                 0
# 2603 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                      ;
                }
                break;
            }
            case SRV_MAC_PING_SLOT_INFO_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_PING_SLOT_INFO ) == 
# 2609 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                            1 
# 2609 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                 )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_PING_SLOT_INFO );


                    if( ( MacCtx.RxSlot != RX_SLOT_WIN_CLASS_B_PING_SLOT ) && ( MacCtx.RxSlot != RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT ) )
                    {
                        LoRaMacClassBPingSlotInfoAns( );
                    }
                }
                break;
            }
            case SRV_MAC_PING_SLOT_CHANNEL_REQ:
            {
                uint8_t status = 0x03;
                uint32_t frequency = 0;
                uint8_t datarate;

                frequency = ( uint32_t )payload[macIndex++];
                frequency |= ( uint32_t )payload[macIndex++] << 8;
                frequency |= ( uint32_t )payload[macIndex++] << 16;
                frequency *= 100;
                datarate = payload[macIndex++] & 0x0F;

                status = LoRaMacClassBPingSlotChannelReq( datarate, frequency );
                macCmdPayload[0] = status;
                LoRaMacCommandsAddCmd( MOTE_MAC_PING_SLOT_CHANNEL_ANS, macCmdPayload, 1 );
                break;
            }
            case SRV_MAC_BEACON_TIMING_ANS:
            {
                if( LoRaMacConfirmQueueIsCmdActive( MLME_BEACON_TIMING ) == 
# 2640 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 2640 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
                {
                    LoRaMacConfirmQueueSetStatus( LORAMAC_EVENT_INFO_STATUS_OK, MLME_BEACON_TIMING );
                    uint16_t beaconTimingDelay = 0;
                    uint8_t beaconTimingChannel = 0;

                    beaconTimingDelay = ( uint16_t )payload[macIndex++];
                    beaconTimingDelay |= ( uint16_t )payload[macIndex++] << 8;
                    beaconTimingChannel = payload[macIndex++];

                    LoRaMacClassBBeaconTimingAns( beaconTimingDelay, beaconTimingChannel, RxDoneParams.LastRxDone );
                }
                break;
            }
            case SRV_MAC_BEACON_FREQ_REQ:
                {
                    uint32_t frequency = 0;

                    frequency = ( uint32_t )payload[macIndex++];
                    frequency |= ( uint32_t )payload[macIndex++] << 8;
                    frequency |= ( uint32_t )payload[macIndex++] << 16;
                    frequency *= 100;

                    if( LoRaMacClassBBeaconFreqReq( frequency ) == 
# 2663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 2663 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                       )
                    {
                        macCmdPayload[0] = 1;
                    }
                    else
                    {
                        macCmdPayload[0] = 0;
                    }
                    LoRaMacCommandsAddCmd( MOTE_MAC_BEACON_FREQ_ANS, macCmdPayload, 1 );
                }
                break;
            default:

                return;
        }
    }
}

LoRaMacStatus_t Send( LoRaMacHeader_t* macHdr, uint8_t fPort, void* fBuffer, uint16_t fBufferSize )
{
    LoRaMacFrameCtrl_t fCtrl;
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    int8_t datarate = Nvm.MacGroup1.ChannelsDatarate;
    int8_t txPower = Nvm.MacGroup1.ChannelsTxPower;
    uint32_t adrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    CalcNextAdrParams_t adrNext;


    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        return LORAMAC_STATUS_NO_NETWORK_JOINED;
    }
    if( Nvm.MacGroup2.MaxDCycle == 0 )
    {
        Nvm.MacGroup1.AggregatedTimeOff = 0;
    }

    fCtrl.Value = 0;
    fCtrl.Bits.FOptsLen = 0;
    fCtrl.Bits.Adr = Nvm.MacGroup2.AdrCtrlOn;


    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        fCtrl.Bits.FPending = 1;
    }
    else
    {
        fCtrl.Bits.FPending = 0;
    }


    if( Nvm.MacGroup1.SrvAckRequested == 
# 2715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                        1 
# 2715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             )
    {
        fCtrl.Bits.Ack = 1;
    }


    adrNext.UpdateChanMask = 
# 2721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            1
# 2721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                ;
    adrNext.AdrEnabled = fCtrl.Bits.Adr;
    adrNext.AdrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    adrNext.AdrAckLimit = Nvm.MacGroup2.MacParams.AdrAckLimit;
    adrNext.AdrAckDelay = Nvm.MacGroup2.MacParams.AdrAckDelay;
    adrNext.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    adrNext.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    adrNext.NbTrans = Nvm.MacGroup2.MacParams.ChannelsNbTrans;
    adrNext.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    adrNext.Region = Nvm.MacGroup2.Region;

    fCtrl.Bits.AdrAckReq = LoRaMacAdrCalcNext( &adrNext, &Nvm.MacGroup1.ChannelsDatarate,
                                               &Nvm.MacGroup1.ChannelsTxPower,
                                               &Nvm.MacGroup2.MacParams.ChannelsNbTrans, &adrAckCounter );


    status = PrepareFrame( macHdr, &fCtrl, fPort, fBuffer, fBufferSize );


    if( ( status == LORAMAC_STATUS_OK ) || ( status == LORAMAC_STATUS_SKIPPED_APP_DATA ) )
    {

        status = ScheduleTx( 
# 2743 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            0 
# 2743 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  );
    }


    if( status != LORAMAC_STATUS_OK )
    {


        Nvm.MacGroup1.ChannelsDatarate = datarate;
        Nvm.MacGroup1.ChannelsTxPower = txPower;
    }
    else
    {

        Nvm.MacGroup1.SrvAckRequested = 
# 2757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       0
# 2757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            ;
        Nvm.MacGroup1.AdrAckCounter = adrAckCounter;

        if( LoRaMacCommandsRemoveNoneStickyCmds( ) != LORAMAC_COMMANDS_SUCCESS )
        {
            return LORAMAC_STATUS_MAC_COMMAD_ERROR;
        }
    }
    return status;
}

LoRaMacStatus_t SendReJoinReq( JoinReqIdentifier_t joinReqType )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    LoRaMacHeader_t macHdr;
    macHdr.Value = 0;
    
# 2773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 2773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        allowDelayedTx = 
# 2773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                         1
# 2773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;


    switch( joinReqType )
    {
        case REJOIN_REQ_1:
        {
            Nvm.MacGroup2.IsRejoinAcceptPending = 
# 2780 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 1
# 2780 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                     ;

            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_RE_JOIN_1;
            MacCtx.TxMsg.Message.ReJoin1.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.ReJoin1.BufSize = 255;

            macHdr.Bits.MType = FRAME_TYPE_REJOIN;
            MacCtx.TxMsg.Message.ReJoin1.MHDR.Value = macHdr.Value;

            MacCtx.TxMsg.Message.ReJoin1.ReJoinType = 1;

            memcpy1( MacCtx.TxMsg.Message.ReJoin1.JoinEUI, SecureElementGetJoinEui( ), 8 );
            memcpy1( MacCtx.TxMsg.Message.ReJoin1.DevEUI, SecureElementGetDevEui( ), 8 );

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetRJcount( RJ_COUNT_1, &MacCtx.TxMsg.Message.ReJoin1.RJcount1 ) )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }

            break;
        }
        case REJOIN_REQ_0:
        case REJOIN_REQ_2:
        {
            if( joinReqType == REJOIN_REQ_0 )
            {
                MacCtx.TxMsg.Message.ReJoin0or2.ReJoinType = 0;
            }
            else
            {
                MacCtx.TxMsg.Message.ReJoin0or2.ReJoinType = 2;
            }

            Nvm.MacGroup2.IsRejoinAcceptPending = 
# 2813 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                 1
# 2813 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                     ;

            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_RE_JOIN_0_2;
            MacCtx.TxMsg.Message.ReJoin0or2.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.ReJoin0or2.BufSize = 255;

            macHdr.Bits.MType = FRAME_TYPE_REJOIN;
            MacCtx.TxMsg.Message.ReJoin0or2.MHDR.Value = macHdr.Value;

            MacCtx.TxMsg.Message.ReJoin0or2.NetID[0] = Nvm.MacGroup2.NetID & 0xFF;
            MacCtx.TxMsg.Message.ReJoin0or2.NetID[1] = ( Nvm.MacGroup2.NetID >> 8 ) & 0xFF;
            MacCtx.TxMsg.Message.ReJoin0or2.NetID[2] = ( Nvm.MacGroup2.NetID >> 16 ) & 0xFF;

            memcpy1( MacCtx.TxMsg.Message.ReJoin0or2.DevEUI, SecureElementGetDevEui( ), 8 );

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetRJcount( RJ_COUNT_0, &MacCtx.TxMsg.Message.ReJoin0or2.RJcount0 ) )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }

            break;
        }
        case JOIN_REQ:
        {
            SwitchClass( CLASS_A );

            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_JOIN_REQUEST;
            MacCtx.TxMsg.Message.JoinReq.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.JoinReq.BufSize = 255;

            macHdr.Bits.MType = FRAME_TYPE_JOIN_REQ;
            MacCtx.TxMsg.Message.JoinReq.MHDR.Value = macHdr.Value;

            memcpy1( MacCtx.TxMsg.Message.JoinReq.JoinEUI, SecureElementGetJoinEui( ), 8 );
            memcpy1( MacCtx.TxMsg.Message.JoinReq.DevEUI, SecureElementGetDevEui( ), 8 );

            allowDelayedTx = 
# 2849 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            0
# 2849 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                 ;

            break;
        }
        default:
            status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            break;
    }


    status = ScheduleTx( allowDelayedTx );
    return status;
}

static LoRaMacStatus_t CheckForClassBCollision( void )
{
    if( LoRaMacClassBIsBeaconExpected( ) == 
# 2865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           1 
# 2865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
    {
        return LORAMAC_STATUS_BUSY_BEACON_RESERVED_TIME;
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {
        if( LoRaMacClassBIsPingExpected( ) == 
# 2872 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1 
# 2872 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  )
        {
            return LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME;
        }
        else if( LoRaMacClassBIsMulticastExpected( ) == 
# 2876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                       1 
# 2876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                            )
        {
            return LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME;
        }
    }
    return LORAMAC_STATUS_OK;
}

static void ComputeRxWindowParameters( void )
{

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     RegionApplyDrOffset( Nvm.MacGroup2.Region,
                                                          Nvm.MacGroup2.MacParams.DownlinkDwellTime,
                                                          Nvm.MacGroup1.ChannelsDatarate,
                                                          Nvm.MacGroup2.MacParams.Rx1DrOffset ),
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindow1Config );

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     Nvm.MacGroup2.MacParams.Rx2Channel.Datarate,
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindow2Config );


    MacCtx.RxWindow1Delay = Nvm.MacGroup2.MacParams.ReceiveDelay1 + MacCtx.RxWindow1Config.WindowOffset;
    MacCtx.RxWindow2Delay = Nvm.MacGroup2.MacParams.ReceiveDelay2 + MacCtx.RxWindow2Config.WindowOffset;

    if( MacCtx.TxMsg.Type != LORAMAC_MSG_TYPE_DATA )
    {
        MacCtx.RxWindow1Delay = Nvm.MacGroup2.MacParams.JoinAcceptDelay1 + MacCtx.RxWindow1Config.WindowOffset;
        MacCtx.RxWindow2Delay = Nvm.MacGroup2.MacParams.JoinAcceptDelay2 + MacCtx.RxWindow2Config.WindowOffset;
    }
}

static LoRaMacStatus_t VerifyTxFrame( void )
{
    size_t macCmdsSize = 0;

    if( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE )
    {
        if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
        {
            return LORAMAC_STATUS_MAC_COMMAD_ERROR;
        }

        if( ValidatePayloadLength( MacCtx.AppDataSize, Nvm.MacGroup1.ChannelsDatarate, macCmdsSize ) == 
# 2924 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                                       0 
# 2924 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                             )
        {
            return LORAMAC_STATUS_LENGTH_ERROR;
        }
    }
    return LORAMAC_STATUS_OK;
}

static LoRaMacStatus_t SerializeTxFrame( void )
{
    LoRaMacSerializerStatus_t serializeStatus;

    switch( MacCtx.TxMsg.Type )
    {
        case LORAMAC_MSG_TYPE_JOIN_REQUEST:
            serializeStatus = LoRaMacSerializerJoinRequest( &MacCtx.TxMsg.Message.JoinReq );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.JoinReq.BufSize;
            break;
        case LORAMAC_MSG_TYPE_RE_JOIN_1:
            serializeStatus = LoRaMacSerializerReJoinType1( &MacCtx.TxMsg.Message.ReJoin1 );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.ReJoin1.BufSize;
            break;
        case LORAMAC_MSG_TYPE_RE_JOIN_0_2:
            serializeStatus = LoRaMacSerializerReJoinType0or2( &MacCtx.TxMsg.Message.ReJoin0or2 );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.ReJoin0or2.BufSize;
            break;
        case LORAMAC_MSG_TYPE_DATA:
            serializeStatus = LoRaMacSerializerData( &MacCtx.TxMsg.Message.Data );
            if( LORAMAC_SERIALIZER_SUCCESS != serializeStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.Data.BufSize;
            break;
        case LORAMAC_MSG_TYPE_JOIN_ACCEPT:
        case LORAMAC_MSG_TYPE_UNDEF:
        default:
            return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

static LoRaMacStatus_t ScheduleTx( 
# 2978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  _Bool 
# 2978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       allowDelayedTx )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    NextChanParams_t nextChan;


    status = CheckForClassBCollision( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }


    CalculateBackOff( );


    status = SerializeTxFrame( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }

    nextChan.AggrTimeOff = Nvm.MacGroup1.AggregatedTimeOff;
    nextChan.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    nextChan.DutyCycleEnabled = Nvm.MacGroup2.DutyCycleOn;
    nextChan.ElapsedTimeSinceStartUp = SysTimeSub( SysTimeGetMcuTime( ), Nvm.MacGroup2.InitializationTime );
    nextChan.LastAggrTx = Nvm.MacGroup1.LastTxDoneTime;
    nextChan.LastTxIsJoinRequest = 
# 3005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  0
# 3005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                       ;
    nextChan.Joined = 
# 3006 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                     1
# 3006 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                         ;
    nextChan.PktLen = MacCtx.PktBufferLen;


    if( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_NONE )
    {
        nextChan.LastTxIsJoinRequest = 
# 3012 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      1
# 3012 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          ;
        nextChan.Joined = 
# 3013 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                         0
# 3013 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                              ;
    }


    status = RegionNextChannel( Nvm.MacGroup2.Region, &nextChan, &MacCtx.Channel, &MacCtx.DutyCycleWaitTime, &Nvm.MacGroup1.AggregatedTimeOff );

    if( status != LORAMAC_STATUS_OK )
    {
        if( status == LORAMAC_STATUS_DUTYCYCLE_RESTRICTED )
        {
            if( MacCtx.DutyCycleWaitTime != 0 )
            {
                if( allowDelayedTx == 
# 3025 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                     1 
# 3025 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          )
                {


                    MacCtx.MacState |= LORAMAC_TX_DELAYED;
                    udrv_serial_log_printf("Retransmit_DutyCycleWaitTime:%u\r\n",MacCtx.DutyCycleWaitTime);
                    do{ UTIL_TIMER_SetPeriod(&MacCtx.TxDelayedTimer, MacCtx.DutyCycleWaitTime); } while(0);
                    do { UTIL_TIMER_Start(&MacCtx.TxDelayedTimer); } while(0);
                    return LORAMAC_STATUS_OK;
                }

                return status;
            }
        }
        else
        {
            return status;
        }
    }


    ComputeRxWindowParameters( );


    status = VerifyTxFrame( );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }


    service_lora_arssi_tx_callback(MacCtx.Channel);
    return SendFrameOnChannel( MacCtx.Channel );
}

static LoRaMacStatus_t SecureFrame( uint8_t txDr, uint8_t txCh )
{
    LoRaMacCryptoStatus_t macCryptoStatus = LORAMAC_CRYPTO_ERROR;
    uint32_t fCntUp = 0;

    switch( MacCtx.TxMsg.Type )
    {
        case LORAMAC_MSG_TYPE_JOIN_REQUEST:
            macCryptoStatus = LoRaMacCryptoPrepareJoinRequest( &MacCtx.TxMsg.Message.JoinReq );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.JoinReq.BufSize;
            break;
        case LORAMAC_MSG_TYPE_RE_JOIN_1:
            macCryptoStatus = LoRaMacCryptoPrepareReJoinType1( &MacCtx.TxMsg.Message.ReJoin1 );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.ReJoin1.BufSize;
            break;
        case LORAMAC_MSG_TYPE_RE_JOIN_0_2:
            macCryptoStatus = LoRaMacCryptoPrepareReJoinType0or2( &MacCtx.TxMsg.Message.ReJoin0or2 );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.ReJoin0or2.BufSize;
            break;
        case LORAMAC_MSG_TYPE_DATA:

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetFCntUp( &fCntUp ) )
            {
                return LORAMAC_STATUS_FCNT_HANDLER_ERROR;
            }

            if( MacCtx.ChannelsNbTransCounter >= 1 )
            {
                fCntUp -= 1;
            }

            macCryptoStatus = LoRaMacCryptoSecureMessage( fCntUp, txDr, txCh, &MacCtx.TxMsg.Message.Data );
            if( LORAMAC_CRYPTO_SUCCESS != macCryptoStatus )
            {
                return LORAMAC_STATUS_CRYPTO_ERROR;
            }
            MacCtx.PktBufferLen = MacCtx.TxMsg.Message.Data.BufSize;
            break;
        case LORAMAC_MSG_TYPE_JOIN_ACCEPT:
        case LORAMAC_MSG_TYPE_UNDEF:
        default:
            return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

static void CalculateBackOff( void )
{


    if( Nvm.MacGroup1.AggregatedTimeOff == 0 )
    {


        Nvm.MacGroup1.AggregatedTimeOff = ( MacCtx.TxTimeOnAir * Nvm.MacGroup2.AggregatedDCycle - MacCtx.TxTimeOnAir );
    }
}

static void RemoveMacCommands( LoRaMacRxSlot_t rxSlot, LoRaMacFrameCtrl_t fCtrl, Mcps_t request )
{
    if( rxSlot == RX_SLOT_WIN_1 || rxSlot == RX_SLOT_WIN_2 )
    {


        if( request == MCPS_CONFIRMED )
        {
            if( fCtrl.Bits.Ack == 1 )
            {
                LoRaMacCommandsRemoveStickyAnsCmds( );
            }
        }
        else
        {
            LoRaMacCommandsRemoveStickyAnsCmds( );
        }
    }
}


static void ResetMacParameters( 
# 3151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                               _Bool 
# 3151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                    isRejoin )
{
    LoRaMacClassBCallback_t classBCallbacks;
    LoRaMacClassBParams_t classBParams;

    if( isRejoin == 
# 3156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                   0 
# 3156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                         )
    {
        Nvm.MacGroup2.NetworkActivation = ACTIVATION_TYPE_NONE;
    }


    Nvm.MacGroup1.AdrAckCounter = 0;

    MacCtx.ChannelsNbTransCounter = 0;
    MacCtx.RetransmitTimeoutRetry = 
# 3165 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   0
# 3165 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                        ;
    MacCtx.ResponseTimeoutStartTime = 0;

    Nvm.MacGroup2.MaxDCycle = 0;
    Nvm.MacGroup2.AggregatedDCycle = 1;

    Nvm.MacGroup1.ChannelsTxPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
    Nvm.MacGroup1.ChannelsDatarate = Nvm.MacGroup2.ChannelsDatarateDefault;
    Nvm.MacGroup2.MacParams.Rx1DrOffset = Nvm.MacGroup2.MacParamsDefaults.Rx1DrOffset;
    Nvm.MacGroup2.MacParams.Rx2Channel = Nvm.MacGroup2.MacParamsDefaults.Rx2Channel;
    Nvm.MacGroup2.MacParams.RxCChannel = Nvm.MacGroup2.MacParamsDefaults.RxCChannel;
    Nvm.MacGroup2.MacParams.UplinkDwellTime = Nvm.MacGroup2.MacParamsDefaults.UplinkDwellTime;
    Nvm.MacGroup2.MacParams.DownlinkDwellTime = Nvm.MacGroup2.MacParamsDefaults.DownlinkDwellTime;
    Nvm.MacGroup2.MacParams.MaxEirp = Nvm.MacGroup2.MacParamsDefaults.MaxEirp;
    Nvm.MacGroup2.MacParams.AntennaGain = Nvm.MacGroup2.MacParamsDefaults.AntennaGain;
    Nvm.MacGroup2.MacParams.AdrAckLimit = Nvm.MacGroup2.MacParamsDefaults.AdrAckLimit;
    Nvm.MacGroup2.MacParams.AdrAckDelay = Nvm.MacGroup2.MacParamsDefaults.AdrAckDelay;

    MacCtx.NodeAckRequested = 
# 3183 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                             0
# 3183 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  ;
    Nvm.MacGroup1.SrvAckRequested = 
# 3184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   0
# 3184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                        ;
    Nvm.MacGroup2.ChannelsDatarateChangedLinkAdrReq = 
# 3185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                     0
# 3185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                          ;
    Nvm.MacGroup2.DownlinkReceived = 
# 3186 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                    0
# 3186 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         ;

    Nvm.MacGroup2.Rejoin0UplinksLimit = 0;
    Nvm.MacGroup2.ForceRejoinMaxRetries = 0;
    Nvm.MacGroup2.ForceRejoinType = 0;
    Nvm.MacGroup2.Rejoin0CycleInSec = 0;
    Nvm.MacGroup2.Rejoin1CycleInSec = 0;
    Nvm.MacGroup2.IsRejoin0RequestQueued = 0;
    Nvm.MacGroup2.IsRejoin1RequestQueued = 0;
    Nvm.MacGroup2.IsRejoin2RequestQueued = 0;


    InitDefaultsParams_t params;
    params.Type = INIT_TYPE_RESET_TO_DEFAULT_CHANNELS;
    params.NvmGroup1 = &Nvm.RegionGroup1;
    params.NvmGroup2 = &Nvm.RegionGroup2;
    params.Bands = &RegionBands;
    RegionInitDefaults( Nvm.MacGroup2.Region, &params );


    MacCtx.Channel = 0;


    MacCtx.RxWindow2Config.Channel = MacCtx.Channel;
    MacCtx.RxWindow2Config.Frequency = Nvm.MacGroup2.MacParams.Rx2Channel.Frequency;
    MacCtx.RxWindow2Config.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
    MacCtx.RxWindow2Config.RxContinuous = 
# 3212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         0
# 3212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;
    MacCtx.RxWindow2Config.RxSlot = RX_SLOT_WIN_2;
    MacCtx.RxWindow2Config.NetworkActivation = Nvm.MacGroup2.NetworkActivation;


    MacCtx.RxWindowCConfig = MacCtx.RxWindow2Config;
    MacCtx.RxWindowCConfig.RxContinuous = 
# 3218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         1
# 3218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             ;
    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;



    classBCallbacks.GetTemperatureLevel = 
# 3223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         ((void *)0)
# 3223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             ;
    classBCallbacks.MacProcessNotify = 
# 3224 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      ((void *)0)
# 3224 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          ;

    if( MacCtx.MacCallbacks != 
# 3226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                              ((void *)0) 
# 3226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                   )
    {
        classBCallbacks.GetTemperatureLevel = MacCtx.MacCallbacks->GetTemperatureLevel;
        classBCallbacks.MacProcessNotify = MacCtx.MacCallbacks->MacProcessNotify;
    }


    classBParams.MlmeIndication = &MacCtx.MlmeIndication;
    classBParams.McpsIndication = &MacCtx.McpsIndication;
    classBParams.MlmeConfirm = &MacCtx.MlmeConfirm;
    classBParams.LoRaMacFlags = &MacCtx.MacFlags;
    classBParams.LoRaMacDevAddr = &Nvm.MacGroup2.DevAddr;
    classBParams.LoRaMacRegion = &Nvm.MacGroup2.Region;
    classBParams.LoRaMacParams = &Nvm.MacGroup2.MacParams;
    classBParams.MulticastChannels = &Nvm.MacGroup2.MulticastChannelList[0];
    classBParams.NetworkActivation = &Nvm.MacGroup2.NetworkActivation;

    LoRaMacClassBInit( &classBParams, &classBCallbacks, &Nvm.ClassB );
}

static 
# 3246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           IsReJoin0Required( )
{

    if( ( Nvm.MacGroup2.Rejoin0UplinksLimit == Nvm.MacGroup1.Rejoin0UplinksCounter ) &&
        ( Nvm.MacGroup2.Version.Fields.Minor >= 1 ) &&
        ( Nvm.MacGroup2.Rejoin0UplinksLimit != 0 ) )
    {
        Nvm.MacGroup1.Rejoin0UplinksCounter = 0;
        return 
# 3254 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 3254 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }
    return 
# 3256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 3256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}







static void RxWindowSetup( UTIL_TIMER_Object_t* rxTimer, RxConfigParams_t* rxConfig )
{
    do { if (UTIL_TIMER_IsRunning(rxTimer)) { UTIL_TIMER_Stop(rxTimer); } } while(0);


    Radio.Standby( );

    if( RegionRxConfig( Nvm.MacGroup2.Region, rxConfig, ( int8_t* )&MacCtx.McpsIndication.RxDatarate ) == 
# 3272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                                         1 
# 3272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                              )
    {
        Radio.Rx( Nvm.MacGroup2.MacParams.MaxRxWindow );
        MacCtx.RxSlot = rxConfig->RxSlot;
    }
}

static void OpenContinuousRxCWindow( void )
{

    RegionComputeRxWindowParameters( Nvm.MacGroup2.Region,
                                     Nvm.MacGroup2.MacParams.RxCChannel.Datarate,
                                     Nvm.MacGroup2.MacParams.MinRxSymbols,
                                     Nvm.MacGroup2.MacParams.SystemMaxRxError,
                                     &MacCtx.RxWindowCConfig );

    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;
    MacCtx.RxWindowCConfig.NetworkActivation = Nvm.MacGroup2.NetworkActivation;

    MacCtx.RxWindowCConfig.RxContinuous = 
# 3291 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         1
# 3291 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             ;



    if( RegionRxConfig( Nvm.MacGroup2.Region, &MacCtx.RxWindowCConfig, ( int8_t* )&MacCtx.McpsIndication.RxDatarate ) == 
# 3295 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                                                        1 
# 3295 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                                             )
    {
        Radio.Rx( 0 );
        MacCtx.RxSlot = MacCtx.RxWindowCConfig.RxSlot;
    }
}

LoRaMacStatus_t PrepareFrame( LoRaMacHeader_t* macHdr, LoRaMacFrameCtrl_t* fCtrl, uint8_t fPort, void* fBuffer, uint16_t fBufferSize )
{
    MacCtx.PktBufferLen = 0;
    MacCtx.NodeAckRequested = 
# 3305 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                             0
# 3305 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  ;
    uint32_t fCntUp = 0;
    size_t macCmdsSize = 0;
    uint8_t availableSize = 0;

    if( fBuffer == 
# 3310 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  ((void *)0) 
# 3310 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                       )
    {
        fBufferSize = 0;
    }

    memcpy1( MacCtx.AppData, ( uint8_t* ) fBuffer, fBufferSize );
    MacCtx.AppDataSize = fBufferSize;
    MacCtx.PktBuffer[0] = macHdr->Value;

    switch( macHdr->Bits.MType )
    {
        case FRAME_TYPE_DATA_CONFIRMED_UP:
            MacCtx.NodeAckRequested = 
# 3322 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                     1
# 3322 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         ;

        case FRAME_TYPE_DATA_UNCONFIRMED_UP:
            MacCtx.TxMsg.Type = LORAMAC_MSG_TYPE_DATA;
            MacCtx.TxMsg.Message.Data.Buffer = MacCtx.PktBuffer;
            MacCtx.TxMsg.Message.Data.BufSize = 255;
            MacCtx.TxMsg.Message.Data.MHDR.Value = macHdr->Value;
            MacCtx.TxMsg.Message.Data.FPort = fPort;
            MacCtx.TxMsg.Message.Data.FHDR.DevAddr = Nvm.MacGroup2.DevAddr;
            MacCtx.TxMsg.Message.Data.FHDR.FCtrl.Value = fCtrl->Value;
            MacCtx.TxMsg.Message.Data.FRMPayloadSize = MacCtx.AppDataSize;
            MacCtx.TxMsg.Message.Data.FRMPayload = MacCtx.AppData;

            if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoGetFCntUp( &fCntUp ) )
            {
                return LORAMAC_STATUS_FCNT_HANDLER_ERROR;
            }
            MacCtx.TxMsg.Message.Data.FHDR.FCnt = ( uint16_t )fCntUp;


            MacCtx.McpsConfirm.NbTrans = 0;
            MacCtx.McpsConfirm.AckReceived = 
# 3343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            0
# 3343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 ;
            MacCtx.McpsConfirm.UpLinkCounter = fCntUp;


            if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
            {
                return LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }

            if( macCmdsSize > 0 )
            {
                availableSize = GetMaxAppPayloadWithoutFOptsLength( Nvm.MacGroup1.ChannelsDatarate );


                if( ( MacCtx.AppDataSize > 0 ) && ( macCmdsSize <= 15 ) )
                {
                    if( LoRaMacCommandsSerializeCmds( 15, &macCmdsSize, MacCtx.TxMsg.Message.Data.FHDR.FOpts ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }
                    fCtrl->Bits.FOptsLen = macCmdsSize;

                    MacCtx.TxMsg.Message.Data.FHDR.FCtrl.Value = fCtrl->Value;
                }

                else if( ( MacCtx.AppDataSize > 0 ) && ( macCmdsSize > 15 ) )
                {

                    if( LoRaMacCommandsSerializeCmds( availableSize, &macCmdsSize, MacCtx.MacCommandsBuffer ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }
                    return LORAMAC_STATUS_SKIPPED_APP_DATA;
                }

                else
                {
                    if( LoRaMacCommandsSerializeCmds( availableSize, &macCmdsSize, MacCtx.MacCommandsBuffer ) != LORAMAC_COMMANDS_SUCCESS )
                    {
                        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
                    }

                    MacCtx.TxMsg.Message.Data.FPort = 0;

                    MacCtx.TxMsg.Message.Data.FRMPayload = MacCtx.MacCommandsBuffer;
                    MacCtx.TxMsg.Message.Data.FRMPayloadSize = macCmdsSize;
                }
            }

            break;
        case FRAME_TYPE_PROPRIETARY:
            if( ( fBuffer != 
# 3394 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            ((void *)0) 
# 3394 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                 ) && ( MacCtx.AppDataSize > 0 ) )
            {
                memcpy1( MacCtx.PktBuffer + 1, ( uint8_t* ) fBuffer, MacCtx.AppDataSize );
                MacCtx.PktBufferLen = 1 + MacCtx.AppDataSize;
            }
            break;
        default:
            return LORAMAC_STATUS_SERVICE_UNKNOWN;
    }

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t SendFrameOnChannel( uint8_t channel )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_PARAMETER_INVALID;
    TxConfigParams_t txConfig;
    int8_t txPower = 0;

    txConfig.Channel = channel;
    txConfig.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    txConfig.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    txConfig.MaxEirp = Nvm.MacGroup2.MacParams.MaxEirp;
    txConfig.AntennaGain = Nvm.MacGroup2.MacParams.AntennaGain;
    txConfig.PktLen = MacCtx.PktBufferLen;

    RegionTxConfig( Nvm.MacGroup2.Region, &txConfig, &txPower, &MacCtx.TxTimeOnAir );

    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
    MacCtx.McpsConfirm.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    MacCtx.McpsConfirm.TxPower = txPower;
    MacCtx.McpsConfirm.Channel = channel;


    MacCtx.McpsConfirm.TxTimeOnAir = MacCtx.TxTimeOnAir;
    MacCtx.MlmeConfirm.TxTimeOnAir = MacCtx.TxTimeOnAir;

    if( LoRaMacClassBIsBeaconModeActive( ) == 
# 3431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1 
# 3431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  )
    {


        UTIL_TIMER_Time_t collisionTime = LoRaMacClassBIsUplinkCollision( MacCtx.TxTimeOnAir );

        if( collisionTime > 0 )
        {
            return LORAMAC_STATUS_BUSY_UPLINK_COLLISION;
        }
    }

    if( Nvm.MacGroup2.DeviceClass == CLASS_B )
    {

        LoRaMacClassBStopRxSlots( );
    }

    LoRaMacClassBHaltBeaconing( );


    status = SecureFrame( Nvm.MacGroup1.ChannelsDatarate, MacCtx.Channel );
    if( status != LORAMAC_STATUS_OK )
    {
        return status;
    }

    MacCtx.MacState |= LORAMAC_TX_RUNNING;

    MacCtx.ChannelsNbTransCounter++;
    MacCtx.McpsConfirm.NbTrans = MacCtx.ChannelsNbTransCounter;
    MacCtx.ResponseTimeoutStartTime = 0;


    Radio.Send( MacCtx.PktBuffer, MacCtx.PktBufferLen );

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t SetTxContinuousWave( uint16_t timeout, uint32_t frequency, uint8_t power )
{
    Radio.SetTxContinuousWave( frequency, power, timeout );

    MacCtx.MacState |= LORAMAC_TX_RUNNING;

    return LORAMAC_STATUS_OK;
}

LoRaMacNvmData_t* GetNvmData( void )
{
    return &Nvm;
}

LoRaMacStatus_t RestoreNvmData( LoRaMacNvmData_t* nvm )
{
    uint32_t crc = 0;


    if( nvm == 
# 3489 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              ((void *)0) 
# 3489 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                   )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( MacCtx.MacState != LORAMAC_STOPPED )
    {
        return LORAMAC_STATUS_BUSY;
    }


    crc = Crc32( ( uint8_t* ) &nvm->Crypto, sizeof( nvm->Crypto ) -
                                            sizeof( nvm->Crypto.Crc32 ) );
    if( crc == nvm->Crypto.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.Crypto, ( uint8_t* ) &nvm->Crypto,
                 sizeof( Nvm.Crypto ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->MacGroup1, sizeof( nvm->MacGroup1 ) -
                                               sizeof( nvm->MacGroup1.Crc32 ) );
    if( crc == nvm->MacGroup1.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.MacGroup1, ( uint8_t* ) &nvm->MacGroup1,
                 sizeof( Nvm.MacGroup1 ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->MacGroup2, sizeof( nvm->MacGroup2 ) -
                                               sizeof( nvm->MacGroup2.Crc32 ) );
    if( crc == nvm->MacGroup2.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.MacGroup2, ( uint8_t* ) &nvm->MacGroup2,
                 sizeof( Nvm.MacGroup2 ) );


        MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
        MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
        MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
        MacCtx.RxWindowCConfig.RxContinuous = 
# 3528 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1
# 3528 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 ;
        MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C;




        Radio.SetPublicNetwork( Nvm.MacGroup2.PublicNetwork );
    }


    crc = Crc32( ( uint8_t* ) &nvm->SecureElement, sizeof( nvm->SecureElement ) -
                                                   sizeof( nvm->SecureElement.Crc32 ) );
    if( crc == nvm->SecureElement.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.SecureElement,( uint8_t* ) &nvm->SecureElement,
                 sizeof( Nvm.SecureElement ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->RegionGroup1, sizeof( nvm->RegionGroup1 ) -
                                            sizeof( nvm->RegionGroup1.Crc32 ) );
    if( crc == nvm->RegionGroup1.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.RegionGroup1,( uint8_t* ) &nvm->RegionGroup1,
                 sizeof( Nvm.RegionGroup1 ) );
    }


    crc = Crc32( ( uint8_t* ) &nvm->RegionGroup2, sizeof( nvm->RegionGroup2 ) -
                                            sizeof( nvm->RegionGroup2.Crc32 ) );
    if( crc == nvm->RegionGroup2.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.RegionGroup2,( uint8_t* ) &nvm->RegionGroup2,
                 sizeof( Nvm.RegionGroup2 ) );
    }

    crc = Crc32( ( uint8_t* ) &nvm->ClassB, sizeof( nvm->ClassB ) -
                                            sizeof( nvm->ClassB.Crc32 ) );
    if( crc == nvm->ClassB.Crc32 )
    {
        memcpy1( ( uint8_t* ) &Nvm.ClassB,( uint8_t* ) &nvm->ClassB,
                 sizeof( Nvm.ClassB ) );
    }

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t DetermineFrameType( LoRaMacMessageData_t* macMsg, FType_t* fType )
{
    if( ( macMsg == 
# 3577 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                   ((void *)0) 
# 3577 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                        ) || ( fType == 
# 3577 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 3577 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
# 3602 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
    if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen > 0 ) && ( macMsg->FPort > 0 ) )
    {
        *fType = FRAME_TYPE_A;
    }
    else if( macMsg->FRMPayloadSize == 0 )
    {
        *fType = FRAME_TYPE_B;
    }
    else if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen == 0 ) && ( macMsg->FPort == 0 ) )
    {
        *fType = FRAME_TYPE_C;
    }
    else if( ( macMsg->FHDR.FCtrl.Bits.FOptsLen == 0 ) && ( macMsg->FPort > 0 ) )
    {
        *fType = FRAME_TYPE_D;
    }
    else
    {

        return LORAMAC_STATUS_ERROR;
    }

    return LORAMAC_STATUS_OK;
}

static 
# 3627 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3627 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetrans( uint8_t counter, uint8_t limit )
{
    if( counter >= limit )
    {
        return 
# 3631 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 3631 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }
    return 
# 3633 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 3633 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

static 
# 3636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetransUnconfirmedUplink( void )
{

    if( CheckRetrans( MacCtx.ChannelsNbTransCounter,
                      Nvm.MacGroup2.MacParams.ChannelsNbTrans ) == 
# 3640 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 3640 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                       )
    {
        return 
# 3642 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 3642 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }

    if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {


        if( ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_1 ) ||
            ( MacCtx.McpsIndication.RxSlot == RX_SLOT_WIN_2 ) )
        {
            return 
# 3652 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  1
# 3652 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      ;
        }
    }
    return 
# 3655 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 3655 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

static 
# 3658 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3658 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           CheckRetransConfirmedUplink( void )
{

    if( CheckRetrans( MacCtx.ChannelsNbTransCounter,
                      Nvm.MacGroup2.MacParams.ChannelsNbTrans ) == 
# 3662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                  1 
# 3662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                       )
    {
        return 
# 3664 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 3664 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }

    if( MacCtx.MacFlags.Bits.McpsInd == 1 )
    {
        if( MacCtx.McpsConfirm.AckReceived == 
# 3669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             1 
# 3669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  )
        {
            return 
# 3671 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                  1
# 3671 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      ;
        }
    }
    return 
# 3674 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          0
# 3674 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               ;
}

static uint32_t IncreaseAdrAckCounter( uint32_t counter )
{
    if( counter < 0xFFFFFFFF )
    {
        counter++;
    }
    return counter;
}

static 
# 3686 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 3686 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           StopRetransmission( void )
{

    if( Nvm.MacGroup2.Rejoin0UplinksLimit != 0 )
    {
        Nvm.MacGroup1.Rejoin0UplinksCounter++;
    }

    if( Nvm.MacGroup2.Version.Fields.Minor >= 1 )
    {
        MacCommand_t* macCmd;
        if( LoRaMacCommandsGetCmd( MOTE_MAC_REKEY_IND, &macCmd ) == LORAMAC_COMMANDS_SUCCESS )
        {

            Nvm.MacGroup1.RekeyIndUplinksCounter++;





            if( Nvm.MacGroup1.RekeyIndUplinksCounter == Nvm.MacGroup2.MacParams.AdrAckLimit )
            {
                Nvm.MacGroup2.NetworkActivation = ACTIVATION_TYPE_NONE;
                MacCtx.MacFlags.Bits.MlmeInd = 1;
                MacCtx.MlmeIndication.MlmeIndication = MLME_REVERT_JOIN;
            }
        }
    }

    if( ( MacCtx.MacFlags.Bits.McpsInd == 0 ) ||
        ( ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_1 ) &&
          ( MacCtx.McpsIndication.RxSlot != RX_SLOT_WIN_2 ) ) )
    {

        if( Nvm.MacGroup2.AdrCtrlOn == 
# 3720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                      1 
# 3720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                           )
        {
            Nvm.MacGroup1.AdrAckCounter = IncreaseAdrAckCounter( Nvm.MacGroup1.AdrAckCounter );
        }
    }

    MacCtx.ChannelsNbTransCounter = 0;
    MacCtx.NodeAckRequested = 
# 3727 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                             0
# 3727 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  ;
    MacCtx.RetransmitTimeoutRetry = 
# 3728 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   0
# 3728 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                        ;
    MacCtx.MacState &= ~LORAMAC_TX_RUNNING;

    return 
# 3731 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          1
# 3731 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
              ;
}

static void OnMacProcessNotify( void )
{
    if( ( MacCtx.MacCallbacks != 
# 3736 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 3736 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->MacProcessNotify != 
# 3736 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                     ((void *)0) 
# 3736 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                          ) )
    {
        MacCtx.MacCallbacks->MacProcessNotify( );
    }
}

static void CallNvmDataChangeCallback( uint16_t notifyFlags )
{
    if( ( MacCtx.MacCallbacks != 
# 3744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                ((void *)0) 
# 3744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                     ) && ( MacCtx.MacCallbacks->NvmDataChange != 
# 3744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                  ((void *)0) 
# 3744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                       ) )
    {
        MacCtx.MacCallbacks->NvmDataChange ( notifyFlags );
    }
}

static uint8_t IsRequestPending( void )
{
    if( ( MacCtx.MacFlags.Bits.MlmeReq == 1 ) ||
        ( MacCtx.MacFlags.Bits.McpsReq == 1 ) )
    {
        return 1;
    }
    return 0;
}


LoRaMacStatus_t LoRaMacInitialization( LoRaMacPrimitives_t* primitives, LoRaMacCallback_t* callbacks, LoRaMacRegion_t region )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    if( ( primitives == 
# 3766 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                       ((void *)0) 
# 3766 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                            ) ||
        ( callbacks == 
# 3767 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 3767 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                           ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( ( primitives->MacMcpsConfirm == 
# 3772 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3772 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            ) ||
        ( primitives->MacMcpsIndication == 
# 3773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          ((void *)0) 
# 3773 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                               ) ||
        ( primitives->MacMlmeConfirm == 
# 3774 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 3774 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            ) ||
        ( primitives->MacMlmeIndication == 
# 3775 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          ((void *)0) 
# 3775 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                               ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( RegionIsActive( region ) == 
# 3780 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   0 
# 3780 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         )
    {
        return LORAMAC_STATUS_REGION_NOT_SUPPORTED;
    }


    LoRaMacConfirmQueueInit( primitives );


    memset1( ( uint8_t* ) &Nvm, 0x00, sizeof( LoRaMacNvmData_t ) );
    memset1( ( uint8_t* ) &MacCtx, 0x00, sizeof( LoRaMacCtx_t ) );


    Nvm.MacGroup2.Region = region;
    Nvm.MacGroup2.DeviceClass = CLASS_A;


    Nvm.MacGroup2.Version.Value = 0x01010100;

    InitDefaultsParams_t params;
    params.Type = INIT_TYPE_DEFAULTS;
    params.NvmGroup1 = &Nvm.RegionGroup1;
    params.NvmGroup2 = &Nvm.RegionGroup2;
    params.Bands = &RegionBands;
    RegionInitDefaults( Nvm.MacGroup2.Region, &params );


    getPhy.Attribute = PHY_DUTY_CYCLE;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.DutyCycleOn = ( 
# 3809 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                 _Bool 
# 3809 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                      ) phyParam.Value;

    getPhy.Attribute = PHY_DEF_TX_POWER;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.ChannelsTxPowerDefault = phyParam.Value;

    getPhy.Attribute = PHY_DEF_TX_DR;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.ChannelsDatarateDefault = phyParam.Value;

    getPhy.Attribute = PHY_MAX_RX_WINDOW;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.MaxRxWindow = phyParam.Value;

    getPhy.Attribute = PHY_RECEIVE_DELAY1;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay1 = phyParam.Value;

    getPhy.Attribute = PHY_RECEIVE_DELAY2;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay2 = phyParam.Value;

    getPhy.Attribute = PHY_JOIN_ACCEPT_DELAY1;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay1 = phyParam.Value;

    getPhy.Attribute = PHY_JOIN_ACCEPT_DELAY2;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay2 = phyParam.Value;

    getPhy.Attribute = PHY_DEF_DR1_OFFSET;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx1DrOffset = phyParam.Value;

    getPhy.Attribute = PHY_DEF_RX2_FREQUENCY;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx2Channel.Frequency = phyParam.Value;
    Nvm.MacGroup2.MacParamsDefaults.RxCChannel.Frequency = phyParam.Value;

    getPhy.Attribute = PHY_DEF_RX2_DR;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.Rx2Channel.Datarate = phyParam.Value;
    Nvm.MacGroup2.MacParamsDefaults.RxCChannel.Datarate = phyParam.Value;

    getPhy.Attribute = PHY_DEF_UPLINK_DWELL_TIME;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.UplinkDwellTime = phyParam.Value;

    getPhy.Attribute = PHY_DEF_DOWNLINK_DWELL_TIME;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.DownlinkDwellTime = phyParam.Value;

    getPhy.Attribute = PHY_DEF_MAX_EIRP;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.MaxEirp = phyParam.fValue;

    getPhy.Attribute = PHY_DEF_ANTENNA_GAIN;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.AntennaGain = phyParam.fValue;

    getPhy.Attribute = PHY_DEF_ADR_ACK_LIMIT;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.AdrAckLimit = phyParam.Value;

    getPhy.Attribute = PHY_DEF_ADR_ACK_DELAY;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );
    Nvm.MacGroup2.MacParamsDefaults.AdrAckDelay = phyParam.Value;


    Nvm.MacGroup2.MacParamsDefaults.ChannelsNbTrans = 1;
    Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError = 10;
    Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols = 6;

    Nvm.MacGroup2.MacParams.SystemMaxRxError = Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError;
    Nvm.MacGroup2.MacParams.MinRxSymbols = Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols;
    Nvm.MacGroup2.MacParams.MaxRxWindow = Nvm.MacGroup2.MacParamsDefaults.MaxRxWindow;
    Nvm.MacGroup2.MacParams.ReceiveDelay1 = Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay1;
    Nvm.MacGroup2.MacParams.ReceiveDelay2 = Nvm.MacGroup2.MacParamsDefaults.ReceiveDelay2;
    Nvm.MacGroup2.MacParams.JoinAcceptDelay1 = Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay1;
    Nvm.MacGroup2.MacParams.JoinAcceptDelay2 = Nvm.MacGroup2.MacParamsDefaults.JoinAcceptDelay2;
    Nvm.MacGroup2.MacParams.ChannelsNbTrans = Nvm.MacGroup2.MacParamsDefaults.ChannelsNbTrans;


    Nvm.MacGroup2.IsCertPortOn = 
# 3892 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                1
# 3892 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                    ;

    ResetMacParameters( 
# 3894 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                       0 
# 3894 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             );

    Nvm.MacGroup2.PublicNetwork = 
# 3896 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                 1
# 3896 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                     ;

    MacCtx.MacPrimitives = primitives;
    MacCtx.MacCallbacks = callbacks;
    MacCtx.MacFlags.Value = 0;
    MacCtx.MacState = LORAMAC_STOPPED;


    Nvm.MacGroup1.LastTxDoneTime = 0;
    Nvm.MacGroup1.AggregatedTimeOff = 0;


    do { UTIL_TIMER_Create( &MacCtx.TxDelayedTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnTxDelayedTimerEvent, 
# 3908 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3908 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.RxWindowTimer1, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnRxWindow1TimerEvent, 
# 3909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.RxWindowTimer2, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnRxWindow2TimerEvent, 
# 3910 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3910 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.RetransmitTimeoutTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnRetransmitTimeoutTimerEvent, 
# 3911 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3911 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.Rejoin0CycleTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnRejoin0CycleTimerEvent, 
# 3912 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3912 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.Rejoin1CycleTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnRejoin1CycleTimerEvent, 
# 3913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);
    do { UTIL_TIMER_Create( &MacCtx.ForceRejoinReqCycleTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnForceRejoinReqCycleTimerEvent, 
# 3914 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   ((void *)0)
# 3914 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
   ); } while(0);


    Nvm.MacGroup2.InitializationTime = SysTimeGetMcuTime( );


    LoRaMacRadioEvents.Value = 0;


    MacCtx.RadioEvents.TxDone = OnRadioTxDone;
    MacCtx.RadioEvents.RxDone = OnRadioRxDone;
    MacCtx.RadioEvents.RxError = OnRadioRxError;
    MacCtx.RadioEvents.TxTimeout = OnRadioTxTimeout;
    MacCtx.RadioEvents.RxTimeout = OnRadioRxTimeout;
    Radio.Init( &MacCtx.RadioEvents );


    if( SecureElementInit( &Nvm.SecureElement ) != SECURE_ELEMENT_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    if( LoRaMacCryptoInit( &Nvm.Crypto ) != LORAMAC_CRYPTO_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    if( LoRaMacCommandsInit( ) != LORAMAC_COMMANDS_SUCCESS )
    {
        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
    }


    if( LoRaMacCryptoSetMulticastReference( Nvm.MacGroup2.MulticastChannelList ) != LORAMAC_CRYPTO_SUCCESS )
    {
        return LORAMAC_STATUS_CRYPTO_ERROR;
    }


    srand1( Radio.Random( ) );

    Radio.SetPublicNetwork( Nvm.MacGroup2.PublicNetwork );
    Radio.Sleep( );

    LoRaMacEnableRequests( LORAMAC_REQUEST_HANDLING_ON );

    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacStart( void )
{
    MacCtx.MacState = LORAMAC_IDLE;
    UpdateRxSlotIdleState();
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacStop( void )
{
    if( LoRaMacIsBusy( ) == 
# 3974 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           0 
# 3974 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                 )
    {
        if( Nvm.MacGroup2.DeviceClass == CLASS_C )
        {
            Radio.Sleep( );
        }
        MacCtx.MacState = LORAMAC_STOPPED;
        return LORAMAC_STATUS_OK;
    }
    else if( MacCtx.MacState == LORAMAC_STOPPED )
    {
        return LORAMAC_STATUS_OK;
    }
    return LORAMAC_STATUS_BUSY;
}

LoRaMacStatus_t LoRaMacQueryTxPossible( uint8_t size, LoRaMacTxInfo_t* txInfo )
{
    CalcNextAdrParams_t adrNext;
    uint32_t adrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    int8_t datarate = Nvm.MacGroup2.ChannelsDatarateDefault;
    int8_t txPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
    uint8_t nbTrans = MacCtx.ChannelsNbTransCounter;
    size_t macCmdsSize = 0;

    if( txInfo == 
# 3999 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 3999 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }


    adrNext.UpdateChanMask = 
# 4005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                            0
# 4005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                 ;
    adrNext.AdrEnabled = Nvm.MacGroup2.AdrCtrlOn;
    adrNext.AdrAckCounter = Nvm.MacGroup1.AdrAckCounter;
    adrNext.AdrAckLimit = Nvm.MacGroup2.MacParams.AdrAckLimit;
    adrNext.AdrAckDelay = Nvm.MacGroup2.MacParams.AdrAckDelay;
    adrNext.Datarate = Nvm.MacGroup1.ChannelsDatarate;
    adrNext.TxPower = Nvm.MacGroup1.ChannelsTxPower;
    adrNext.NbTrans = MacCtx.ChannelsNbTransCounter;
    adrNext.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    adrNext.Region = Nvm.MacGroup2.Region;



    LoRaMacAdrCalcNext( &adrNext, &datarate, &txPower, &nbTrans, &adrAckCounter );

    txInfo->CurrentPossiblePayloadSize = GetMaxAppPayloadWithoutFOptsLength( datarate );

    if( LoRaMacCommandsGetSizeSerializedCmds( &macCmdsSize ) != LORAMAC_COMMANDS_SUCCESS )
    {
        return LORAMAC_STATUS_MAC_COMMAD_ERROR;
    }


    if( ( 15 >= macCmdsSize ) && ( txInfo->CurrentPossiblePayloadSize >= macCmdsSize ) )
    {
        txInfo->MaxPossibleApplicationDataSize = txInfo->CurrentPossiblePayloadSize - macCmdsSize;


        if( txInfo->CurrentPossiblePayloadSize >= ( macCmdsSize + size ) )
        {
            return LORAMAC_STATUS_OK;
        }
        else
        {
           return LORAMAC_STATUS_LENGTH_ERROR;
        }
    }
    else
    {
        txInfo->MaxPossibleApplicationDataSize = 0;
        return LORAMAC_STATUS_LENGTH_ERROR;
    }
}

LoRaMacStatus_t LoRaMacMibGetRequestConfirm( MibRequestConfirm_t* mibGet )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;

    if( mibGet == 
# 4055 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 4055 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    switch( mibGet->Type )
    {
        case MIB_DEVICE_CLASS:
        {
            mibGet->Param.Class = Nvm.MacGroup2.DeviceClass;
            break;
        }
        case MIB_NETWORK_ACTIVATION:
        {
            mibGet->Param.NetworkActivation = Nvm.MacGroup2.NetworkActivation;
            break;
        }
        case MIB_DEV_EUI:
        {
            mibGet->Param.DevEui = SecureElementGetDevEui( );
            break;
        }
        case MIB_JOIN_EUI:
        {
            mibGet->Param.JoinEui = SecureElementGetJoinEui( );
            break;
        }
        case MIB_SE_PIN:
        {
            mibGet->Param.SePin = SecureElementGetPin( );
            break;
        }
        case MIB_ADR:
        {
            mibGet->Param.AdrEnable = Nvm.MacGroup2.AdrCtrlOn;
            break;
        }
        case MIB_NET_ID:
        {
            mibGet->Param.NetID = Nvm.MacGroup2.NetID;
            break;
        }
        case MIB_DEV_ADDR:
        {
            mibGet->Param.DevAddr = Nvm.MacGroup2.DevAddr;
            break;
        }
        case MIB_PUBLIC_NETWORK:
        {
            mibGet->Param.EnablePublicNetwork = Nvm.MacGroup2.PublicNetwork;
            break;
        }
        case MIB_CHANNELS:
        {
            getPhy.Attribute = PHY_CHANNELS;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelList = phyParam.Channels;
            break;
        }
        case MIB_RX2_CHANNEL:
        {
            mibGet->Param.Rx2Channel = Nvm.MacGroup2.MacParams.Rx2Channel;
            break;
        }
        case MIB_RX2_DEFAULT_CHANNEL:
        {
            mibGet->Param.Rx2Channel = Nvm.MacGroup2.MacParamsDefaults.Rx2Channel;
            break;
        }
        case MIB_RXC_CHANNEL:
        {
            mibGet->Param.RxCChannel = Nvm.MacGroup2.MacParams.RxCChannel;
            break;
        }
        case MIB_RXC_DEFAULT_CHANNEL:
        {
            mibGet->Param.RxCChannel = Nvm.MacGroup2.MacParamsDefaults.RxCChannel;
            break;
        }
        case MIB_CHANNELS_DEFAULT_MASK:
        {
            getPhy.Attribute = PHY_CHANNELS_DEFAULT_MASK;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelsDefaultMask = phyParam.ChannelsMask;
            break;
        }
        case MIB_CHANNELS_MASK:
        {
            getPhy.Attribute = PHY_CHANNELS_MASK;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelsMask = phyParam.ChannelsMask;
            break;
        }
        case MIB_CHANNELS_NB_TRANS:
        {
            mibGet->Param.ChannelsNbTrans = Nvm.MacGroup2.MacParams.ChannelsNbTrans;
            break;
        }
        case MIB_MAX_RX_WINDOW_DURATION:
        {
            mibGet->Param.MaxRxWindow = Nvm.MacGroup2.MacParams.MaxRxWindow;
            break;
        }
        case MIB_RECEIVE_DELAY_1:
        {
            mibGet->Param.ReceiveDelay1 = Nvm.MacGroup2.MacParams.ReceiveDelay1;
            break;
        }
        case MIB_RECEIVE_DELAY_2:
        {
            mibGet->Param.ReceiveDelay2 = Nvm.MacGroup2.MacParams.ReceiveDelay2;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_1:
        {
            mibGet->Param.JoinAcceptDelay1 = Nvm.MacGroup2.MacParams.JoinAcceptDelay1;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_2:
        {
            mibGet->Param.JoinAcceptDelay2 = Nvm.MacGroup2.MacParams.JoinAcceptDelay2;
            break;
        }
        case MIB_CHANNELS_MIN_TX_DATARATE:
        {
            getPhy.Attribute = PHY_MIN_TX_DR;
            getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
            phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );

            mibGet->Param.ChannelsMinTxDatarate = phyParam.Value;
            break;
        }
        case MIB_CHANNELS_DEFAULT_DATARATE:
        {
            mibGet->Param.ChannelsDefaultDatarate = Nvm.MacGroup2.ChannelsDatarateDefault;
            break;
        }
        case MIB_CHANNELS_DATARATE:
        {
            mibGet->Param.ChannelsDatarate = Nvm.MacGroup1.ChannelsDatarate;
            break;
        }
        case MIB_CHANNELS_DEFAULT_TX_POWER:
        {
            mibGet->Param.ChannelsDefaultTxPower = Nvm.MacGroup2.ChannelsTxPowerDefault;
            break;
        }
        case MIB_CHANNELS_TX_POWER:
        {
            mibGet->Param.ChannelsTxPower = Nvm.MacGroup1.ChannelsTxPower;
            break;
        }
        case MIB_SYSTEM_MAX_RX_ERROR:
        {
            mibGet->Param.SystemMaxRxError = Nvm.MacGroup2.MacParams.SystemMaxRxError;
            break;
        }
        case MIB_MIN_RX_SYMBOLS:
        {
            mibGet->Param.MinRxSymbols = Nvm.MacGroup2.MacParams.MinRxSymbols;
            break;
        }
        case MIB_ANTENNA_GAIN:
        {
            mibGet->Param.AntennaGain = Nvm.MacGroup2.MacParams.AntennaGain;
            break;
        }
        case MIB_NVM_CTXS:
        {
            mibGet->Param.Contexts = GetNvmData( );
            break;
        }
        case MIB_DEFAULT_ANTENNA_GAIN:
        {
            mibGet->Param.DefaultAntennaGain = Nvm.MacGroup2.MacParamsDefaults.AntennaGain;
            break;
        }
        case MIB_LORAWAN_VERSION:
        {
            mibGet->Param.LrWanVersion.LoRaWan = Nvm.MacGroup2.Version;
            mibGet->Param.LrWanVersion.LoRaWanRegion = RegionGetVersion( );
            break;
        }
        case MIB_APP_S_KEY:
        {
            
# 4243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
           _Bool 
# 4243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                found = 
# 4243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 4243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;
            for (int i = 0 ; i < 23 ; i++) {
                if (Nvm.SecureElement.KeyList[i].KeyID == APP_S_KEY) {
                    mibGet->Param.AppSKey = Nvm.SecureElement.KeyList[i].KeyValue;
                    found = 
# 4247 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           1
# 4247 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                               ;
                    break;
                }
            }
            if (found == 
# 4251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 4251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ) {
                status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            }
           break;
        }
        case MIB_NWK_S_ENC_KEY:
        {
            
# 4258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
           _Bool 
# 4258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                found = 
# 4258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 4258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;
            for (int i = 0 ; i < 23 ; i++) {
                if (Nvm.SecureElement.KeyList[i].KeyID == NWK_S_ENC_KEY) {
                    mibGet->Param.NwkSEncKey = Nvm.SecureElement.KeyList[i].KeyValue;
                    found = 
# 4262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           1
# 4262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                               ;
                    break;
                }
            }
            if (found == 
# 4266 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                        0
# 4266 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ) {
                status = LORAMAC_STATUS_SERVICE_UNKNOWN;
            }
           break;
        }
        case MIB_IS_CERT_FPORT_ON:
        {
            mibGet->Param.IsCertPortOn = Nvm.MacGroup2.IsCertPortOn;
            break;
        }
        case MIB_REJOIN_0_CYCLE:
        {
            mibGet->Param.Rejoin0CycleInSec = Nvm.MacGroup2.Rejoin0CycleInSec;
            break;
        }
        case MIB_REJOIN_1_CYCLE:
        {
            mibGet->Param.Rejoin1CycleInSec = Nvm.MacGroup2.Rejoin1CycleInSec;
            break;
        }
        case MIB_ADR_ACK_LIMIT:
        {
            mibGet->Param.AdrAckLimit = Nvm.MacGroup2.MacParams.AdrAckLimit;
            break;
        }
        case MIB_ADR_ACK_DELAY:
        {
            mibGet->Param.AdrAckDelay = Nvm.MacGroup2.MacParams.AdrAckDelay;
            break;
        }
        case MIB_ADR_ACK_DEFAULT_LIMIT:
        {
            mibGet->Param.AdrAckLimit = Nvm.MacGroup2.MacParamsDefaults.AdrAckLimit;
            break;
        }
        case MIB_ADR_ACK_DEFAULT_DELAY:
        {
            mibGet->Param.AdrAckDelay = Nvm.MacGroup2.MacParamsDefaults.AdrAckDelay;
            break;
        }
        case MIB_RSSI_FREE_THRESHOLD:
        {

            if( Nvm.MacGroup2.Region != LORAMAC_REGION_AS923 && Nvm.MacGroup2.Region != LORAMAC_REGION_KR920 )
            {
                status = LORAMAC_STATUS_ERROR;
            }
            else
            {
                mibGet->Param.RssiFreeThreshold = Nvm.RegionGroup2.RssiFreeThreshold;
            }



            break;
        }
        case MIB_CARRIER_SENSE_TIME:
        {

            if( Nvm.MacGroup2.Region != LORAMAC_REGION_AS923 && Nvm.MacGroup2.Region != LORAMAC_REGION_KR920 )
            {
                status = LORAMAC_STATUS_ERROR;
            }
            else
            {
                mibGet->Param.CarrierSenseTime = Nvm.RegionGroup2.CarrierSenseTime;
            }



            break;
        }
        default:
        {
            status = LoRaMacClassBMibGetRequestConfirm( mibGet );
            break;
        }
    }
    return status;
}

LoRaMacStatus_t LoRaMacMibSetRequestConfirm( MibRequestConfirm_t* mibSet )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_OK;
    ChanMaskSetParams_t chanMaskSet;
    VerifyParams_t verify;

    if( mibSet == 
# 4353 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                 ((void *)0) 
# 4353 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                      )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    switch( mibSet->Type )
    {
        case MIB_DEVICE_CLASS:
        {
            status = SwitchClass( mibSet->Param.Class );
            break;
        }
        case MIB_NETWORK_ACTIVATION:
        {
            if( mibSet->Param.NetworkActivation != ACTIVATION_TYPE_OTAA )
            {
                Nvm.MacGroup2.NetworkActivation = mibSet->Param.NetworkActivation;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_DEV_EUI:
        {
            if( SecureElementSetDevEui( mibSet->Param.DevEui ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_JOIN_EUI:
        {
            if( SecureElementSetJoinEui( mibSet->Param.JoinEui ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_SE_PIN:
        {
            if( SecureElementSetPin( mibSet->Param.SePin ) != SECURE_ELEMENT_SUCCESS )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_ADR:
        {
            Nvm.MacGroup2.AdrCtrlOn = mibSet->Param.AdrEnable;
            break;
        }
        case MIB_NET_ID:
        {
            Nvm.MacGroup2.NetID = mibSet->Param.NetID;
            break;
        }
        case MIB_DEV_ADDR:
        {
            Nvm.MacGroup2.DevAddr = mibSet->Param.DevAddr;
            break;
        }
        case MIB_APP_KEY:
        {
            if( mibSet->Param.AppKey != 
# 4422 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4422 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( APP_KEY, mibSet->Param.AppKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_NWK_KEY:
        {
            if( mibSet->Param.NwkKey != 
# 4437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( NWK_KEY, mibSet->Param.NwkKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_J_S_INT_KEY:
        {
            if( mibSet->Param.JSIntKey != 
# 4452 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 4452 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( J_S_INT_KEY, mibSet->Param.JSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_J_S_ENC_KEY:
        {
            if( mibSet->Param.JSEncKey != 
# 4467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                         ((void *)0) 
# 4467 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( J_S_ENC_KEY, mibSet->Param.JSEncKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_F_NWK_S_INT_KEY:
        {
            if( mibSet->Param.FNwkSIntKey != 
# 4482 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 4482 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( F_NWK_S_INT_KEY, mibSet->Param.FNwkSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_S_NWK_S_INT_KEY:
        {
            if( mibSet->Param.SNwkSIntKey != 
# 4497 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            ((void *)0) 
# 4497 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( S_NWK_S_INT_KEY, mibSet->Param.SNwkSIntKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_NWK_S_ENC_KEY:
        {
            if( mibSet->Param.NwkSEncKey != 
# 4512 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4512 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( NWK_S_ENC_KEY, mibSet->Param.NwkSEncKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_APP_S_KEY:
        {
            if( mibSet->Param.AppSKey != 
# 4527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 4527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( APP_S_KEY, mibSet->Param.AppSKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KE_KEY:
        {
            if( mibSet->Param.McKEKey != 
# 4542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                        ((void *)0) 
# 4542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                             )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KE_KEY, mibSet->Param.McKEKey ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_0:
        {
            if( mibSet->Param.McKey0 != 
# 4557 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4557 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_0, mibSet->Param.McKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_0:
        {
            if( mibSet->Param.McAppSKey0 != 
# 4572 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4572 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_0, mibSet->Param.McAppSKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_0:
        {
            if( mibSet->Param.McNwkSKey0 != 
# 4587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_0, mibSet->Param.McNwkSKey0 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_1:
        {
            if( mibSet->Param.McKey1 != 
# 4602 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4602 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_1, mibSet->Param.McKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_1:
        {
            if( mibSet->Param.McAppSKey1 != 
# 4617 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4617 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_1, mibSet->Param.McAppSKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_1:
        {
            if( mibSet->Param.McNwkSKey1 != 
# 4632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_1, mibSet->Param.McNwkSKey1 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_2:
        {
            if( mibSet->Param.McKey2 != 
# 4647 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4647 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_2, mibSet->Param.McKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_2:
        {
            if( mibSet->Param.McAppSKey2 != 
# 4662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_2, mibSet->Param.McAppSKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_2:
        {
            if( mibSet->Param.McNwkSKey2 != 
# 4677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_2, mibSet->Param.McNwkSKey2 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_KEY_3:
        {
            if( mibSet->Param.McKey3 != 
# 4692 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       ((void *)0) 
# 4692 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_KEY_3, mibSet->Param.McKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_APP_S_KEY_3:
        {
            if( mibSet->Param.McAppSKey3 != 
# 4707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4707 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_APP_S_KEY_3, mibSet->Param.McAppSKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MC_NWK_S_KEY_3:
        {
            if( mibSet->Param.McNwkSKey3 != 
# 4722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           ((void *)0) 
# 4722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                )
            {
                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( MC_NWK_S_KEY_3, mibSet->Param.McNwkSKey3 ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_PUBLIC_NETWORK:
        {
            Nvm.MacGroup2.PublicNetwork = mibSet->Param.EnablePublicNetwork;
            Radio.SetPublicNetwork( Nvm.MacGroup2.PublicNetwork );
            break;
        }
        case MIB_RX2_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.Rx2Channel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) != 
# 4746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            else
            {
                verify.Frequency = mibSet->Param.Rx2Channel.Frequency;
                if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_FREQUENCY ) != 
# 4753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                   1 
# 4753 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                        )
                {
                    status = LORAMAC_STATUS_PARAMETER_INVALID;
                }
                else
                {
                    Nvm.MacGroup2.MacParams.Rx2Channel = mibSet->Param.Rx2Channel;
                }
            }
            break;
        }
        case MIB_RX2_DEFAULT_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.Rx2Channel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4769 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParamsDefaults.Rx2Channel = mibSet->Param.Rx2DefaultChannel;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_RXC_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.RxCChannel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4784 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4784 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParams.RxCChannel = mibSet->Param.RxCChannel;

                if( ( Nvm.MacGroup2.DeviceClass == CLASS_C ) && ( Nvm.MacGroup2.NetworkActivation != ACTIVATION_TYPE_NONE ) )
                {




                    Radio.Sleep( );

                    OpenContinuousRxCWindow( );
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_RXC_DEFAULT_CHANNEL:
        {
            verify.DatarateParams.Datarate = mibSet->Param.RxCChannel.Datarate;
            verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 4810 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4810 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup2.MacParamsDefaults.RxCChannel = mibSet->Param.RxCDefaultChannel;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DEFAULT_MASK:
        {
            chanMaskSet.ChannelsMaskIn = mibSet->Param.ChannelsDefaultMask;
            chanMaskSet.ChannelsMaskType = CHANNELS_DEFAULT_MASK;

            if( RegionChanMaskSet( Nvm.MacGroup2.Region, &chanMaskSet ) == 
# 4825 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                          0 
# 4825 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_MASK:
        {
            chanMaskSet.ChannelsMaskIn = mibSet->Param.ChannelsMask;
            chanMaskSet.ChannelsMaskType = CHANNELS_MASK;

            if( RegionChanMaskSet( Nvm.MacGroup2.Region, &chanMaskSet ) == 
# 4836 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                          0 
# 4836 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_NB_TRANS:
        {
            if( ( mibSet->Param.ChannelsNbTrans >= 1 ) &&
                ( mibSet->Param.ChannelsNbTrans <= 15 ) )
            {
                Nvm.MacGroup2.MacParams.ChannelsNbTrans = mibSet->Param.ChannelsNbTrans;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MAX_RX_WINDOW_DURATION:
        {
            Nvm.MacGroup2.MacParams.MaxRxWindow = mibSet->Param.MaxRxWindow;
            break;
        }
        case MIB_RECEIVE_DELAY_1:
        {
            Nvm.MacGroup2.MacParams.ReceiveDelay1 = mibSet->Param.ReceiveDelay1;
            break;
        }
        case MIB_RECEIVE_DELAY_2:
        {
            Nvm.MacGroup2.MacParams.ReceiveDelay2 = mibSet->Param.ReceiveDelay2;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_1:
        {
            Nvm.MacGroup2.MacParams.JoinAcceptDelay1 = mibSet->Param.JoinAcceptDelay1;
            break;
        }
        case MIB_JOIN_ACCEPT_DELAY_2:
        {
            Nvm.MacGroup2.MacParams.JoinAcceptDelay2 = mibSet->Param.JoinAcceptDelay2;
            break;
        }
        case MIB_CHANNELS_DEFAULT_DATARATE:
        {
            verify.DatarateParams.Datarate = mibSet->Param.ChannelsDefaultDatarate;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DEF_TX_DR ) == 
# 4884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                               1 
# 4884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                    )
            {
                Nvm.MacGroup2.ChannelsDatarateDefault = verify.DatarateParams.Datarate;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DATARATE:
        {
            verify.DatarateParams.Datarate = mibSet->Param.ChannelsDatarate;
            verify.DatarateParams.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_DR ) == 
# 4899 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 4899 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup1.ChannelsDatarate = verify.DatarateParams.Datarate;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_DEFAULT_TX_POWER:
        {
            verify.TxPower = mibSet->Param.ChannelsDefaultTxPower;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DEF_TX_POWER ) == 
# 4913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                  1 
# 4913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                       )
            {
                Nvm.MacGroup2.ChannelsTxPowerDefault = verify.TxPower;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_CHANNELS_TX_POWER:
        {
            verify.TxPower = mibSet->Param.ChannelsTxPower;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_POWER ) == 
# 4927 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                              1 
# 4927 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                   )
            {
                Nvm.MacGroup1.ChannelsTxPower = verify.TxPower;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_SYSTEM_MAX_RX_ERROR:
        {
            if( mibSet->Param.SystemMaxRxError <= 500 )
            {
                Nvm.MacGroup2.MacParams.SystemMaxRxError = Nvm.MacGroup2.MacParamsDefaults.SystemMaxRxError = mibSet->Param.SystemMaxRxError;
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_MIN_RX_SYMBOLS:
        {
            Nvm.MacGroup2.MacParams.MinRxSymbols = Nvm.MacGroup2.MacParamsDefaults.MinRxSymbols = mibSet->Param.MinRxSymbols;
            break;
        }
        case MIB_ANTENNA_GAIN:
        {
            Nvm.MacGroup2.MacParams.AntennaGain = mibSet->Param.AntennaGain;
            break;
        }
        case MIB_DEFAULT_ANTENNA_GAIN:
        {
            Nvm.MacGroup2.MacParamsDefaults.AntennaGain = mibSet->Param.DefaultAntennaGain;
            break;
        }
        case MIB_NVM_CTXS:
        {
            if( mibSet->Param.Contexts != 0 )
            {
                status = RestoreNvmData( mibSet->Param.Contexts );
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_ABP_LORAWAN_VERSION:
        {
            if( mibSet->Param.AbpLrWanVersion.Fields.Minor <= 1 )
            {
                Nvm.MacGroup2.Version = mibSet->Param.AbpLrWanVersion;

                if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetLrWanVersion( mibSet->Param.AbpLrWanVersion ) )
                {
                    return LORAMAC_STATUS_CRYPTO_ERROR;
                }
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_IS_CERT_FPORT_ON:
        {
            Nvm.MacGroup2.IsCertPortOn = mibSet->Param.IsCertPortOn;
            break;
        }
        case MIB_REJOIN_0_CYCLE:
        {
            uint32_t cycleTime = 0;
            if( ( ConvertRejoinCycleTime( mibSet->Param.Rejoin0CycleInSec, &cycleTime ) == 
# 5001 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                          1 
# 5001 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                               ) &&
                ( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_OTAA ) )
            {
                Nvm.MacGroup2.Rejoin0CycleInSec = mibSet->Param.Rejoin0CycleInSec;
                MacCtx.Rejoin0CycleTime = cycleTime;
                do { if (UTIL_TIMER_IsRunning(&MacCtx.Rejoin0CycleTimer)) { UTIL_TIMER_Stop(&MacCtx.Rejoin0CycleTimer); } } while(0);
                do{ UTIL_TIMER_SetPeriod(&MacCtx.Rejoin0CycleTimer, MacCtx.Rejoin0CycleTime); } while(0);
                do { UTIL_TIMER_Start(&MacCtx.Rejoin0CycleTimer); } while(0);
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_REJOIN_1_CYCLE:
        {
            uint32_t cycleTime = 0;
            if( ( ConvertRejoinCycleTime( mibSet->Param.Rejoin1CycleInSec, &cycleTime ) == 
# 5019 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                          1 
# 5019 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                               ) &&
                ( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_OTAA ) )
            {
                Nvm.MacGroup2.Rejoin1CycleInSec = mibSet->Param.Rejoin1CycleInSec;
                MacCtx.Rejoin0CycleTime = cycleTime;
                do { if (UTIL_TIMER_IsRunning(&MacCtx.Rejoin1CycleTimer)) { UTIL_TIMER_Stop(&MacCtx.Rejoin1CycleTimer); } } while(0);
                do{ UTIL_TIMER_SetPeriod(&MacCtx.Rejoin1CycleTimer, MacCtx.Rejoin1CycleTime); } while(0);
                do { UTIL_TIMER_Start(&MacCtx.Rejoin1CycleTimer); } while(0);
            }
            else
            {
                status = LORAMAC_STATUS_PARAMETER_INVALID;
            }
            break;
        }
        case MIB_ADR_ACK_LIMIT:
        {
            Nvm.MacGroup2.MacParams.AdrAckLimit = mibSet->Param.AdrAckLimit;
            break;
        }
        case MIB_ADR_ACK_DELAY:
        {
            Nvm.MacGroup2.MacParams.AdrAckDelay = mibSet->Param.AdrAckDelay;
            break;
        }
        case MIB_ADR_ACK_DEFAULT_LIMIT:
        {
            Nvm.MacGroup2.MacParamsDefaults.AdrAckLimit = mibSet->Param.AdrAckLimit;
            break;
        }
        case MIB_ADR_ACK_DEFAULT_DELAY:
        {
            Nvm.MacGroup2.MacParamsDefaults.AdrAckDelay = mibSet->Param.AdrAckDelay;
            break;
        }
        case MIB_RSSI_FREE_THRESHOLD:
        {

            if( Nvm.MacGroup2.Region != LORAMAC_REGION_AS923 && Nvm.MacGroup2.Region != LORAMAC_REGION_KR920 )
            {
                status = LORAMAC_STATUS_ERROR;
            }
            else
            {
                Nvm.RegionGroup2.RssiFreeThreshold = mibSet->Param.RssiFreeThreshold;
            }



            break;
        }
        case MIB_CARRIER_SENSE_TIME:
        {

            if( Nvm.MacGroup2.Region != LORAMAC_REGION_AS923 && Nvm.MacGroup2.Region != LORAMAC_REGION_KR920 )
            {
                status = LORAMAC_STATUS_ERROR;
            }
            else
            {
                Nvm.RegionGroup2.CarrierSenseTime = mibSet->Param.CarrierSenseTime;
            }



            break;
        }
        default:
        {
            status = LoRaMacMibClassBSetRequestConfirm( mibSet );
            break;
        }
    }

    if( status == LORAMAC_STATUS_OK )
    {

        MacCtx.MacFlags.Bits.NvmHandle = 1;
    }
    return status;
}

LoRaMacStatus_t LoRaMacChannelAdd( uint8_t id, ChannelParams_t params )
{
    ChannelAddParams_t channelAdd;


    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        if( ( MacCtx.MacState & LORAMAC_TX_CONFIG ) != LORAMAC_TX_CONFIG )
        {
            return LORAMAC_STATUS_BUSY;
        }
    }

    channelAdd.NewChannel = &params;
    channelAdd.ChannelId = id;
    return RegionChannelAdd( Nvm.MacGroup2.Region, &channelAdd );
}

LoRaMacStatus_t LoRaMacChannelRemove( uint8_t id )
{
    ChannelRemoveParams_t channelRemove;

    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        if( ( MacCtx.MacState & LORAMAC_TX_CONFIG ) != LORAMAC_TX_CONFIG )
        {
            return LORAMAC_STATUS_BUSY;
        }
    }

    channelRemove.ChannelId = id;

    if( RegionChannelsRemove( Nvm.MacGroup2.Region, &channelRemove ) == 
# 5133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                       0 
# 5133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                             )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacMcChannelSetup( McChannelParams_t *channel )
{
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( channel->GroupID >= 4 )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }

    Nvm.MacGroup2.MulticastChannelList[channel->GroupID].ChannelParams = *channel;
    MacCtx.MacFlags.Bits.NvmHandle = 1;

    if( channel->IsRemotelySetup == 
# 5155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   1 
# 5155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                        )
    {
        const KeyIdentifier_t mcKeys[4] = { MC_KEY_0, MC_KEY_1, MC_KEY_2, MC_KEY_3 };
        if( LoRaMacCryptoSetKey( mcKeys[channel->GroupID], channel->McKeys.McKeyE ) != LORAMAC_CRYPTO_SUCCESS )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }

        if( LoRaMacCryptoDeriveMcSessionKeyPair( channel->GroupID, channel->Address ) != LORAMAC_CRYPTO_SUCCESS )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
    }
    else
    {
        const KeyIdentifier_t mcAppSKeys[4] = { MC_APP_S_KEY_0, MC_APP_S_KEY_1, MC_APP_S_KEY_2, MC_APP_S_KEY_3 };
        const KeyIdentifier_t mcNwkSKeys[4] = { MC_NWK_S_KEY_0, MC_NWK_S_KEY_1, MC_NWK_S_KEY_2, MC_NWK_S_KEY_3 };
        if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( mcAppSKeys[channel->GroupID], channel->McKeys.Session.McAppSKey ) )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
        if( LORAMAC_CRYPTO_SUCCESS != LoRaMacCryptoSetKey( mcNwkSKeys[channel->GroupID], channel->McKeys.Session.McNwkSKey ) )
        {
            return LORAMAC_STATUS_CRYPTO_ERROR;
        }
    }


    *Nvm.MacGroup2.MulticastChannelList[channel->GroupID].DownLinkCounter = 0xFFFFFFFF;
    return LORAMAC_STATUS_OK;
}

LoRaMacStatus_t LoRaMacMcChannelDelete( AddressIdentifier_t groupID )
{
    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( ( groupID >= 4 ) ||
        ( Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.IsEnabled == 
# 5195 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                0 
# 5195 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                      ) )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }

    McChannelParams_t channel;


    memset1( ( uint8_t* )&channel, 0, sizeof( McChannelParams_t ) );

    Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams = channel;
    MacCtx.MacFlags.Bits.NvmHandle = 1;
    return LORAMAC_STATUS_OK;
}

uint8_t LoRaMacMcChannelGetGroupId( uint32_t mcAddress )
{
    for( uint8_t i = 0; i < 4; i++ )
    {
        if( mcAddress == Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.Address )
        {
            return i;
        }
    }
    return 0xFF;
}

LoRaMacStatus_t LoRaMacMcChannelSetupRxParams( AddressIdentifier_t groupID, McRxParams_t *rxParams, uint8_t *status )
{
   *status = 0x1C + ( groupID & 0x03 );

    if( ( MacCtx.MacState & LORAMAC_TX_RUNNING ) == LORAMAC_TX_RUNNING )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( ( rxParams->Class == CLASS_A ) || ( rxParams->Class > CLASS_C ) )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    if( ( groupID >= 4 ) ||
        ( Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.IsEnabled == 
# 5237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                0 
# 5237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                      ) )
    {
        return LORAMAC_STATUS_MC_GROUP_UNDEFINED;
    }
    *status &= 0x0F;

    VerifyParams_t verify;

    if( rxParams->Class == CLASS_B )
    {
        verify.DatarateParams.Datarate = rxParams->Params.ClassB.Datarate;
    }
    else
    {
        verify.DatarateParams.Datarate = rxParams->Params.ClassC.Datarate;
    }
    verify.DatarateParams.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;

    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_RX_DR ) == 
# 5255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                   1 
# 5255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                        )
    {
        *status &= 0xFB;
    }


    if( rxParams->Class == CLASS_B )
    {
        verify.Frequency = rxParams->Params.ClassB.Frequency;
    }
    else
    {
        verify.Frequency = rxParams->Params.ClassC.Frequency;
    }
    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_FREQUENCY ) == 
# 5269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                       1 
# 5269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                            )
    {
        *status &= 0xF7;
    }

    if( *status == ( groupID & 0x03 ) )
    {

        Nvm.MacGroup2.MulticastChannelList[groupID].ChannelParams.RxParams = *rxParams;
        MacCtx.MacFlags.Bits.NvmHandle = 1;
    }
    else
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }

    MibRequestConfirm_t mibReq;
    mibReq.Type = MIB_DEVICE_CLASS;
    LoRaMacMibGetRequestConfirm(&mibReq);
    if(mibReq.Param.Class == CLASS_C)
    {
        mibReq.Type = MIB_NETWORK_ACTIVATION;
        LoRaMacMibGetRequestConfirm(&mibReq);
        if(mibReq.Param.NetworkActivation!=ACTIVATION_TYPE_NONE)
        {
            for( int8_t i = 0; i < 4; i++ )
            {
                if( Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.IsEnabled == 
# 5296 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                    1 
# 5296 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                         )

                {
                    Nvm.MacGroup2.MacParams.RxCChannel.Frequency = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.Params.ClassC.Frequency;
                    Nvm.MacGroup2.MacParams.RxCChannel.Datarate = Nvm.MacGroup2.MulticastChannelList[i].ChannelParams.RxParams.Params.ClassC.Datarate;

                    MacCtx.RxWindowCConfig.Channel = MacCtx.Channel;
                    MacCtx.RxWindowCConfig.Frequency = Nvm.MacGroup2.MacParams.RxCChannel.Frequency;
                    MacCtx.RxWindowCConfig.DownlinkDwellTime = Nvm.MacGroup2.MacParams.DownlinkDwellTime;
                    MacCtx.RxWindowCConfig.RxSlot = RX_SLOT_WIN_CLASS_C_MULTICAST;
                    MacCtx.RxWindowCConfig.RxContinuous = 
# 5306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                         1
# 5306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                             ;


                    MacCtx.NodeAckRequested = 
# 5309 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                             0
# 5309 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  ;

                    Radio.Sleep( );

                    OpenContinuousRxCWindow( );
                    break;
                }

            }
        }
    }

    if( rxParams->Class == CLASS_B )
    {

        LoRaMacClassBSetMulticastPeriodicity( &Nvm.MacGroup2.MulticastChannelList[groupID] );
    }
    return LORAMAC_STATUS_OK;
}




static void OnAbpJoinPendingTimerEvent( void *context )
{
    MacCtx.MacState &= ~LORAMAC_ABP_JOIN_PENDING;
    MacCtx.MacFlags.Bits.MacDone = 1;
    OnMacProcessNotify( );
}




static void AbpJoinPendingStart( void )
{
    static 
# 5344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
          _Bool 
# 5344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
               initialized = 
# 5344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                             0
# 5344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                  ;

    if( initialized == 
# 5346 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      0 
# 5346 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                            )
    {
        initialized = 
# 5348 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                     1
# 5348 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                         ;
        do { UTIL_TIMER_Create( &MacCtx.AbpJoinPendingTimer, ( ( uint32_t )~0 ), UTIL_TIMER_ONESHOT, OnAbpJoinPendingTimerEvent, 
# 5349 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
       ((void *)0)
# 5349 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
       ); } while(0);
    }

    MacCtx.MacState |= LORAMAC_ABP_JOIN_PENDING;

    do { if (UTIL_TIMER_IsRunning(&MacCtx.AbpJoinPendingTimer)) { UTIL_TIMER_Stop(&MacCtx.AbpJoinPendingTimer); } } while(0);
    do{ UTIL_TIMER_SetPeriod(&MacCtx.AbpJoinPendingTimer, 10); } while(0);
    do { UTIL_TIMER_Start(&MacCtx.AbpJoinPendingTimer); } while(0);
}

LoRaMacStatus_t LoRaMacMlmeRequest( MlmeReq_t* mlmeRequest )
{
    LoRaMacStatus_t status = LORAMAC_STATUS_SERVICE_UNKNOWN;
    MlmeConfirmQueue_t queueElement;
    
# 5363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 5363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        isAbpJoinPending = 
# 5363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           0
# 5363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                ;
    uint8_t macCmdPayload[2] = { 0x00, 0x00 };

    if( mlmeRequest == 
# 5366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 5366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                           )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }


    mlmeRequest->ReqReturn.DutyCycleWaitTime = 0;

    if( LoRaMacIsBusy( ) == 
# 5374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           1 
# 5374 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                )
    {
        return LORAMAC_STATUS_BUSY;
    }
    if( LoRaMacConfirmQueueIsFull( ) == 
# 5378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                       1 
# 5378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                            )
    {
        return LORAMAC_STATUS_BUSY;
    }

    if( LoRaMacConfirmQueueGetCnt( ) == 0 )
    {
        memset1( ( uint8_t* ) &MacCtx.MlmeConfirm, 0, sizeof( MacCtx.MlmeConfirm ) );
    }
    MacCtx.MlmeConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;

    MacCtx.MacFlags.Bits.MlmeReq = 1;
    queueElement.Request = mlmeRequest->Type;
    queueElement.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;
    queueElement.RestrictCommonReadyToHandle = 
# 5392 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              0
# 5392 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                   ;
    queueElement.ReadyToHandle = 
# 5393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                0
# 5393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                     ;

    switch( mlmeRequest->Type )
    {
        case MLME_JOIN:
        {
            if( ( MacCtx.MacState & LORAMAC_TX_DELAYED ) == LORAMAC_TX_DELAYED )
            {
                return LORAMAC_STATUS_BUSY;
            }

            if( mlmeRequest->Req.Join.NetworkActivation == ACTIVATION_TYPE_OTAA )
            {
                ResetMacParameters( 
# 5406 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                   0 
# 5406 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                         );

                Nvm.MacGroup1.ChannelsDatarate = RegionAlternateDr( Nvm.MacGroup2.Region, mlmeRequest->Req.Join.Datarate, ALTERNATE_DR );

                queueElement.Status = LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL;

                status = SendReJoinReq( JOIN_REQ );

                if( status != LORAMAC_STATUS_OK )
                {

                    Nvm.MacGroup1.ChannelsDatarate = RegionAlternateDr( Nvm.MacGroup2.Region, mlmeRequest->Req.Join.Datarate, ALTERNATE_DR_RESTORE );
                }
            }
            else if( mlmeRequest->Req.Join.NetworkActivation == ACTIVATION_TYPE_ABP )
            {

                Nvm.MacGroup2.ChannelsDatarateChangedLinkAdrReq = 
# 5423 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                 0
# 5423 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                      ;


                InitDefaultsParams_t params;
                params.Type = INIT_TYPE_ACTIVATE_DEFAULT_CHANNELS;
                RegionInitDefaults( Nvm.MacGroup2.Region, &params );

                Nvm.MacGroup2.NetworkActivation = mlmeRequest->Req.Join.NetworkActivation;
                queueElement.Status = LORAMAC_EVENT_INFO_STATUS_OK;
                queueElement.ReadyToHandle = 
# 5432 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                            1
# 5432 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                ;
                isAbpJoinPending = 
# 5433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                  1
# 5433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                      ;
                status = LORAMAC_STATUS_OK;
            }
            break;
        }
        case MLME_REJOIN_0:
        {
            MacCtx.MacFlags.Bits.MlmeReq = 1;
            MacCtx.MlmeConfirm.MlmeRequest = mlmeRequest->Type;

            status = SendReJoinReq( REJOIN_REQ_0 );

            break;
        }
        case MLME_REJOIN_1:
        {
            MacCtx.MacFlags.Bits.MlmeReq = 1;
            MacCtx.MlmeConfirm.MlmeRequest = mlmeRequest->Type;

            status = SendReJoinReq( REJOIN_REQ_1 );

            break;
        }
        case MLME_REJOIN_2:
        {
            MacCtx.MacFlags.Bits.MlmeReq = 1;
            MacCtx.MlmeConfirm.MlmeRequest = mlmeRequest->Type;

            status = SendReJoinReq( REJOIN_REQ_2 );

            break;
        }
        case MLME_LINK_CHECK:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_LINK_CHECK_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_TXCW:
        {
            status = SetTxContinuousWave( mlmeRequest->Req.TxCw.Timeout, mlmeRequest->Req.TxCw.Frequency, mlmeRequest->Req.TxCw.Power );
            break;
        }
        case MLME_DEVICE_TIME:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_DEVICE_TIME_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_PING_SLOT_INFO:
        {
            if( Nvm.MacGroup2.DeviceClass == CLASS_A )
            {
                uint8_t value = mlmeRequest->Req.PingSlotInfo.PingSlot.Value;


                LoRaMacClassBSetPingSlotInfo( mlmeRequest->Req.PingSlotInfo.PingSlot.Fields.Periodicity );
                macCmdPayload[0] = value;
                status = LORAMAC_STATUS_OK;
                if( LoRaMacCommandsAddCmd( MOTE_MAC_PING_SLOT_INFO_REQ, macCmdPayload, 1 ) != LORAMAC_COMMANDS_SUCCESS )
                {
                    status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
                }
            }
            break;
        }
        case MLME_BEACON_TIMING:
        {

            status = LORAMAC_STATUS_OK;
            if( LoRaMacCommandsAddCmd( MOTE_MAC_BEACON_TIMING_REQ, macCmdPayload, 0 ) != LORAMAC_COMMANDS_SUCCESS )
            {
                status = LORAMAC_STATUS_MAC_COMMAD_ERROR;
            }
            break;
        }
        case MLME_BEACON_ACQUISITION:
        {

            queueElement.RestrictCommonReadyToHandle = 
# 5520 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                      1
# 5520 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                          ;

            if( LoRaMacClassBIsAcquisitionInProgress( ) == 
# 5522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                          0 
# 5522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                )
            {

                LoRaMacClassBSetBeaconState( BEACON_STATE_ACQUISITION );
                LoRaMacClassBBeaconTimerEvent( 
# 5526 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              ((void *)0) 
# 5526 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                   );

                status = LORAMAC_STATUS_OK;
            }
            else
            {
                status = LORAMAC_STATUS_BUSY;
            }
            break;
        }
        default:
            break;
    }


    mlmeRequest->ReqReturn.DutyCycleWaitTime = MacCtx.DutyCycleWaitTime;

    if( status != LORAMAC_STATUS_OK )
    {
        if( LoRaMacConfirmQueueGetCnt( ) == 0 )
        {
            MacCtx.NodeAckRequested = 
# 5547 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                     0
# 5547 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          ;
            MacCtx.MacFlags.Bits.MlmeReq = 0;
        }
    }
    else
    {
        LoRaMacConfirmQueueAdd( &queueElement );
        if( isAbpJoinPending == 
# 5554 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                               1 
# 5554 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                    )
        {
            AbpJoinPendingStart( );
        }
    }
    return status;
}

LoRaMacStatus_t LoRaMacMcpsRequest( McpsReq_t* mcpsRequest )
{
    GetPhyParams_t getPhy;
    PhyParam_t phyParam;
    LoRaMacStatus_t status = LORAMAC_STATUS_SERVICE_UNKNOWN;
    LoRaMacHeader_t macHdr;
    VerifyParams_t verify;
    uint8_t fPort = 0;
    void* fBuffer;
    uint16_t fBufferSize;
    int8_t datarate = 0;
    
# 5573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
   _Bool 
# 5573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
        readyToSend = 
# 5573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      0
# 5573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                           ;

    if( mcpsRequest == 
# 5575 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      ((void *)0) 
# 5575 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                           )
    {
        return LORAMAC_STATUS_PARAMETER_INVALID;
    }


    mcpsRequest->ReqReturn.DutyCycleWaitTime = 0;

    if( LoRaMacIsBusy( ) == 
# 5583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           1 
# 5583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                )
    {
        return LORAMAC_STATUS_BUSY;
    }

    McpsReq_t request = *mcpsRequest;

    macHdr.Value = 0;
    memset1( ( uint8_t* ) &MacCtx.McpsConfirm, 0, sizeof( MacCtx.McpsConfirm ) );
    MacCtx.McpsConfirm.Status = LORAMAC_EVENT_INFO_STATUS_ERROR;



    if( ( Nvm.MacGroup2.NetworkActivation == ACTIVATION_TYPE_OTAA ) &&
        ( Nvm.MacGroup2.DeviceClass == CLASS_C ) &&
        ( Nvm.MacGroup2.DownlinkReceived == 
# 5598 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                           0 
# 5598 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                 ) &&
        ( request.Type == MCPS_UNCONFIRMED ) )
    {
        request.Type = MCPS_CONFIRMED;
    }

    switch( request.Type )
    {
        case MCPS_UNCONFIRMED:
        {
            readyToSend = 
# 5608 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                         1
# 5608 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;

            macHdr.Bits.MType = FRAME_TYPE_DATA_UNCONFIRMED_UP;
            fPort = request.Req.Unconfirmed.fPort;
            fBuffer = request.Req.Unconfirmed.fBuffer;
            fBufferSize = request.Req.Unconfirmed.fBufferSize;
            datarate = request.Req.Unconfirmed.Datarate;
            break;
        }
        case MCPS_CONFIRMED:
        {
            readyToSend = 
# 5619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                         1
# 5619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;

            macHdr.Bits.MType = FRAME_TYPE_DATA_CONFIRMED_UP;
            fPort = request.Req.Confirmed.fPort;
            fBuffer = request.Req.Confirmed.fBuffer;
            fBufferSize = request.Req.Confirmed.fBufferSize;
            datarate = request.Req.Confirmed.Datarate;
            break;
        }
        case MCPS_PROPRIETARY:
        {
            readyToSend = 
# 5630 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                         1
# 5630 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                             ;

            macHdr.Bits.MType = FRAME_TYPE_PROPRIETARY;
            fBuffer = request.Req.Proprietary.fBuffer;
            fBufferSize = request.Req.Proprietary.fBufferSize;
            datarate = request.Req.Proprietary.Datarate;
            break;
        }
        default:
            break;
    }



    getPhy.Attribute = PHY_MIN_TX_DR;
    getPhy.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;
    phyParam = RegionGetPhyParam( Nvm.MacGroup2.Region, &getPhy );


    datarate = ( ( ( datarate ) > ( ( int8_t )phyParam.Value ) ) ? ( datarate ) : ( ( int8_t )phyParam.Value ) );


    if( CheckForMinimumAbpDatarate( Nvm.MacGroup2.AdrCtrlOn, Nvm.MacGroup2.NetworkActivation,
                                    Nvm.MacGroup2.ChannelsDatarateChangedLinkAdrReq ) == 
# 5653 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                        1 
# 5653 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                             )
    {
        datarate = ( int8_t )phyParam.Value;
    }

    if( readyToSend == 
# 5658 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                      1 
# 5658 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                           )
    {
        if( ( Nvm.MacGroup2.AdrCtrlOn == 
# 5660 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                        0 
# 5660 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ) ||
            ( CheckForMinimumAbpDatarate( Nvm.MacGroup2.AdrCtrlOn, Nvm.MacGroup2.NetworkActivation,
                                          Nvm.MacGroup2.ChannelsDatarateChangedLinkAdrReq ) == 
# 5662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                                              1 
# 5662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                                   ) )
        {
            verify.DatarateParams.Datarate = datarate;
            verify.DatarateParams.UplinkDwellTime = Nvm.MacGroup2.MacParams.UplinkDwellTime;

            if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_TX_DR ) == 
# 5667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                           1 
# 5667 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                                )
            {
                Nvm.MacGroup1.ChannelsDatarate = verify.DatarateParams.Datarate;
            }
            else
            {
                return LORAMAC_STATUS_PARAMETER_INVALID;
            }
        }


        LoRaMacHandleResponseTimeout( 8000,
                                      MacCtx.ResponseTimeoutStartTime );

        status = Send( &macHdr, fPort, fBuffer, fBufferSize );
        if( status == LORAMAC_STATUS_OK )
        {
            MacCtx.McpsConfirm.McpsRequest = request.Type;
            MacCtx.MacFlags.Bits.McpsReq = 1;
        }
        else
        {
            MacCtx.NodeAckRequested = 
# 5689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                     0
# 5689 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                          ;
        }
    }


    mcpsRequest->ReqReturn.DutyCycleWaitTime = MacCtx.DutyCycleWaitTime;

    return status;
}

static 
# 5699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
      _Bool 
# 5699 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
           ConvertRejoinCycleTime( uint32_t rejoinCycleTime, uint32_t* timeInMiliSec )
{

    if( rejoinCycleTime <= 4294967 )
    {
        *timeInMiliSec = rejoinCycleTime * 1000;
        return 
# 5705 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              1
# 5705 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                  ;
    }
    else
    {
        return 
# 5709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
              0
# 5709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                   ;
    }
}

static void OnRejoin0CycleTimerEvent( void* context )
{
    do { if (UTIL_TIMER_IsRunning(&MacCtx.Rejoin0CycleTimer)) { UTIL_TIMER_Stop(&MacCtx.Rejoin0CycleTimer); } } while(0);
    ConvertRejoinCycleTime( Nvm.MacGroup2.Rejoin0CycleInSec, &MacCtx.Rejoin0CycleTime );

    OnMacProcessNotify( );

    Nvm.MacGroup2.IsRejoin0RequestQueued = 
# 5720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          1
# 5720 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;

    do{ UTIL_TIMER_SetPeriod(&MacCtx.Rejoin0CycleTimer, MacCtx.Rejoin0CycleTime); } while(0);
    do { UTIL_TIMER_Start(&MacCtx.Rejoin0CycleTimer); } while(0);
}

static void OnRejoin1CycleTimerEvent( void* context )
{
    do { if (UTIL_TIMER_IsRunning(&MacCtx.Rejoin1CycleTimer)) { UTIL_TIMER_Stop(&MacCtx.Rejoin1CycleTimer); } } while(0);
    ConvertRejoinCycleTime( Nvm.MacGroup2.Rejoin1CycleInSec, &MacCtx.Rejoin1CycleTime );

    OnMacProcessNotify( );

    Nvm.MacGroup2.IsRejoin1RequestQueued = 
# 5733 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                          1
# 5733 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                              ;

    do{ UTIL_TIMER_SetPeriod(&MacCtx.Rejoin1CycleTimer, MacCtx.Rejoin1CycleTime); } while(0);
    do { UTIL_TIMER_Start(&MacCtx.Rejoin1CycleTimer); } while(0);
}

static void OnForceRejoinReqCycleTimerEvent( void* context )
{
    Nvm.MacGroup1.ForceRejoinRetriesCounter++;
    if( ( Nvm.MacGroup2.ForceRejoinType == 0 ) || ( Nvm.MacGroup2.ForceRejoinType == 1 ) )
    {
        Nvm.MacGroup2.IsRejoin0RequestQueued = 
# 5744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              1
# 5744 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  ;
    }
    else
    {
        Nvm.MacGroup2.IsRejoin2RequestQueued = 
# 5748 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                              1
# 5748 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                  ;
    }

    if( Nvm.MacGroup1.ForceRejoinRetriesCounter >= Nvm.MacGroup2.ForceRejoinMaxRetries )
    {
        do { if (UTIL_TIMER_IsRunning(&MacCtx.ForceRejoinReqCycleTimer)) { UTIL_TIMER_Stop(&MacCtx.ForceRejoinReqCycleTimer); } } while(0);
        Nvm.MacGroup1.ForceRejoinRetriesCounter = 0;
    }
    else
    {
        do{ UTIL_TIMER_SetPeriod(&MacCtx.ForceRejoinReqCycleTimer, MacCtx.ForceRejonCycleTime); } while(0);
        do { UTIL_TIMER_Start(&MacCtx.ForceRejoinReqCycleTimer); } while(0);
    }

    OnMacProcessNotify( );
}

void LoRaMacTestSetDutyCycleOn( 
# 5765 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                               _Bool 
# 5765 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                    enable )
{
    VerifyParams_t verify;

    verify.DutyCycle = enable;

    if( RegionVerify( Nvm.MacGroup2.Region, &verify, PHY_DUTY_CYCLE ) == 
# 5771 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                                                                        1 
# 5771 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                                                             )
    {
        Nvm.MacGroup2.DutyCycleOn = enable;

        MacCtx.MacFlags.Bits.NvmHandle = 1;
    }
}

LoRaMacStatus_t LoRaMacDeInitialization( void )
{

    if ( LoRaMacStop( ) == LORAMAC_STATUS_OK )
    {

        do { if (UTIL_TIMER_IsRunning(&MacCtx.TxDelayedTimer)) { UTIL_TIMER_Stop(&MacCtx.TxDelayedTimer); } } while(0);
        do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer1)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer1); } } while(0);
        do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer2)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer2); } } while(0);


        LoRaMacClassBHaltBeaconing( );


        ResetMacParameters( 
# 5793 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c" 3 4
                           0 
# 5793 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.7.0/src/mac/LoRaMac.c"
                                 );


        Radio.Sleep( );


        return LORAMAC_STATUS_OK;
    }
    else
    {
        return LORAMAC_STATUS_BUSY;
    }
}

void LoRaMacReset( void )
{

    MacCtx.MacState &= ~LORAMAC_TX_RUNNING;
    MacCtx.MacFlags.Bits.MacDone = 1;


    do { if (UTIL_TIMER_IsRunning(&MacCtx.TxDelayedTimer)) { UTIL_TIMER_Stop(&MacCtx.TxDelayedTimer); } } while(0);
    do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer1)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer1); } } while(0);
    do { if (UTIL_TIMER_IsRunning(&MacCtx.RxWindowTimer2)) { UTIL_TIMER_Stop(&MacCtx.RxWindowTimer2); } } while(0);


    MacCtx.ChannelsNbTransCounter = Nvm.MacGroup2.MacParams.ChannelsNbTrans;


    OnMacProcessNotify( );
}
