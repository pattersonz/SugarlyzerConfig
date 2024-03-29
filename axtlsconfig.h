#define KGEN_x25 ((!defined KGENMACRO_CONFIG_INTEGER_16BIT))
#define KGEN_x23 ((!defined KGENMACRO_CONFIG_INTEGER_32BIT))
#define KGEN_x28 ((!defined KGENMACRO_CONFIG_INTEGER_8BIT))
#define KGEN_x34 ((!defined KGENMACRO_CONFIG_BIGINT_MONTGOMERY))
#define KGEN_x32 ((!defined KGENMACRO_CONFIG_BIGINT_CLASSICAL))
#define KGEN_x37 ((!defined KGENMACRO_CONFIG_BIGINT_BARRETT))
#define KGEN_x43 ((!defined KGENMACRO_CONFIG_SSL_PROT_MEDIUM))
#define KGEN_x41 ((!defined KGENMACRO_CONFIG_SSL_PROT_LOW))
#define KGEN_x46 ((!defined KGENMACRO_CONFIG_SSL_PROT_HIGH))
#define KGEN_x52 ((!defined KGENMACRO_CONFIG_SSL_CERT_VERIFICATION))
#define KGEN_x50 ((!defined KGENMACRO_CONFIG_SSL_SERVER_ONLY))
#define KGEN_x55 ((!defined KGENMACRO_CONFIG_SSL_ENABLE_CLIENT))
#define KGEN_x58 ((!defined KGENMACRO_CONFIG_SSL_FULL_MODE))
#define KGEN_x61 ((!defined KGENMACRO_CONFIG_SSL_SKELETON_MODE))
#define KGEN_x72 ((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0))
#define KGEN_x70 ((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0))
#define KGEN_x75 ((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0))
#define KGEN_x81 ((!defined KGENMACRO_CONFIG_PLATFORM_CYGWIN))
#define KGEN_x79 ((!defined KGENMACRO_CONFIG_PLATFORM_LINUX))
#define KGEN_x84 ((!defined KGENMACRO_CONFIG_PLATFORM_WIN32))
#define KGEN_x90 ((defined KGENMACRO_CONFIG_INTEGER_32BIT||defined KGENMACRO_CONFIG_INTEGER_16BIT||defined KGENMACRO_CONFIG_INTEGER_8BIT))
#define KGEN_x96 (((KGEN_x61)||(!(KGEN_x90))))
#define KGEN_x95 ((defined KGENMACRO_CONFIG_INTEGER_32BIT||defined KGENMACRO_CONFIG_INTEGER_16BIT||defined KGENMACRO_CONFIG_INTEGER_8BIT||defined KGENMACRO_CONFIG_SSL_SKELETON_MODE))
#define KGEN_x91 ((defined KGENMACRO_CONFIG_BIGINT_CLASSICAL||defined KGENMACRO_CONFIG_BIGINT_MONTGOMERY||defined KGENMACRO_CONFIG_BIGINT_BARRETT))
#define KGEN_x101 (((KGEN_x61)||(!(KGEN_x91))))
#define KGEN_x100 ((defined KGENMACRO_CONFIG_BIGINT_CLASSICAL||defined KGENMACRO_CONFIG_BIGINT_MONTGOMERY||defined KGENMACRO_CONFIG_BIGINT_BARRETT||defined KGENMACRO_CONFIG_SSL_SKELETON_MODE))
#define KGEN_x93 ((defined KGENMACRO_CONFIG_SSL_PROT_LOW||defined KGENMACRO_CONFIG_SSL_PROT_MEDIUM||defined KGENMACRO_CONFIG_SSL_PROT_HIGH))
#define KGEN_x106 (((KGEN_x61)||(!(KGEN_x93))))
#define KGEN_x105 ((defined KGENMACRO_CONFIG_SSL_PROT_LOW||defined KGENMACRO_CONFIG_SSL_PROT_MEDIUM||defined KGENMACRO_CONFIG_SSL_PROT_HIGH||defined KGENMACRO_CONFIG_SSL_SKELETON_MODE))
#define KGEN_x103 ((defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0||defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0||defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0))
#define KGEN_x112 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32||(!(KGEN_x103))))
#define KGEN_x111 ((defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0||defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0||defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0||(KGEN_x84)))
#define KGEN_x118 ((!defined KGENMACRO_CONFIG_AXHTTPD))
#define KGEN_x119 ((defined KGENMACRO_CONFIG_HTTP_SESSION_CACHE_SIZE||(KGEN_x118)))
#define KGEN_x117 (((!defined KGENMACRO_CONFIG_HTTP_SESSION_CACHE_SIZE)||defined KGENMACRO_CONFIG_AXHTTPD))
#define KGEN_x124 ((defined KGENMACRO_CONFIG_HTTP_WEBROOT||(KGEN_x118)))
#define KGEN_x123 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_WEBROOT)))
#define KGEN_x129 (((KGEN_x61)&&defined KGENMACRO_CONFIG_BIGINT_KARATSUBA))
#define KGEN_x139 ((!(KGEN_x129)))
#define KGEN_x140 ((defined KGENMACRO_MUL_KARATSUBA_THRESH||(KGEN_x139)))
#define KGEN_x135 (((!defined KGENMACRO_MUL_KARATSUBA_THRESH)||(KGEN_x129)))
#define KGEN_x162 ((defined KGENMACRO_CONFIG_HTTP_VERBOSE||(!(defined KGENMACRO_CONFIG_AXHTTPD&&defined KGENMACRO_CONFIG_SSL_FULL_MODE))))
#define KGEN_x134 ((defined KGENMACRO_CONFIG_AXHTTPD&&defined KGENMACRO_CONFIG_SSL_FULL_MODE))
#define KGEN_x131 ((!defined KGENMACRO_CONFIG_HTTP_VERBOSE))
#define KGEN_x133 ((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&defined KGENMACRO_CONFIG_HTTP_HAS_CGI))
#define KGEN_x146 ((!(KGEN_x133)))
#define KGEN_x144 (((!defined KGENMACRO_CONFIG_HTTP_ENABLE_LUA)||(KGEN_x133)))
#define KGEN_x174 ((defined KGENMACRO_CONFIG_SAMPLES||(!defined KGENMACRO_CONFIG_C_SAMPLES)))
#define KGEN_x152 ((!defined KGENMACRO_CONFIG_SAMPLES))
#define KGEN_x181 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_HAS_AUTHORIZATION)))
#define KGEN_x196 (((KGEN_x84)||(!defined KGENMACRO_CONFIG_USE_DEV_URANDOM)))
#define KGEN_x200 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32&&(KGEN_x196)&&(defined KGENMACRO_CONFIG_PLATFORM_WIN32||defined KGENMACRO_CONFIG_USE_DEV_URANDOM)))
#define KGEN_x206 ((defined KGENMACRO_CONFIG_BINDINGS&&(defined KGENMACRO_CONFIG_BINDINGS||(!defined KGENMACRO_CONFIG_VBNET_BINDINGS))))
#define KGEN_x212 ((defined KGENMACRO_CONFIG_BINDINGS&&(defined KGENMACRO_CONFIG_BINDINGS||(!defined KGENMACRO_CONFIG_CSHARP_BINDINGS))))
#define KGEN_x225 (((KGEN_x118)||defined KGENMACRO_CONFIG_HTTP_PORT))
#define KGEN_x221 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_PORT)))
#define KGEN_x215 ((!defined KGENMACRO_CONFIG_SSL_TEST))
#define KGEN_x169 ((!defined KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT))
#define KGEN_x209 ((defined KGENMACRO_CONFIG_SSL_FULL_MODE&&(KGEN_x169)))
#define KGEN_x232 (((!defined KGENMACRO_CONFIG_SSL_SERVER_ONLY)&&(KGEN_x61)))
#define KGEN_x239 ((!(KGEN_x232)))
#define KGEN_x240 ((defined KGENMACRO_CONFIG_X509_MAX_CA_CERTS||(KGEN_x239)))
#define KGEN_x238 (((!defined KGENMACRO_CONFIG_X509_MAX_CA_CERTS)||(KGEN_x232)))
#define KGEN_x236 ((defined KGENMACRO_CONFIG_AXHTTPD&&defined KGENMACRO_CONFIG_HTTP_ENABLE_DIFFERENT_USER))
#define KGEN_x250 ((!(KGEN_x236)))
#define KGEN_x251 ((defined KGENMACRO_CONFIG_HTTP_USER||(KGEN_x250)))
#define KGEN_x249 (((!defined KGENMACRO_CONFIG_HTTP_USER)||(KGEN_x236)))
#define KGEN_x237 ((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_CSHARP_BINDINGS))
#define KGEN_x253 ((!(KGEN_x237)))
#define KGEN_x247 (((!defined KGENMACRO_CONFIG_CSHARP_SAMPLES)||(KGEN_x237)))
#define KGEN_x261 ((!defined KGENMACRO_CONFIG_SSL_USE_DEFAULT_KEY))
#define KGEN_x262 (((KGEN_x169)&&(KGEN_x261)&&(KGEN_x61)))
#define KGEN_x276 ((!(KGEN_x262)))
#define KGEN_x277 ((defined KGENMACRO_CONFIG_SSL_X509_CERT_LOCATION||(KGEN_x276)))
#define KGEN_x272 (((!defined KGENMACRO_CONFIG_SSL_X509_CERT_LOCATION)||(KGEN_x262)))
#define KGEN_x263 ((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_VBNET_BINDINGS))
#define KGEN_x279 ((!(KGEN_x263)))
#define KGEN_x270 (((!defined KGENMACRO_CONFIG_VBNET_SAMPLES)||(KGEN_x263)))
#define KGEN_x295 (((KGEN_x169)||defined KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_NAME))
#define KGEN_x292 ((defined KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT||(!defined KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_NAME)))
#define KGEN_x322 (((KGEN_x61)&&defined KGENMACRO_CONFIG_SSL_FULL_MODE&&(!((KGEN_x61)&&(!defined KGENMACRO_CONFIG_SSL_FULL_MODE)))))
#define KGEN_x324 ((!(KGEN_x322)))
#define KGEN_x327 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&((!defined KGENMACRO_CONFIG_SSL_HAS_PEM)||(KGEN_x322))&&(defined KGENMACRO_CONFIG_SSL_HAS_PEM||(KGEN_x324))))
#define KGEN_x281 (((KGEN_x261)&&(KGEN_x61)))
#define KGEN_x313 (((!(KGEN_x281))||defined KGENMACRO_CONFIG_SSL_PRIVATE_KEY_LOCATION))
#define KGEN_x312 (((!defined KGENMACRO_CONFIG_SSL_PRIVATE_KEY_LOCATION)||(KGEN_x281)))
#define KGEN_x194 ((!defined KGENMACRO_CONFIG_JAVA_BINDINGS))
#define KGEN_x319 (((KGEN_x194)||defined KGENMACRO_CONFIG_JAVA_HOME))
#define KGEN_x318 ((defined KGENMACRO_CONFIG_JAVA_BINDINGS||(!defined KGENMACRO_CONFIG_JAVA_HOME)))
#define KGEN_x307 ((!defined KGENMACRO_CONFIG_BIGINT_KARATSUBA))
#define KGEN_x351 ((!((!defined KGENMACRO_CONFIG_SSL_SKELETON_MODE)&&(!defined KGENMACRO_CONFIG_DEBUG))))
#define KGEN_x352 (((KGEN_x61)&&defined KGENMACRO_CONFIG_DEBUG&&(KGEN_x351)))
#define KGEN_x357 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&((!defined KGENMACRO_CONFIG_BIGINT_CHECK_ON)||(KGEN_x352))&&(defined KGENMACRO_CONFIG_BIGINT_CHECK_ON||(!(KGEN_x352)))))
#define KGEN_x337 (((!defined KGENMACRO_CONFIG_BIGINT_CRT)||(KGEN_x61)))
#define KGEN_x364 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&(KGEN_x337)&&(defined KGENMACRO_CONFIG_SSL_SKELETON_MODE||defined KGENMACRO_CONFIG_BIGINT_CRT)))
#define KGEN_x361 (((KGEN_x146)||defined KGENMACRO_CONFIG_HTTP_CGI_EXTENSIONS))
#define KGEN_x360 (((!defined KGENMACRO_CONFIG_HTTP_CGI_EXTENSIONS)||(KGEN_x133)))
#define KGEN_x116 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32&&defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0))
#define KGEN_x372 (((!(KGEN_x116))||defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0_BASE))
#define KGEN_x371 (((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0_BASE)||(KGEN_x116)))
#define KGEN_x370 ((!defined KGENMACRO_CONFIG_HTTP_BUILD_LUA))
#define KGEN_x359 ((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&defined KGENMACRO_CONFIG_HTTP_ENABLE_LUA))
#define KGEN_x376 ((!(KGEN_x359)))
#define KGEN_x391 ((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&defined KGENMACRO_CONFIG_HTTP_ENABLE_LUA&&((KGEN_x370)||(KGEN_x359))))
#define KGEN_x395 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32||defined KGENMACRO_PREFIX))
#define KGEN_x394 (((KGEN_x84)||(!defined KGENMACRO_PREFIX)))
#define KGEN_x390 ((!defined KGENMACRO_CONFIG_WIN32_USE_CRYPTO_LIB))
#define KGEN_x413 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32&&(defined KGENMACRO_CONFIG_PLATFORM_WIN32||(KGEN_x390))))
#define KGEN_x408 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE||defined KGENMACRO_CONFIG_SSL_EXPIRY_TIME))
#define KGEN_x407 (((!defined KGENMACRO_CONFIG_SSL_EXPIRY_TIME)||(KGEN_x61)))
#define KGEN_x425 (((KGEN_x61)||(KGEN_x261)))
#define KGEN_x429 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&(KGEN_x425)&&(defined KGENMACRO_CONFIG_SSL_SKELETON_MODE||defined KGENMACRO_CONFIG_SSL_USE_DEFAULT_KEY)))
#define KGEN_x420 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32&&defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0))
#define KGEN_x432 ((!(KGEN_x420)))
#define KGEN_x436 ((defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0_BASE||(KGEN_x432)))
#define KGEN_x431 (((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0_BASE)||(KGEN_x420)))
#define KGEN_x422 ((!defined KGENMACRO_CONFIG_HTTP_ENABLE_DIFFERENT_USER))
#define KGEN_x421 ((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)))
#define KGEN_x428 ((!(KGEN_x421)))
#define KGEN_x447 (((KGEN_x118)||defined KGENMACRO_CONFIG_HTTP_TIMEOUT))
#define KGEN_x446 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_TIMEOUT)))
#define KGEN_x443 (((!defined KGENMACRO_CONFIG_SSL_USE_DEFAULT_KEY)&&defined KGENMACRO_CONFIG_SSL_HAS_PEM))
#define KGEN_x459 ((!(KGEN_x443)))
#define KGEN_x460 ((defined KGENMACRO_CONFIG_SSL_PRIVATE_KEY_PASSWORD||(KGEN_x459)))
#define KGEN_x458 (((!defined KGENMACRO_CONFIG_SSL_PRIVATE_KEY_PASSWORD)||(KGEN_x443)))
#define KGEN_x463 (((!defined KGENMACRO_CONFIG_BIGINT_SLIDING_WINDOW)||(KGEN_x61)))
#define KGEN_x484 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&(KGEN_x463)&&(defined KGENMACRO_CONFIG_SSL_SKELETON_MODE||defined KGENMACRO_CONFIG_BIGINT_SLIDING_WINDOW)))
#define KGEN_x494 ((defined KGENMACRO_CONFIG_BINDINGS&&(defined KGENMACRO_CONFIG_BINDINGS||(!defined KGENMACRO_CONFIG_PERL_BINDINGS))))
#define KGEN_x469 ((!defined KGENMACRO_CONFIG_PERFORMANCE_TESTING))
#define KGEN_x500 ((defined KGENMACRO_CONFIG_SSL_CERT_VERIFICATION&&(defined KGENMACRO_CONFIG_SSL_CERT_VERIFICATION||(KGEN_x469))))
#define KGEN_x490 (((KGEN_x146)||defined KGENMACRO_CONFIG_HTTP_CGI_LAUNCHER))
#define KGEN_x486 (((!defined KGENMACRO_CONFIG_HTTP_CGI_LAUNCHER)||(KGEN_x133)))
#define KGEN_x505 ((defined KGENMACRO_CONFIG_DOT_NET_FRAMEWORK_BASE||(!(defined KGENMACRO_CONFIG_CSHARP_BINDINGS||defined KGENMACRO_CONFIG_VBNET_BINDINGS))))
#define KGEN_x503 ((defined KGENMACRO_CONFIG_VBNET_BINDINGS||defined KGENMACRO_CONFIG_CSHARP_BINDINGS||(!defined KGENMACRO_CONFIG_DOT_NET_FRAMEWORK_BASE)))
#define KGEN_x483 ((!defined KGENMACRO_CONFIG_HTTP_HAS_IPV6))
#define KGEN_x405 (((KGEN_x61)&&defined KGENMACRO_CONFIG_BIGINT_KARATSUBA&&defined KGENMACRO_CONFIG_BIGINT_SQUARE))
#define KGEN_x513 (((!(KGEN_x405))||defined KGENMACRO_SQU_KARATSUBA_THRESH))
#define KGEN_x512 (((!defined KGENMACRO_SQU_KARATSUBA_THRESH)||(KGEN_x405)))
#define KGEN_x511 ((!defined KGENMACRO_CONFIG_LUA_BINDINGS))
#define KGEN_x538 (((!(defined KGENMACRO_CONFIG_BINDINGS&&(!defined KGENMACRO_CONFIG_PLATFORM_WIN32)))&&(KGEN_x511)))
#define KGEN_x509 ((defined KGENMACRO_CONFIG_BINDINGS&&(KGEN_x84)))
#define KGEN_x544 ((defined KGENMACRO_CONFIG_AXHTTPD&&(defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_STATIC_BUILD))))
#define KGEN_x540 (((!(KGEN_x359))||defined KGENMACRO_CONFIG_HTTP_LUA_PREFIX))
#define KGEN_x536 (((!defined KGENMACRO_CONFIG_HTTP_LUA_PREFIX)||(KGEN_x359)))
#define KGEN_x532 (((!defined KGENMACRO_CONFIG_BIGINT_SQUARE)||(KGEN_x61)))
#define KGEN_x560 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&(KGEN_x532)&&(defined KGENMACRO_CONFIG_SSL_SKELETON_MODE||defined KGENMACRO_CONFIG_BIGINT_SQUARE)))
#define KGEN_x542 ((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_PERL_BINDINGS))
#define KGEN_x554 ((!(KGEN_x542)))
#define KGEN_x552 (((!defined KGENMACRO_CONFIG_PERL_SAMPLES)||(KGEN_x542)))
#define KGEN_x555 (((!defined KGENMACRO_CONFIG_HTTP_HAS_CGI)||(KGEN_x421)))
#define KGEN_x584 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_DIRECTORIES)))
#define KGEN_x587 (((KGEN_x511)||defined KGENMACRO_CONFIG_LUA_CORE))
#define KGEN_x583 ((defined KGENMACRO_CONFIG_LUA_BINDINGS||(!defined KGENMACRO_CONFIG_LUA_CORE)))
#define KGEN_x602 (((KGEN_x118)||defined KGENMACRO_CONFIG_HTTP_HTTPS_PORT))
#define KGEN_x601 ((defined KGENMACRO_CONFIG_AXHTTPD||(!defined KGENMACRO_CONFIG_HTTP_HTTPS_PORT)))
#define KGEN_x256 ((defined KGENMACRO_CONFIG_PERL_BINDINGS&&defined KGENMACRO_CONFIG_PLATFORM_WIN32))
#define KGEN_x259 ((!(KGEN_x256)))
#define KGEN_x610 (((KGEN_x259)||defined KGENMACRO_CONFIG_PERL_LIB))
#define KGEN_x609 (((!defined KGENMACRO_CONFIG_PERL_LIB)||(KGEN_x256)))
#define KGEN_x615 (((!(defined KGENMACRO_CONFIG_PERL_BINDINGS&&defined KGENMACRO_CONFIG_PLATFORM_WIN32))||defined KGENMACRO_CONFIG_PERL_CORE))
#define KGEN_x614 (((!defined KGENMACRO_CONFIG_PERL_CORE)||(KGEN_x256)))
#define KGEN_x600 ((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_LUA_BINDINGS))
#define KGEN_x617 ((!(KGEN_x600)))
#define KGEN_x612 (((!defined KGENMACRO_CONFIG_LUA_SAMPLES)||(KGEN_x600)))
#define KGEN_x619 ((!defined KGENMACRO_CONFIG_HTTP_IS_DAEMON))
#define KGEN_x638 (((!(defined KGENMACRO_CONFIG_AXHTTPD&&(!defined KGENMACRO_CONFIG_PLATFORM_WIN32)))&&(KGEN_x619)))
#define KGEN_x633 (((KGEN_x169)||defined KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME))
#define KGEN_x630 ((defined KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT||(!defined KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME)))
#define KGEN_x332 ((!defined KGENMACRO_CONFIG_DEBUG))
#define KGEN_x623 (((KGEN_x84)&&(KGEN_x332)))
#define KGEN_x635 ((!(KGEN_x623)))
#define KGEN_x626 (((!defined KGENMACRO_CONFIG_STRIP_UNWANTED_SECTIONS)||(KGEN_x623)))
#define KGEN_x646 (((!(defined KGENMACRO_CONFIG_PLATFORM_WIN32&&defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0))||defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0_BASE))
#define KGEN_x388 ((defined KGENMACRO_CONFIG_PLATFORM_WIN32&&defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0))
#define KGEN_x645 (((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_7_0_BASE)||(KGEN_x388)))
#define KGEN_x666 ((defined KGENMACRO_CONFIG_BINDINGS&&(defined KGENMACRO_CONFIG_BINDINGS||(!defined KGENMACRO_CONFIG_JAVA_BINDINGS))))
#define KGEN_x664 (((!defined KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT)||defined KGENMACRO_CONFIG_SSL_X509_COMMON_NAME))
#define KGEN_x663 ((defined KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT||(!defined KGENMACRO_CONFIG_SSL_X509_COMMON_NAME)))
#define KGEN_x696 ((defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&((!defined KGENMACRO_CONFIG_SSL_USE_PKCS12)||(KGEN_x322))&&((!(KGEN_x322))||defined KGENMACRO_CONFIG_SSL_USE_PKCS12)))
#define KGEN_x657 ((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_JAVA_BINDINGS))
#define KGEN_x678 ((!(KGEN_x657)))
#define KGEN_x673 (((!defined KGENMACRO_CONFIG_JAVA_SAMPLES)||(KGEN_x657)))
//#if ((((KGEN_x95)&&(KGEN_x96))) && (((KGEN_x100)&&(KGEN_x101))) && (((KGEN_x105)&&(KGEN_x106))) && ((defined KGENMACRO_CONFIG_SSL_SERVER_ONLY||defined KGENMACRO_CONFIG_SSL_CERT_VERIFICATION||defined KGENMACRO_CONFIG_SSL_ENABLE_CLIENT||defined KGENMACRO_CONFIG_SSL_FULL_MODE||defined KGENMACRO_CONFIG_SSL_SKELETON_MODE)) && (((KGEN_x111)&&(KGEN_x112))) && ((defined KGENMACRO_CONFIG_PLATFORM_LINUX||defined KGENMACRO_CONFIG_PLATFORM_CYGWIN||defined KGENMACRO_CONFIG_PLATFORM_WIN32)))
#if (((KGEN_x446)&&(KGEN_x447)))
#ifdef KGENMACRO_CONFIG_HTTP_TIMEOUT
#define CONFIG_HTTP_TIMEOUT 300
#else
#define CONFIG_HTTP_TIMEOUT 0
#endif
#endif
#if (((KGEN_x292)&&(KGEN_x295)))
#ifdef KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_NAME
#define CONFIG_SSL_X509_ORGANIZATION_NAME "X"
#else
#define CONFIG_SSL_X509_ORGANIZATION_NAME ""
#endif
#endif
#if (((KGEN_x50)||(KGEN_x52))) && (((KGEN_x50)||(KGEN_x55))) && (((KGEN_x50)||(KGEN_x58))) && (((KGEN_x50)||(KGEN_x61)))
#ifdef KGENMACRO_CONFIG_SSL_SERVER_ONLY
#define CONFIG_SSL_SERVER_ONLY 1
#else
#undef CONFIG_SSL_SERVER_ONLY
#endif
#endif
#if (((KGEN_x318)&&(KGEN_x319)))
#ifdef KGENMACRO_CONFIG_JAVA_HOME
#define CONFIG_JAVA_HOME "/usr/lib/jvm/java-7-openjdk-amd64"
#else
#define CONFIG_JAVA_HOME ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SSL_FULL_MODE&&(KGEN_x169)&&((KGEN_x215)||(KGEN_x209)))||((!(KGEN_x209))&&(KGEN_x215))))
#ifdef KGENMACRO_CONFIG_SSL_TEST
#define CONFIG_SSL_TEST 1
#else
#undef CONFIG_SSL_TEST
#endif
#endif
#if (((KGEN_x41)||(KGEN_x43))) && (((KGEN_x41)||(KGEN_x46)))
#ifdef KGENMACRO_CONFIG_SSL_PROT_LOW
#define CONFIG_SSL_PROT_LOW 1
#else
#undef CONFIG_SSL_PROT_LOW
#endif
#endif
#if (((KGEN_x503)&&(KGEN_x505)))
#ifdef KGENMACRO_CONFIG_DOT_NET_FRAMEWORK_BASE
#define CONFIG_DOT_NET_FRAMEWORK_BASE "c:\\WINDOWS\\Microsoft.NET\\Framework\\v2.0.50727"
#else
#define CONFIG_DOT_NET_FRAMEWORK_BASE ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x584))||((KGEN_x118)&&(KGEN_x584)&&((KGEN_x118)||defined KGENMACRO_CONFIG_HTTP_DIRECTORIES))))
#ifdef KGENMACRO_CONFIG_HTTP_DIRECTORIES
#define CONFIG_HTTP_DIRECTORIES 1
#else
#undef CONFIG_HTTP_DIRECTORIES
#endif
#endif
#if (((KGEN_x614)&&(KGEN_x615)))
#ifdef KGENMACRO_CONFIG_PERL_CORE
#define CONFIG_PERL_CORE "c:\\perl\\lib\\CORE"
#else
#define CONFIG_PERL_CORE ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_VBNET_BINDINGS&&(KGEN_x270))||((KGEN_x279)&&(KGEN_x270)&&(defined KGENMACRO_CONFIG_VBNET_SAMPLES||(KGEN_x279)))))
#ifdef KGENMACRO_CONFIG_VBNET_SAMPLES
#define CONFIG_VBNET_SAMPLES 1
#else
#undef CONFIG_VBNET_SAMPLES
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_CSHARP_BINDINGS&&(KGEN_x247))||((KGEN_x253)&&(KGEN_x247)&&(defined KGENMACRO_CONFIG_CSHARP_SAMPLES||(KGEN_x253)))))
#ifdef KGENMACRO_CONFIG_CSHARP_SAMPLES
#define CONFIG_CSHARP_SAMPLES 1
#else
#undef CONFIG_CSHARP_SAMPLES
#endif
#endif
#if (((KGEN_x407)&&(KGEN_x408)))
#ifdef KGENMACRO_CONFIG_SSL_EXPIRY_TIME
#define CONFIG_SSL_EXPIRY_TIME 24
#else
#define CONFIG_SSL_EXPIRY_TIME 0
#endif
#endif
#if (((KGEN_x494)||((!defined KGENMACRO_CONFIG_BINDINGS)&&(!defined KGENMACRO_CONFIG_PERL_BINDINGS))))
#ifdef KGENMACRO_CONFIG_PERL_BINDINGS
#define CONFIG_PERL_BINDINGS 1
#else
#undef CONFIG_PERL_BINDINGS
#endif
#endif
#ifdef KGENMACRO_CONFIG_PLATFORM_WIN32
#define CONFIG_PLATFORM_WIN32 1
#else
#undef CONFIG_PLATFORM_WIN32
#endif
#if (defined KGENMACRO_CONFIG_SSL_MAX_CERTS)
#ifdef KGENMACRO_CONFIG_SSL_MAX_CERTS
#define CONFIG_SSL_MAX_CERTS 3
#else
#define CONFIG_SSL_MAX_CERTS 0
#endif
#endif
#if ((((KGEN_x84)&&((!defined KGENMACRO_CONFIG_AXTLSWRAP)||(KGEN_x84)))||(defined KGENMACRO_CONFIG_PLATFORM_WIN32&&(!defined KGENMACRO_CONFIG_AXTLSWRAP))))
#ifdef KGENMACRO_CONFIG_AXTLSWRAP
#define CONFIG_AXTLSWRAP 1
#else
#undef CONFIG_AXTLSWRAP
#endif
#endif
#if (defined KGENMACRO_CONFIG_EXTRA_CFLAGS_OPTIONS)
#ifdef KGENMACRO_CONFIG_EXTRA_CFLAGS_OPTIONS
#define CONFIG_EXTRA_CFLAGS_OPTIONS "X"
#else
#define CONFIG_EXTRA_CFLAGS_OPTIONS ""
#endif
#endif
#ifdef KGENMACRO_CONFIG_BIGINT_BARRETT
#define CONFIG_BIGINT_BARRETT 1
#else
#undef CONFIG_BIGINT_BARRETT
#endif
#ifdef KGENMACRO_UNAME_RELEASE
#define UNAME_RELEASE "5.4.0-135-generic"
#else
#define UNAME_RELEASE ""
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&(KGEN_x174))||((KGEN_x152)&&(KGEN_x174)&&(defined KGENMACRO_CONFIG_C_SAMPLES||(KGEN_x152)))))
#ifdef KGENMACRO_CONFIG_C_SAMPLES
#define CONFIG_C_SAMPLES 1
#else
#undef CONFIG_C_SAMPLES
#endif
#endif
#if (defined KGENMACRO_HAVE_DOT_CONFIG)
#ifdef KGENMACRO_HAVE_DOT_CONFIG
#define HAVE_DOT_CONFIG 1
#else
#undef HAVE_DOT_CONFIG
#endif
#endif
#if (((KGEN_x32)||(KGEN_x34))) && (((KGEN_x32)||(KGEN_x37)))
#ifdef KGENMACRO_CONFIG_BIGINT_CLASSICAL
#define CONFIG_BIGINT_CLASSICAL 1
#else
#undef CONFIG_BIGINT_CLASSICAL
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_JAVA_BINDINGS&&(KGEN_x673))||((KGEN_x678)&&(KGEN_x673)&&(defined KGENMACRO_CONFIG_JAVA_SAMPLES||(KGEN_x678)))))
#ifdef KGENMACRO_CONFIG_JAVA_SAMPLES
#define CONFIG_JAVA_SAMPLES 1
#else
#undef CONFIG_JAVA_SAMPLES
#endif
#endif
#if (((KGEN_x135)&&(KGEN_x140)))
#ifdef KGENMACRO_MUL_KARATSUBA_THRESH
#define MUL_KARATSUBA_THRESH 20
#else
#define MUL_KARATSUBA_THRESH 0
#endif
#endif
#ifdef KGENMACRO_CONFIG_DEBUG
#define CONFIG_DEBUG 1
#else
#undef CONFIG_DEBUG
#endif
#if (((KGEN_x371)&&(KGEN_x372)))
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_10_0_BASE
#define CONFIG_VISUAL_STUDIO_10_0_BASE "c:\\Program Files\\Microsoft Visual Studio 10.0"
#else
#define CONFIG_VISUAL_STUDIO_10_0_BASE ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_LUA_BINDINGS&&(KGEN_x612))||((KGEN_x617)&&(KGEN_x612)&&(defined KGENMACRO_CONFIG_LUA_SAMPLES||(KGEN_x617)))))
#ifdef KGENMACRO_CONFIG_LUA_SAMPLES
#define CONFIG_LUA_SAMPLES 1
#else
#undef CONFIG_LUA_SAMPLES
#endif
#endif
#if (((!defined KGENMACRO_CONFIG_SSL_PROT_MEDIUM)||(!defined KGENMACRO_CONFIG_SSL_PROT_HIGH)))
#ifdef KGENMACRO_CONFIG_SSL_PROT_MEDIUM
#define CONFIG_SSL_PROT_MEDIUM 1
#else
#undef CONFIG_SSL_PROT_MEDIUM
#endif
#endif
#ifdef KGENMACRO_CONFIG_AXHTTPD
#define CONFIG_AXHTTPD 1
#else
#undef CONFIG_AXHTTPD
#endif
#ifdef KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT
#define CONFIG_SSL_GENERATE_X509_CERT 1
#else
#undef CONFIG_SSL_GENERATE_X509_CERT
#endif
#if ((((KGEN_x61)&&((KGEN_x61)||(!defined KGENMACRO_CONFIG_SSL_USE_PKCS12)))||(KGEN_x696)))
#ifdef KGENMACRO_CONFIG_SSL_USE_PKCS12
#define CONFIG_SSL_USE_PKCS12 1
#else
#undef CONFIG_SSL_USE_PKCS12
#endif
#endif
#if (((KGEN_x238)&&(KGEN_x240)))
#ifdef KGENMACRO_CONFIG_X509_MAX_CA_CERTS
#define CONFIG_X509_MAX_CA_CERTS 150
#else
#define CONFIG_X509_MAX_CA_CERTS 0
#endif
#endif
#if (((KGEN_x431)&&(KGEN_x436)))
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_8_0_BASE
#define CONFIG_VISUAL_STUDIO_8_0_BASE "c:\\Program Files\\Microsoft Visual Studio 8"
#else
#define CONFIG_VISUAL_STUDIO_8_0_BASE ""
#endif
#endif
#if (((KGEN_x394)&&(KGEN_x395)))
#ifdef KGENMACRO_PREFIX
#define PREFIX "/usr/local"
#else
#define PREFIX ""
#endif
#endif
#if (((!defined KGENMACRO_CONFIG_VISUAL_STUDIO_8_0)||(!defined KGENMACRO_CONFIG_VISUAL_STUDIO_10_0)))
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_8_0
#define CONFIG_VISUAL_STUDIO_8_0 1
#else
#undef CONFIG_VISUAL_STUDIO_8_0
#endif
#endif
#if (((KGEN_x272)&&(KGEN_x277)))
#ifdef KGENMACRO_CONFIG_SSL_X509_CERT_LOCATION
#define CONFIG_SSL_X509_CERT_LOCATION "X"
#else
#define CONFIG_SSL_X509_CERT_LOCATION ""
#endif
#endif
#if (((KGEN_x206)||((!defined KGENMACRO_CONFIG_BINDINGS)&&(!defined KGENMACRO_CONFIG_VBNET_BINDINGS))))
#ifdef KGENMACRO_CONFIG_VBNET_BINDINGS
#define CONFIG_VBNET_BINDINGS 1
#else
#undef CONFIG_VBNET_BINDINGS
#endif
#endif
#if (((KGEN_x58)||(KGEN_x61)))
#ifdef KGENMACRO_CONFIG_SSL_FULL_MODE
#define CONFIG_SSL_FULL_MODE 1
#else
#undef CONFIG_SSL_FULL_MODE
#endif
#endif
#if (((!defined KGENMACRO_CONFIG_BIGINT_MONTGOMERY)||(!defined KGENMACRO_CONFIG_BIGINT_BARRETT)))
#ifdef KGENMACRO_CONFIG_BIGINT_MONTGOMERY
#define CONFIG_BIGINT_MONTGOMERY 1
#else
#undef CONFIG_BIGINT_MONTGOMERY
#endif
#endif
#if (((KGEN_x221)&&(KGEN_x225)))
#ifdef KGENMACRO_CONFIG_HTTP_PORT
#define CONFIG_HTTP_PORT 80
#else
#define CONFIG_HTTP_PORT 0
#endif
#endif
#if (((KGEN_x601)&&(KGEN_x602)))
#ifdef KGENMACRO_CONFIG_HTTP_HTTPS_PORT
#define CONFIG_HTTP_HTTPS_PORT 443
#else
#define CONFIG_HTTP_HTTPS_PORT 0
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_CTX_MUTEXING
#define CONFIG_SSL_CTX_MUTEXING 1
#else
#undef CONFIG_SSL_CTX_MUTEXING
#endif
#if (((KGEN_x212)||((!defined KGENMACRO_CONFIG_BINDINGS)&&(!defined KGENMACRO_CONFIG_CSHARP_BINDINGS))))
#ifdef KGENMACRO_CONFIG_CSHARP_BINDINGS
#define CONFIG_CSHARP_BINDINGS 1
#else
#undef CONFIG_CSHARP_BINDINGS
#endif
#endif
#if (((KGEN_x536)&&(KGEN_x540)))
#ifdef KGENMACRO_CONFIG_HTTP_LUA_PREFIX
#define CONFIG_HTTP_LUA_PREFIX "/usr"
#else
#define CONFIG_HTTP_LUA_PREFIX ""
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_SKELETON_MODE
#define CONFIG_SSL_SKELETON_MODE 1
#else
#undef CONFIG_SSL_SKELETON_MODE
#endif
#if ((((KGEN_x61)&&(KGEN_x532))||(KGEN_x560)))
#ifdef KGENMACRO_CONFIG_BIGINT_SQUARE
#define CONFIG_BIGINT_SQUARE 1
#else
#undef CONFIG_BIGINT_SQUARE
#endif
#endif
#if ((((KGEN_x84)&&(KGEN_x196))||(KGEN_x200)))
#ifdef KGENMACRO_CONFIG_USE_DEV_URANDOM
#define CONFIG_USE_DEV_URANDOM 1
#else
#undef CONFIG_USE_DEV_URANDOM
#endif
#endif
#if (((defined KGENMACRO_CONFIG_SAMPLES&&defined KGENMACRO_CONFIG_PERL_BINDINGS&&(KGEN_x552))||((KGEN_x554)&&(KGEN_x552)&&(defined KGENMACRO_CONFIG_PERL_SAMPLES||(KGEN_x554)))))
#ifdef KGENMACRO_CONFIG_PERL_SAMPLES
#define CONFIG_PERL_SAMPLES 1
#else
#undef CONFIG_PERL_SAMPLES
#endif
#endif
#if (((KGEN_x391)||((KGEN_x376)&&(KGEN_x370))))
#ifdef KGENMACRO_CONFIG_HTTP_BUILD_LUA
#define CONFIG_HTTP_BUILD_LUA 1
#else
#undef CONFIG_HTTP_BUILD_LUA
#endif
#endif
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_10_0
#define CONFIG_VISUAL_STUDIO_10_0 1
#else
#undef CONFIG_VISUAL_STUDIO_10_0
#endif
#if (((KGEN_x500)||((!defined KGENMACRO_CONFIG_SSL_CERT_VERIFICATION)&&(KGEN_x469))))
#ifdef KGENMACRO_CONFIG_PERFORMANCE_TESTING
#define CONFIG_PERFORMANCE_TESTING 1
#else
#undef CONFIG_PERFORMANCE_TESTING
#endif
#endif
#if (((KGEN_x512)&&(KGEN_x513)))
#ifdef KGENMACRO_SQU_KARATSUBA_THRESH
#define SQU_KARATSUBA_THRESH 40
#else
#define SQU_KARATSUBA_THRESH 0
#endif
#endif
#if (defined KGENMACRO_CONFIG_EXTRA_LDFLAGS_OPTIONS)
#ifdef KGENMACRO_CONFIG_EXTRA_LDFLAGS_OPTIONS
#define CONFIG_EXTRA_LDFLAGS_OPTIONS "X"
#else
#define CONFIG_EXTRA_LDFLAGS_OPTIONS ""
#endif
#endif
#if ((((KGEN_x84)&&(KGEN_x332)&&(KGEN_x626))||((KGEN_x635)&&(KGEN_x626)&&(defined KGENMACRO_CONFIG_STRIP_UNWANTED_SECTIONS||(KGEN_x635)))))
#ifdef KGENMACRO_CONFIG_STRIP_UNWANTED_SECTIONS
#define CONFIG_STRIP_UNWANTED_SECTIONS 1
#else
#undef CONFIG_STRIP_UNWANTED_SECTIONS
#endif
#endif
#if (((KGEN_x55)||(KGEN_x58))) && (((KGEN_x55)||(KGEN_x61)))
#ifdef KGENMACRO_CONFIG_SSL_ENABLE_CLIENT
#define CONFIG_SSL_ENABLE_CLIENT 1
#else
#undef CONFIG_SSL_ENABLE_CLIENT
#endif
#endif
#if ((((KGEN_x61)&&(KGEN_x425))||(KGEN_x429)))
#ifdef KGENMACRO_CONFIG_SSL_USE_DEFAULT_KEY
#define CONFIG_SSL_USE_DEFAULT_KEY 1
#else
#undef CONFIG_SSL_USE_DEFAULT_KEY
#endif
#endif
#if (((KGEN_x52)||(KGEN_x55))) && (((KGEN_x52)||(KGEN_x58))) && (((KGEN_x52)||(KGEN_x61)))
#ifdef KGENMACRO_CONFIG_SSL_CERT_VERIFICATION
#define CONFIG_SSL_CERT_VERIFICATION 1
#else
#undef CONFIG_SSL_CERT_VERIFICATION
#endif
#endif
#if (((KGEN_x123)&&(KGEN_x124)))
#ifdef KGENMACRO_CONFIG_HTTP_WEBROOT
#define CONFIG_HTTP_WEBROOT "..\\www"
#else
#define CONFIG_HTTP_WEBROOT ""
#endif
#endif
#if (((KGEN_x544)||((!defined KGENMACRO_CONFIG_AXHTTPD)&&(!defined KGENMACRO_CONFIG_HTTP_STATIC_BUILD))))
#ifdef KGENMACRO_CONFIG_HTTP_STATIC_BUILD
#define CONFIG_HTTP_STATIC_BUILD 1
#else
#undef CONFIG_HTTP_STATIC_BUILD
#endif
#endif
#if (((KGEN_x117)&&(KGEN_x119)))
#ifdef KGENMACRO_CONFIG_HTTP_SESSION_CACHE_SIZE
#define CONFIG_HTTP_SESSION_CACHE_SIZE 5
#else
#define CONFIG_HTTP_SESSION_CACHE_SIZE 0
#endif
#endif
#if (((KGEN_x360)&&(KGEN_x361)))
#ifdef KGENMACRO_CONFIG_HTTP_CGI_EXTENSIONS
#define CONFIG_HTTP_CGI_EXTENSIONS ".lua,.lp,.php"
#else
#define CONFIG_HTTP_CGI_EXTENSIONS ""
#endif
#endif
#ifdef KGENMACRO_CONFIG_OPENSSL_COMPATIBLE
#define CONFIG_OPENSSL_COMPATIBLE 1
#else
#undef CONFIG_OPENSSL_COMPATIBLE
#endif
#if ((((KGEN_x61)&&(KGEN_x463))||(KGEN_x484)))
#ifdef KGENMACRO_CONFIG_BIGINT_SLIDING_WINDOW
#define CONFIG_BIGINT_SLIDING_WINDOW 1
#else
#undef CONFIG_BIGINT_SLIDING_WINDOW
#endif
#endif
#if (((KGEN_x70)||(KGEN_x72))) && (((KGEN_x70)||(KGEN_x75)))
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_7_0
#define CONFIG_VISUAL_STUDIO_7_0 1
#else
#undef CONFIG_VISUAL_STUDIO_7_0
#endif
#endif
#if ((((KGEN_x61)&&((KGEN_x307)||(KGEN_x61)))||(defined KGENMACRO_CONFIG_SSL_SKELETON_MODE&&(KGEN_x307))))
#ifdef KGENMACRO_CONFIG_BIGINT_KARATSUBA
#define CONFIG_BIGINT_KARATSUBA 1
#else
#undef CONFIG_BIGINT_KARATSUBA
#endif
#endif
#if ((((KGEN_x61)&&(KGEN_x337))||(KGEN_x364)))
#ifdef KGENMACRO_CONFIG_BIGINT_CRT
#define CONFIG_BIGINT_CRT 1
#else
#undef CONFIG_BIGINT_CRT
#endif
#endif
#if (((KGEN_x249)&&(KGEN_x251)))
#ifdef KGENMACRO_CONFIG_HTTP_USER
#define CONFIG_HTTP_USER "nobody"
#else
#define CONFIG_HTTP_USER ""
#endif
#endif
#if (((KGEN_x583)&&(KGEN_x587)))
#ifdef KGENMACRO_CONFIG_LUA_CORE
#define CONFIG_LUA_CORE "/usr/local"
#else
#define CONFIG_LUA_CORE ""
#endif
#endif
#if (((KGEN_x645)&&(KGEN_x646)))
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_7_0_BASE
#define CONFIG_VISUAL_STUDIO_7_0_BASE "c:\\Program Files\\Microsoft Visual Studio .NET 2003"
#else
#define CONFIG_VISUAL_STUDIO_7_0_BASE ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&(KGEN_x555))||((KGEN_x428)&&(KGEN_x555)&&(defined KGENMACRO_CONFIG_HTTP_HAS_CGI||(KGEN_x428)))))
#ifdef KGENMACRO_CONFIG_HTTP_HAS_CGI
#define CONFIG_HTTP_HAS_CGI 1
#else
#undef CONFIG_HTTP_HAS_CGI
#endif
#endif
#if (((KGEN_x609)&&(KGEN_x610)))
#ifdef KGENMACRO_CONFIG_PERL_LIB
#define CONFIG_PERL_LIB "perl58.lib"
#else
#define CONFIG_PERL_LIB ""
#endif
#endif
#if (((KGEN_x23)||(KGEN_x25))) && (((KGEN_x23)||(KGEN_x28)))
#ifdef KGENMACRO_CONFIG_INTEGER_32BIT
#define CONFIG_INTEGER_32BIT 1
#else
#undef CONFIG_INTEGER_32BIT
#endif
#endif
#ifdef KGENMACRO_CONFIG_BINDINGS
#define CONFIG_BINDINGS 1
#else
#undef CONFIG_BINDINGS
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&((KGEN_x483)||(KGEN_x421)))||((KGEN_x428)&&(KGEN_x483))))
#ifdef KGENMACRO_CONFIG_HTTP_HAS_IPV6
#define CONFIG_HTTP_HAS_IPV6 1
#else
#undef CONFIG_HTTP_HAS_IPV6
#endif
#endif
#if (((!defined KGENMACRO_CONFIG_PLATFORM_CYGWIN)||(KGEN_x84)))
#ifdef KGENMACRO_CONFIG_PLATFORM_CYGWIN
#define CONFIG_PLATFORM_CYGWIN 1
#else
#undef CONFIG_PLATFORM_CYGWIN
#endif
#endif
#if (((KGEN_x312)&&(KGEN_x313)))
#ifdef KGENMACRO_CONFIG_SSL_PRIVATE_KEY_LOCATION
#define CONFIG_SSL_PRIVATE_KEY_LOCATION "X"
#else
#define CONFIG_SSL_PRIVATE_KEY_LOCATION ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_BINDINGS&&(KGEN_x84)&&((KGEN_x511)||(KGEN_x509)))||(KGEN_x538)))
#ifdef KGENMACRO_CONFIG_LUA_BINDINGS
#define CONFIG_LUA_BINDINGS 1
#else
#undef CONFIG_LUA_BINDINGS
#endif
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x181))||((KGEN_x118)&&(KGEN_x181)&&((KGEN_x118)||defined KGENMACRO_CONFIG_HTTP_HAS_AUTHORIZATION))))
#ifdef KGENMACRO_CONFIG_HTTP_HAS_AUTHORIZATION
#define CONFIG_HTTP_HAS_AUTHORIZATION 1
#else
#undef CONFIG_HTTP_HAS_AUTHORIZATION
#endif
#endif
#ifdef KGENMACRO_CONFIG_INTEGER_8BIT
#define CONFIG_INTEGER_8BIT 1
#else
#undef CONFIG_INTEGER_8BIT
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&defined KGENMACRO_CONFIG_HTTP_HAS_CGI&&(KGEN_x144))||((KGEN_x146)&&(KGEN_x144)&&(defined KGENMACRO_CONFIG_HTTP_ENABLE_LUA||(KGEN_x146)))))
#ifdef KGENMACRO_CONFIG_HTTP_ENABLE_LUA
#define CONFIG_HTTP_ENABLE_LUA 1
#else
#undef CONFIG_HTTP_ENABLE_LUA
#endif
#endif
#if (((KGEN_x666)||((!defined KGENMACRO_CONFIG_BINDINGS)&&(!defined KGENMACRO_CONFIG_JAVA_BINDINGS))))
#ifdef KGENMACRO_CONFIG_JAVA_BINDINGS
#define CONFIG_JAVA_BINDINGS 1
#else
#undef CONFIG_JAVA_BINDINGS
#endif
#endif
#if (((KGEN_x630)&&(KGEN_x633)))
#ifdef KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME "X"
#else
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME ""
#endif
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&((KGEN_x422)||(KGEN_x421)))||((KGEN_x428)&&(KGEN_x422))))
#ifdef KGENMACRO_CONFIG_HTTP_ENABLE_DIFFERENT_USER
#define CONFIG_HTTP_ENABLE_DIFFERENT_USER 1
#else
#undef CONFIG_HTTP_ENABLE_DIFFERENT_USER
#endif
#endif
#if ((((KGEN_x61)&&((!defined KGENMACRO_CONFIG_BIGINT_CHECK_ON)||(KGEN_x61)))||(KGEN_x357)))
#ifdef KGENMACRO_CONFIG_BIGINT_CHECK_ON
#define CONFIG_BIGINT_CHECK_ON 1
#else
#undef CONFIG_BIGINT_CHECK_ON
#endif
#endif
#if (((!defined KGENMACRO_CONFIG_INTEGER_16BIT)||(!defined KGENMACRO_CONFIG_INTEGER_8BIT)))
#ifdef KGENMACRO_CONFIG_INTEGER_16BIT
#define CONFIG_INTEGER_16BIT 1
#else
#undef CONFIG_INTEGER_16BIT
#endif
#endif
#ifdef KGENMACRO_CONFIG_SAMPLES
#define CONFIG_SAMPLES 1
#else
#undef CONFIG_SAMPLES
#endif
#if (((KGEN_x663)&&(KGEN_x664)))
#ifdef KGENMACRO_CONFIG_SSL_X509_COMMON_NAME
#define CONFIG_SSL_X509_COMMON_NAME "X"
#else
#define CONFIG_SSL_X509_COMMON_NAME ""
#endif
#endif
#if (((KGEN_x79)||(KGEN_x81))) && (((KGEN_x79)||(KGEN_x84)))
#ifdef KGENMACRO_CONFIG_PLATFORM_LINUX
#define CONFIG_PLATFORM_LINUX 1
#else
#undef CONFIG_PLATFORM_LINUX
#endif
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(KGEN_x84)&&((KGEN_x619)||(KGEN_x421)))||(KGEN_x638)))
#ifdef KGENMACRO_CONFIG_HTTP_IS_DAEMON
#define CONFIG_HTTP_IS_DAEMON 1
#else
#undef CONFIG_HTTP_IS_DAEMON
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_PROT_HIGH
#define CONFIG_SSL_PROT_HIGH 1
#else
#undef CONFIG_SSL_PROT_HIGH
#endif
#if (((defined KGENMACRO_CONFIG_AXHTTPD&&(defined KGENMACRO_CONFIG_AXHTTPD||(KGEN_x131)))||((KGEN_x118)&&((KGEN_x131)||(KGEN_x134))&&(KGEN_x162))))
#ifdef KGENMACRO_CONFIG_HTTP_VERBOSE
#define CONFIG_HTTP_VERBOSE 1
#else
#undef CONFIG_HTTP_VERBOSE
#endif
#endif
#if ((((KGEN_x61)&&((!defined KGENMACRO_CONFIG_SSL_HAS_PEM)||(KGEN_x61)))||(KGEN_x327)))
#ifdef KGENMACRO_CONFIG_SSL_HAS_PEM
#define CONFIG_SSL_HAS_PEM 1
#else
#undef CONFIG_SSL_HAS_PEM
#endif
#endif
#if (((KGEN_x486)&&(KGEN_x490)))
#ifdef KGENMACRO_CONFIG_HTTP_CGI_LAUNCHER
#define CONFIG_HTTP_CGI_LAUNCHER "/usr/bin/cgi"
#else
#define CONFIG_HTTP_CGI_LAUNCHER ""
#endif
#endif
#if (((KGEN_x458)&&(KGEN_x460)))
#ifdef KGENMACRO_CONFIG_SSL_PRIVATE_KEY_PASSWORD
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD "X"
#else
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD ""
#endif
#endif
#if (((KGEN_x413)||((KGEN_x84)&&(KGEN_x390))))
#ifdef KGENMACRO_CONFIG_WIN32_USE_CRYPTO_LIB
#define CONFIG_WIN32_USE_CRYPTO_LIB 1
#else
#undef CONFIG_WIN32_USE_CRYPTO_LIB
#endif
#endif
//#else
//#error
//#endif
