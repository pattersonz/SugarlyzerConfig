#ifdef KGENMACRO_CONFIG_BINDINGS
#define CONFIG_BINDINGS 1
#else
#undef CONFIG_BINDINGS
#endif
#if defined CONFIG_BINDINGS
#ifdef KGENMACRO_CONFIG_JAVA_BINDINGS
#define CONFIG_JAVA_BINDINGS 1
#else
#undef CONFIG_JAVA_BINDINGS
#endif
#endif
#if KGENMACRO_CHOICE1 == 1
#ifdef KGENMACRO_CONFIG_SSL_SERVER_ONLY
#define CONFIG_SSL_SERVER_ONLY 1
#else
#undef CONFIG_SSL_SERVER_ONLY
#endif
#endif
#if KGENMACRO_CHOICE0 == 1
#ifdef KGENMACRO_CONFIG_SSL_PROT_LOW
#define CONFIG_SSL_PROT_LOW 1
#else
#undef CONFIG_SSL_PROT_LOW
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_MAX_CERTS
#define CONFIG_SSL_MAX_CERTS 3
#else
#define CONFIG_SSL_MAX_CERTS 0
#endif
#if KGENMACRO_CHOICE0 == 2
#ifdef KGENMACRO_CONFIG_SSL_PROT_MEDIUM
#define CONFIG_SSL_PROT_MEDIUM 1
#else
#undef CONFIG_SSL_PROT_MEDIUM
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_GENERATE_X509_CERT
#define CONFIG_SSL_GENERATE_X509_CERT 1
#else
#undef CONFIG_SSL_GENERATE_X509_CERT
#endif
#if KGENMACRO_CHOICE1 == 4
#ifdef KGENMACRO_CONFIG_SSL_FULL_MODE
#define CONFIG_SSL_FULL_MODE 1
#else
#undef CONFIG_SSL_FULL_MODE
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_CTX_MUTEXING
#define CONFIG_SSL_CTX_MUTEXING 1
#else
#undef CONFIG_SSL_CTX_MUTEXING
#endif
#if KGENMACRO_CHOICE1 == 5
#ifdef KGENMACRO_CONFIG_SSL_SKELETON_MODE
#define CONFIG_SSL_SKELETON_MODE 1
#else
#undef CONFIG_SSL_SKELETON_MODE
#endif
#endif
#if KGENMACRO_CHOICE1 == 3
#ifdef KGENMACRO_CONFIG_SSL_ENABLE_CLIENT
#define CONFIG_SSL_ENABLE_CLIENT 1
#else
#undef CONFIG_SSL_ENABLE_CLIENT
#endif
#endif
#if  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_USE_DEFAULT_KEY
#define CONFIG_SSL_USE_DEFAULT_KEY 1
#else
#undef CONFIG_SSL_USE_DEFAULT_KEY
#endif
#endif
#if KGENMACRO_CHOICE1 == 2
#ifdef KGENMACRO_CONFIG_SSL_CERT_VERIFICATION
#define CONFIG_SSL_CERT_VERIFICATION 1
#else
#undef CONFIG_SSL_CERT_VERIFICATION
#endif
#endif
#ifdef KGENMACRO_CONFIG_OPENSSL_COMPATIBLE
#define CONFIG_OPENSSL_COMPATIBLE 1
#else
#undef CONFIG_OPENSSL_COMPATIBLE
#endif
#if  !defined CONFIG_SSL_USE_DEFAULT_KEY &&  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_PRIVATE_KEY_LOCATION
#define CONFIG_SSL_PRIVATE_KEY_LOCATION "X"
#else
#define CONFIG_SSL_PRIVATE_KEY_LOCATION ""
#endif
#endif
#if defined CONFIG_SSL_GENERATE_X509_CERT
#ifdef KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME "X"
#else
#define CONFIG_SSL_X509_ORGANIZATION_UNIT_NAME ""
#endif
#endif
#if defined CONFIG_SSL_GENERATE_X509_CERT
#ifdef KGENMACRO_CONFIG_SSL_X509_COMMON_NAME
#define CONFIG_SSL_X509_COMMON_NAME "X"
#else
#define CONFIG_SSL_X509_COMMON_NAME ""
#endif
#endif
#if KGENMACRO_CHOICE0 == 3
#ifdef KGENMACRO_CONFIG_SSL_PROT_HIGH
#define CONFIG_SSL_PROT_HIGH 1
#else
#undef CONFIG_SSL_PROT_HIGH
#endif
#endif
#if  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_HAS_PEM
#define CONFIG_SSL_HAS_PEM 1
#else
#undef CONFIG_SSL_HAS_PEM
#endif
#endif
#ifdef KGENMACRO_CONFIG_SSL_ENABLE_V23_HANDSHAKE
#define CONFIG_SSL_ENABLE_V23_HANDSHAKE 1
#else
#undef CONFIG_SSL_ENABLE_V23_HANDSHAKE
#endif
#if  !defined CONFIG_SSL_USE_DEFAULT_KEY && defined CONFIG_SSL_HAS_PEM
#ifdef KGENMACRO_CONFIG_SSL_PRIVATE_KEY_PASSWORD
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD "X"
#else
#define CONFIG_SSL_PRIVATE_KEY_PASSWORD ""
#endif
#endif
#if KGENMACRO_CHOICE3 == 3
#ifdef KGENMACRO_CONFIG_PLATFORM_WIN32
#define CONFIG_PLATFORM_WIN32 1
#else
#undef CONFIG_PLATFORM_WIN32
#endif
#endif
#if  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_AXTLSWRAP
#define CONFIG_AXTLSWRAP 1
#else
#undef CONFIG_AXTLSWRAP
#endif
#endif
#ifdef KGENMACRO_CONFIG_EXTRA_CFLAGS_OPTIONS
#define CONFIG_EXTRA_CFLAGS_OPTIONS "X"
#else
#define CONFIG_EXTRA_CFLAGS_OPTIONS ""
#endif
#ifdef KGENMACRO_HAVE_DOT_CONFIG
#define HAVE_DOT_CONFIG 1
#else
#undef HAVE_DOT_CONFIG
#endif
#ifdef KGENMACRO_CONFIG_DEBUG
#define CONFIG_DEBUG 1
#else
#undef CONFIG_DEBUG
#endif
#ifdef KGENMACRO_CONFIG_AXHTTPD
#define CONFIG_AXHTTPD 1
#else
#undef CONFIG_AXHTTPD
#endif
#if  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_PREFIX
#define PREFIX "/usr/local"
#else
#define PREFIX ""
#endif
#endif
#if KGENMACRO_CHOICE2 == 2
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_8_0
#define CONFIG_VISUAL_STUDIO_8_0 1
#else
#undef CONFIG_VISUAL_STUDIO_8_0
#endif
#endif
#if KGENMACRO_CHOICE2 == 3
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_10_0
#define CONFIG_VISUAL_STUDIO_10_0 1
#else
#undef CONFIG_VISUAL_STUDIO_10_0
#endif
#endif
#ifdef KGENMACRO_CONFIG_EXTRA_LDFLAGS_OPTIONS
#define CONFIG_EXTRA_LDFLAGS_OPTIONS "X"
#else
#define CONFIG_EXTRA_LDFLAGS_OPTIONS ""
#endif
#if  !defined CONFIG_PLATFORM_WIN32 &&  !defined CONFIG_DEBUG
#ifdef KGENMACRO_CONFIG_STRIP_UNWANTED_SECTIONS
#define CONFIG_STRIP_UNWANTED_SECTIONS 1
#else
#undef CONFIG_STRIP_UNWANTED_SECTIONS
#endif
#endif
#if KGENMACRO_CHOICE2 == 1
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_7_0
#define CONFIG_VISUAL_STUDIO_7_0 1
#else
#undef CONFIG_VISUAL_STUDIO_7_0
#endif
#endif
#if defined CONFIG_PLATFORM_WIN32 && defined CONFIG_VISUAL_STUDIO_7_0
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_7_0_BASE
#define CONFIG_VISUAL_STUDIO_7_0_BASE "c:\Program Files\Microsoft Visual Studio .NET 2003"
#else
#define CONFIG_VISUAL_STUDIO_7_0_BASE ""
#endif
#endif
#if KGENMACRO_CHOICE3 == 2
#ifdef KGENMACRO_CONFIG_PLATFORM_CYGWIN
#define CONFIG_PLATFORM_CYGWIN 1
#else
#undef CONFIG_PLATFORM_CYGWIN
#endif
#endif
#if KGENMACRO_CHOICE3 == 1
#ifdef KGENMACRO_CONFIG_PLATFORM_LINUX
#define CONFIG_PLATFORM_LINUX 1
#else
#undef CONFIG_PLATFORM_LINUX
#endif
#endif
#ifdef KGENMACRO_CONFIG_SAMPLES
#define CONFIG_SAMPLES 1
#else
#undef CONFIG_SAMPLES
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_TIMEOUT
#define CONFIG_HTTP_TIMEOUT 300
#else
#define CONFIG_HTTP_TIMEOUT 0
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_DIRECTORIES
#define CONFIG_HTTP_DIRECTORIES 1
#else
#undef CONFIG_HTTP_DIRECTORIES
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_PORT
#define CONFIG_HTTP_PORT 80
#else
#define CONFIG_HTTP_PORT 0
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_HTTPS_PORT
#define CONFIG_HTTP_HTTPS_PORT 443
#else
#define CONFIG_HTTP_HTTPS_PORT 0
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_WEBROOT
#define CONFIG_HTTP_WEBROOT "..\www"
#else
#define CONFIG_HTTP_WEBROOT ""
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_STATIC_BUILD
#define CONFIG_HTTP_STATIC_BUILD 1
#else
#undef CONFIG_HTTP_STATIC_BUILD
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_SESSION_CACHE_SIZE
#define CONFIG_HTTP_SESSION_CACHE_SIZE 5
#else
#define CONFIG_HTTP_SESSION_CACHE_SIZE 0
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_HTTP_HAS_CGI
#define CONFIG_HTTP_HAS_CGI 1
#else
#undef CONFIG_HTTP_HAS_CGI
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_HTTP_HAS_IPV6
#define CONFIG_HTTP_HAS_IPV6 1
#else
#undef CONFIG_HTTP_HAS_IPV6
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_HAS_AUTHORIZATION
#define CONFIG_HTTP_HAS_AUTHORIZATION 1
#else
#undef CONFIG_HTTP_HAS_AUTHORIZATION
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32 && defined CONFIG_HTTP_HAS_CGI
#ifdef KGENMACRO_CONFIG_HTTP_ENABLE_LUA
#define CONFIG_HTTP_ENABLE_LUA 1
#else
#undef CONFIG_HTTP_ENABLE_LUA
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_HTTP_ENABLE_DIFFERENT_USER
#define CONFIG_HTTP_ENABLE_DIFFERENT_USER 1
#else
#undef CONFIG_HTTP_ENABLE_DIFFERENT_USER
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_HTTP_IS_DAEMON
#define CONFIG_HTTP_IS_DAEMON 1
#else
#undef CONFIG_HTTP_IS_DAEMON
#endif
#endif
#if defined CONFIG_AXHTTPD
#ifdef KGENMACRO_CONFIG_HTTP_VERBOSE
#define CONFIG_HTTP_VERBOSE 1
#else
#undef CONFIG_HTTP_VERBOSE
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32 && defined CONFIG_HTTP_HAS_CGI
#ifdef KGENMACRO_CONFIG_HTTP_CGI_LAUNCHER
#define CONFIG_HTTP_CGI_LAUNCHER "/usr/bin/cgi"
#else
#define CONFIG_HTTP_CGI_LAUNCHER ""
#endif
#endif
#if defined CONFIG_JAVA_BINDINGS
#ifdef KGENMACRO_CONFIG_JAVA_HOME
#define CONFIG_JAVA_HOME "/usr/local/jdk142"
#else
#define CONFIG_JAVA_HOME ""
#endif
#endif
#if defined CONFIG_BINDINGS
#ifdef KGENMACRO_CONFIG_PERL_BINDINGS
#define CONFIG_PERL_BINDINGS 1
#else
#undef CONFIG_PERL_BINDINGS
#endif
#endif
#if defined CONFIG_BINDINGS
#ifdef KGENMACRO_CONFIG_VBNET_BINDINGS
#define CONFIG_VBNET_BINDINGS 1
#else
#undef CONFIG_VBNET_BINDINGS
#endif
#endif
#if defined CONFIG_BINDINGS
#ifdef KGENMACRO_CONFIG_CSHARP_BINDINGS
#define CONFIG_CSHARP_BINDINGS 1
#else
#undef CONFIG_CSHARP_BINDINGS
#endif
#endif
#if defined CONFIG_PERL_BINDINGS && defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_PERL_LIB
#define CONFIG_PERL_LIB "perl58.lib"
#else
#define CONFIG_PERL_LIB ""
#endif
#endif
#if defined CONFIG_BINDINGS &&  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_LUA_BINDINGS
#define CONFIG_LUA_BINDINGS 1
#else
#undef CONFIG_LUA_BINDINGS
#endif
#endif
#if defined CONFIG_SSL_GENERATE_X509_CERT
#ifdef KGENMACRO_CONFIG_SSL_X509_ORGANIZATION_NAME
#define CONFIG_SSL_X509_ORGANIZATION_NAME "X"
#else
#define CONFIG_SSL_X509_ORGANIZATION_NAME ""
#endif
#endif
#if defined CONFIG_SSL_FULL_MODE &&  !defined CONFIG_SSL_GENERATE_X509_CERT
#ifdef KGENMACRO_CONFIG_SSL_TEST
#define CONFIG_SSL_TEST 1
#else
#undef CONFIG_SSL_TEST
#endif
#endif
#if  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_EXPIRY_TIME
#define CONFIG_SSL_EXPIRY_TIME 24
#else
#define CONFIG_SSL_EXPIRY_TIME 0
#endif
#endif
#if  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_USE_PKCS12
#define CONFIG_SSL_USE_PKCS12 1
#else
#undef CONFIG_SSL_USE_PKCS12
#endif
#endif
#if  !defined CONFIG_SSL_SERVER_ONLY &&  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_X509_MAX_CA_CERTS
#define CONFIG_X509_MAX_CA_CERTS 150
#else
#define CONFIG_X509_MAX_CA_CERTS 0
#endif
#endif
#if  !defined CONFIG_SSL_GENERATE_X509_CERT &&  !defined CONFIG_SSL_USE_DEFAULT_KEY &&  !defined CONFIG_SSL_SKELETON_MODE
#ifdef KGENMACRO_CONFIG_SSL_X509_CERT_LOCATION
#define CONFIG_SSL_X509_CERT_LOCATION "X"
#else
#define CONFIG_SSL_X509_CERT_LOCATION ""
#endif
#endif
#if  !defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_USE_DEV_URANDOM
#define CONFIG_USE_DEV_URANDOM 1
#else
#undef CONFIG_USE_DEV_URANDOM
#endif
#endif
#if defined CONFIG_SSL_CERT_VERIFICATION
#ifdef KGENMACRO_CONFIG_PERFORMANCE_TESTING
#define CONFIG_PERFORMANCE_TESTING 1
#else
#undef CONFIG_PERFORMANCE_TESTING
#endif
#endif
#if defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_WIN32_USE_CRYPTO_LIB
#define CONFIG_WIN32_USE_CRYPTO_LIB 1
#else
#undef CONFIG_WIN32_USE_CRYPTO_LIB
#endif
#endif
#if defined CONFIG_PLATFORM_WIN32 && defined CONFIG_VISUAL_STUDIO_10_0
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_10_0_BASE
#define CONFIG_VISUAL_STUDIO_10_0_BASE "c:\Program Files\Microsoft Visual Studio 10.0"
#else
#define CONFIG_VISUAL_STUDIO_10_0_BASE ""
#endif
#endif
#if defined CONFIG_PLATFORM_WIN32 && defined CONFIG_VISUAL_STUDIO_8_0
#ifdef KGENMACRO_CONFIG_VISUAL_STUDIO_8_0_BASE
#define CONFIG_VISUAL_STUDIO_8_0_BASE "c:\Program Files\Microsoft Visual Studio 8"
#else
#define CONFIG_VISUAL_STUDIO_8_0_BASE ""
#endif
#endif
#if defined CONFIG_SAMPLES && defined CONFIG_VBNET_BINDINGS
#ifdef KGENMACRO_CONFIG_VBNET_SAMPLES
#define CONFIG_VBNET_SAMPLES 1
#else
#undef CONFIG_VBNET_SAMPLES
#endif
#endif
#if defined CONFIG_SAMPLES && defined CONFIG_CSHARP_BINDINGS
#ifdef KGENMACRO_CONFIG_CSHARP_SAMPLES
#define CONFIG_CSHARP_SAMPLES 1
#else
#undef CONFIG_CSHARP_SAMPLES
#endif
#endif
#if defined CONFIG_SAMPLES
#ifdef KGENMACRO_CONFIG_C_SAMPLES
#define CONFIG_C_SAMPLES 1
#else
#undef CONFIG_C_SAMPLES
#endif
#endif
#if defined CONFIG_SAMPLES && defined CONFIG_JAVA_BINDINGS
#ifdef KGENMACRO_CONFIG_JAVA_SAMPLES
#define CONFIG_JAVA_SAMPLES 1
#else
#undef CONFIG_JAVA_SAMPLES
#endif
#endif
#if defined CONFIG_SAMPLES && defined CONFIG_LUA_BINDINGS
#ifdef KGENMACRO_CONFIG_LUA_SAMPLES
#define CONFIG_LUA_SAMPLES 1
#else
#undef CONFIG_LUA_SAMPLES
#endif
#endif
#if defined CONFIG_SAMPLES && defined CONFIG_PERL_BINDINGS
#ifdef KGENMACRO_CONFIG_PERL_SAMPLES
#define CONFIG_PERL_SAMPLES 1
#else
#undef CONFIG_PERL_SAMPLES
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32 && defined CONFIG_HTTP_ENABLE_LUA
#ifdef KGENMACRO_CONFIG_HTTP_LUA_PREFIX
#define CONFIG_HTTP_LUA_PREFIX "/usr"
#else
#define CONFIG_HTTP_LUA_PREFIX ""
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32 && defined CONFIG_HTTP_ENABLE_LUA
#ifdef KGENMACRO_CONFIG_HTTP_BUILD_LUA
#define CONFIG_HTTP_BUILD_LUA 1
#else
#undef CONFIG_HTTP_BUILD_LUA
#endif
#endif
#if defined CONFIG_AXHTTPD &&  !defined CONFIG_PLATFORM_WIN32 && defined CONFIG_HTTP_HAS_CGI
#ifdef KGENMACRO_CONFIG_HTTP_CGI_EXTENSIONS
#define CONFIG_HTTP_CGI_EXTENSIONS ".lua,.lp,.php"
#else
#define CONFIG_HTTP_CGI_EXTENSIONS ""
#endif
#endif
#if defined CONFIG_AXHTTPD && defined CONFIG_HTTP_ENABLE_DIFFERENT_USER
#ifdef KGENMACRO_CONFIG_HTTP_USER
#define CONFIG_HTTP_USER "nobody"
#else
#define CONFIG_HTTP_USER ""
#endif
#endif
#if defined CONFIG_CSHARP_BINDINGS || defined CONFIG_VBNET_BINDINGS
#ifdef KGENMACRO_CONFIG_DOT_NET_FRAMEWORK_BASE
#define CONFIG_DOT_NET_FRAMEWORK_BASE "c:\WINDOWS\Microsoft.NET\Framework\v2.0.50727"
#else
#define CONFIG_DOT_NET_FRAMEWORK_BASE ""
#endif
#endif
#if defined CONFIG_PERL_BINDINGS && defined CONFIG_PLATFORM_WIN32
#ifdef KGENMACRO_CONFIG_PERL_CORE
#define CONFIG_PERL_CORE "c:\perl\lib\CORE"
#else
#define CONFIG_PERL_CORE ""
#endif
#endif
#if defined CONFIG_LUA_BINDINGS
#ifdef KGENMACRO_CONFIG_LUA_CORE
#define CONFIG_LUA_CORE "/usr/local"
#else
#define CONFIG_LUA_CORE ""
#endif
#endif
