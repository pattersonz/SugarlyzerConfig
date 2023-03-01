#define KGEN_x25 ((!defined KGENMACRO_TOYBOX_SELINUX))
#define KGEN_x23 ((!defined KGENMACRO_TOYBOX_LSM_NONE))
#define KGEN_x28 ((!defined KGENMACRO_TOYBOX_SMACK))
#define KGEN_x48 ((defined KGENMACRO_TOYBOX_ON_ANDROID||(!defined KGENMACRO_LOG)))
#define KGEN_x37 ((!defined KGENMACRO_TOYBOX_ON_ANDROID))
#define KGEN_x39 ((!defined KGENMACRO_PASSWD))
#define KGEN_x58 ((defined KGENMACRO_TOYBOX_SHADOW||(KGEN_x39)))
#define KGEN_x42 ((!defined KGENMACRO_TOYBOX_SHADOW))
#define KGEN_x65 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_LOAD_POLICY)))
#define KGEN_x80 ((defined KGENMACRO_MKDIR_Z||(!(defined KGENMACRO_MKDIR&&(!defined KGENMACRO_TOYBOX_LSM_NONE)))))
#define KGEN_x55 ((defined KGENMACRO_MKDIR&&(KGEN_x23)))
#define KGEN_x74 (((!defined KGENMACRO_MKDIR_Z)||(KGEN_x55)))
#define KGEN_x98 ((defined KGENMACRO_TOYBOX_SHADOW&&(defined KGENMACRO_TOYBOX_SHADOW||(!defined KGENMACRO_SULOGIN))))
#define KGEN_x104 ((defined KGENMACRO_TOYBOX_CONTAINER||(!defined KGENMACRO_NSENTER)))
#define KGEN_x85 ((!defined KGENMACRO_TOYBOX_CONTAINER))
#define KGEN_x111 ((defined KGENMACRO_TOYBOX_CONTAINER||(!defined KGENMACRO_UNSHARE)))
#define KGEN_x120 ((defined KGENMACRO_TOYBOX_FORK||(!defined KGENMACRO_NBD_CLIENT)))
#define KGEN_x95 ((!defined KGENMACRO_TOYBOX_FORK))
#define KGEN_x89 ((defined KGENMACRO_TOYBOX_ON_ANDROID&&defined KGENMACRO_TOYBOX_SELINUX))
#define KGEN_x103 ((!(KGEN_x89)))
#define KGEN_x101 (((!defined KGENMACRO_GETPROP)||(KGEN_x89)))
#define KGEN_x138 ((defined KGENMACRO_TOYBOX_FORK&&(defined KGENMACRO_TOYBOX_FORK||(!defined KGENMACRO_CRONTAB))))
#define KGEN_x146 ((defined KGENMACRO_KLOGD&&(defined KGENMACRO_KLOGD||(!defined KGENMACRO_KLOGD_SOURCE_RING_BUFFER))))
#define KGEN_x152 ((defined KGENMACRO_TOYBOX_FLOAT||(!defined KGENMACRO_TIME)))
#define KGEN_x131 ((!defined KGENMACRO_TOYBOX_FLOAT))
#define KGEN_x161 ((defined KGENMACRO_TOYBOX_LIBCRYPTO||(!defined KGENMACRO_SHA224SUM)))
#define KGEN_x141 ((!defined KGENMACRO_TOYBOX_LIBCRYPTO))
#define KGEN_x189 ((defined KGENMACRO_TOYBOX_LIBZ||(!defined KGENMACRO_GUNZIP)))
#define KGEN_x164 ((!defined KGENMACRO_TOYBOX_LIBZ))
#define KGEN_x200 ((defined KGENMACRO_TOYBOX_UTMPX||(!defined KGENMACRO_WHO)))
#define KGEN_x180 ((!defined KGENMACRO_TOYBOX_UTMPX))
#define KGEN_x207 ((defined KGENMACRO_TOYBOX_FLOAT||(!defined KGENMACRO_TIMEOUT)))
#define KGEN_x214 ((defined KGENMACRO_TOYBOX_LIBCRYPTO||(!defined KGENMACRO_SHA512SUM)))
#define KGEN_x223 ((defined KGENMACRO_TOYBOX_HELP||(!defined KGENMACRO_HELP)))
#define KGEN_x197 ((!defined KGENMACRO_TOYBOX_HELP))
#define KGEN_x231 ((defined KGENMACRO_SORT_FLOAT||(!(defined KGENMACRO_SORT_BIG&&defined KGENMACRO_TOYBOX_FLOAT))))
#define KGEN_x203 ((defined KGENMACRO_SORT_BIG&&defined KGENMACRO_TOYBOX_FLOAT))
#define KGEN_x229 (((!defined KGENMACRO_SORT_FLOAT)||(KGEN_x203)))
#define KGEN_x239 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_RUNCON)))
#define KGEN_x246 ((defined KGENMACRO_TOYBOX_LIBZ||(!defined KGENMACRO_ZCAT)))
#define KGEN_x255 ((defined KGENMACRO_TOYBOX_PRLIMIT||(!defined KGENMACRO_ULIMIT)))
#define KGEN_x234 ((!defined KGENMACRO_TOYBOX_PRLIMIT))
#define KGEN_x266 ((defined KGENMACRO_TOYBOX_ICONV&&(defined KGENMACRO_TOYBOX_ICONV||(!defined KGENMACRO_ICONV))))
#define KGEN_x272 ((defined KGENMACRO_LS||(!defined KGENMACRO_LS_COLOR)))
#define KGEN_x252 ((!defined KGENMACRO_LS))
#define KGEN_x279 ((defined KGENMACRO_TOYBOX_LIBCRYPTO||(!defined KGENMACRO_SHA384SUM)))
#define KGEN_x286 ((defined KGENMACRO_TOYBOX_UTMPX||(!defined KGENMACRO_UPTIME)))
#define KGEN_x295 ((defined KGENMACRO_TOYBOX_FALLOCATE||(!defined KGENMACRO_FALLOCATE)))
#define KGEN_x269 ((!defined KGENMACRO_TOYBOX_FALLOCATE))
#define KGEN_x302 ((defined KGENMACRO_TOYBOX_ON_ANDROID||(!defined KGENMACRO_SENDEVENT)))
#define KGEN_x311 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_CHCON)))
#define KGEN_x319 ((defined KGENMACRO_TOYBOX_ON_ANDROID||(!defined KGENMACRO_STOP)))
#define KGEN_x328 ((defined KGENMACRO_LSPCI||(!defined KGENMACRO_LSPCI_TEXT)))
#define KGEN_x305 ((!defined KGENMACRO_LSPCI))
#define KGEN_x337 ((defined KGENMACRO_KILL||(!defined KGENMACRO_KILLALL5)))
#define KGEN_x314 ((!defined KGENMACRO_KILL))
#define KGEN_x352 ((defined KGENMACRO_TOYBOX_UTMPX||(!defined KGENMACRO_W)))
#define KGEN_x359 ((defined KGENMACRO_TOYBOX_HELP||(!defined KGENMACRO_TOYBOX_HELP_DASHDASH)))
#define KGEN_x373 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_GETENFORCE)))
#define KGEN_x382 ((defined KGENMACRO_NETCAT||(!defined KGENMACRO_NETCAT_LISTEN)))
#define KGEN_x355 ((!defined KGENMACRO_NETCAT))
#define KGEN_x389 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_SETENFORCE)))
#define KGEN_x388 ((defined KGENMACRO_TOYBOX_FORK||defined KGENMACRO_TOYBOX_MUSL_NOMMU_IS_BROKEN))
#define KGEN_x385 (((KGEN_x95)||(!defined KGENMACRO_TOYBOX_MUSL_NOMMU_IS_BROKEN)))
#define KGEN_x402 ((defined KGENMACRO_TOYBOX_LIBCRYPTO||(!defined KGENMACRO_SHA256SUM)))
#define KGEN_x409 ((defined KGENMACRO_TOYBOX_SHADOW||(!defined KGENMACRO_LOGIN)))
#define KGEN_x416 ((defined KGENMACRO_TOYBOX_FLOAT||(!defined KGENMACRO_SEQ)))
#define KGEN_x423 ((defined KGENMACRO_MKNOD_Z||(!(defined KGENMACRO_MKNOD&&(!defined KGENMACRO_TOYBOX_LSM_NONE)))))
#define KGEN_x397 ((defined KGENMACRO_MKNOD&&(KGEN_x23)))
#define KGEN_x419 (((!defined KGENMACRO_MKNOD_Z)||(KGEN_x397)))
#define KGEN_x429 ((!defined KGENMACRO_GREP))
#define KGEN_x430 ((defined KGENMACRO_EGREP||(KGEN_x429)))
#define KGEN_x428 (((!defined KGENMACRO_EGREP)||defined KGENMACRO_GREP))
#define KGEN_x440 ((defined KGENMACRO_CP||(!defined KGENMACRO_CP_PRESERVE)))
#define KGEN_x425 ((!defined KGENMACRO_CP))
#define KGEN_x449 ((defined KGENMACRO_MDEV||(!defined KGENMACRO_MDEV_CONF)))
#define KGEN_x433 ((!defined KGENMACRO_MDEV))
#define KGEN_x458 ((defined KGENMACRO_MKFIFO_Z||(!(defined KGENMACRO_MKFIFO&&(!defined KGENMACRO_TOYBOX_LSM_NONE)))))
#define KGEN_x437 ((defined KGENMACRO_MKFIFO&&(KGEN_x23)))
#define KGEN_x456 (((!defined KGENMACRO_MKFIFO_Z)||(KGEN_x437)))
#define KGEN_x460 (((!defined KGENMACRO_MKPASSWD)||(KGEN_x37)))
#define KGEN_x483 ((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x460)&&(defined KGENMACRO_TOYBOX_ON_ANDROID||defined KGENMACRO_MKPASSWD)))
#define KGEN_x488 ((defined KGENMACRO_SORT||(!defined KGENMACRO_SORT_BIG)))
#define KGEN_x466 ((!defined KGENMACRO_SORT))
#define KGEN_x502 ((defined KGENMACRO_TOYBOX_FIFREEZE||(!defined KGENMACRO_FSFREEZE)))
#define KGEN_x479 ((!defined KGENMACRO_TOYBOX_FIFREEZE))
#define KGEN_x511 ((defined KGENMACRO_TAIL||(!defined KGENMACRO_TAIL_SEEK)))
#define KGEN_x486 ((!defined KGENMACRO_TAIL))
#define KGEN_x519 (((!defined KGENMACRO_GREP)||defined KGENMACRO_FGREP))
#define KGEN_x518 ((defined KGENMACRO_GREP||(!defined KGENMACRO_FGREP)))
#define KGEN_x531 ((defined KGENMACRO_TOYBOX_ON_ANDROID||(!defined KGENMACRO_SETPROP)))
#define KGEN_x505 ((defined KGENMACRO_TOYBOX&&defined KGENMACRO_HELP))
#define KGEN_x510 (((!defined KGENMACRO_HELP_EXTRAS)||(KGEN_x505)))
#define KGEN_x517 ((!(KGEN_x505)))
#define KGEN_x547 ((defined KGENMACRO_TOYBOX_SHADOW||(!defined KGENMACRO_SU)))
#define KGEN_x556 ((defined KGENMACRO_TOYBOX_FORK&&(defined KGENMACRO_TOYBOX_FORK||(!defined KGENMACRO_BOOTCHARTD))))
#define KGEN_x560 ((defined KGENMACRO_ID_Z||(!(defined KGENMACRO_ID&&(!defined KGENMACRO_TOYBOX_LSM_NONE)))))
#define KGEN_x534 ((defined KGENMACRO_ID&&(!defined KGENMACRO_TOYBOX_LSM_NONE)))
#define KGEN_x554 (((!defined KGENMACRO_ID_Z)||(KGEN_x534)))
#define KGEN_x568 ((defined KGENMACRO_SLEEP_FLOAT||(!(defined KGENMACRO_SLEEP&&defined KGENMACRO_TOYBOX_FLOAT))))
#define KGEN_x542 ((defined KGENMACRO_SLEEP&&defined KGENMACRO_TOYBOX_FLOAT))
#define KGEN_x566 (((!defined KGENMACRO_SLEEP_FLOAT)||(KGEN_x542)))
#define KGEN_x576 ((defined KGENMACRO_TOYBOX_LIBZ||(!defined KGENMACRO_GZIP)))
#define KGEN_x583 ((defined KGENMACRO_TOYBOX_ON_ANDROID||(!defined KGENMACRO_START)))
#define KGEN_x590 ((defined KGENMACRO_TOYBOX_SELINUX||(!defined KGENMACRO_RESTORECON)))
#if (((defined KGENMACRO_TOYBOX_LSM_NONE||defined KGENMACRO_TOYBOX_SELINUX||defined KGENMACRO_TOYBOX_SMACK)))
#ifdef KGENMACRO_KILL
#define KILL 1
#else
#define KILL 0
#endif
#ifdef KGENMACRO_TOYBOX_NORECURSE
#define TOYBOX_NORECURSE 1
#else
#define TOYBOX_NORECURSE 0
#endif
#if (((defined KGENMACRO_SYSLOGD&&(defined KGENMACRO_SYSLOGD||(!defined KGENMACRO_LOGGER)))||((!defined KGENMACRO_SYSLOGD)&&(!defined KGENMACRO_LOGGER))))
#ifdef KGENMACRO_LOGGER
#define LOGGER 1
#else
#define LOGGER 0
#endif
#endif
#ifdef KGENMACRO_WHICH
#define WHICH 1
#else
#define WHICH 0
#endif
#ifdef KGENMACRO_DHCP6
#define DHCP6 1
#else
#define DHCP6 0
#endif
#ifdef KGENMACRO_LSATTR
#define LSATTR 1
#else
#define LSATTR 0
#endif
#ifdef KGENMACRO_UUDECODE
#define UUDECODE 1
#else
#define UUDECODE 0
#endif
#if (((defined KGENMACRO_TOYBOX_CONTAINER&&(KGEN_x111))||((KGEN_x85)&&(KGEN_x111)&&(defined KGENMACRO_UNSHARE||(KGEN_x85)))))
#ifdef KGENMACRO_UNSHARE
#define UNSHARE 1
#else
#define UNSHARE 0
#endif
#endif
#ifdef KGENMACRO_USERADD
#define USERADD 1
#else
#define USERADD 0
#endif
#if (((defined KGENMACRO_TOYBOX_FORK&&(defined KGENMACRO_TOYBOX_FORK||(!defined KGENMACRO_OPENVT)))||((!defined KGENMACRO_TOYBOX_FORK)&&(!defined KGENMACRO_OPENVT))))
#ifdef KGENMACRO_OPENVT
#define OPENVT 1
#else
#define OPENVT 0
#endif
#endif
#ifdef KGENMACRO_IONICE
#define IONICE 1
#else
#define IONICE 0
#endif
#ifdef KGENMACRO_SWITCH_ROOT
#define SWITCH_ROOT 1
#else
#define SWITCH_ROOT 0
#endif
#ifdef KGENMACRO_WATCH
#define WATCH 1
#else
#define WATCH 0
#endif
#ifdef KGENMACRO_FACTOR
#define FACTOR 1
#else
#define FACTOR 0
#endif
#ifdef KGENMACRO_TOYBOX_HELP
#define TOYBOX_HELP 1
#else
#define TOYBOX_HELP 0
#endif
#ifdef KGENMACRO_IFCONFIG
#define IFCONFIG 1
#else
#define IFCONFIG 0
#endif
#ifdef KGENMACRO_GROUPS
#define GROUPS 1
#else
#define GROUPS 0
#endif
#if ((!defined KGENMACRO_TOYBOX_ANDROID_SCHEDPOLICY))
#ifdef KGENMACRO_TOYBOX_ANDROID_SCHEDPOLICY
#define TOYBOX_ANDROID_SCHEDPOLICY 1
#else
#define TOYBOX_ANDROID_SCHEDPOLICY 0
#endif
#endif
#ifdef KGENMACRO_MKDIR
#define MKDIR 1
#else
#define MKDIR 0
#endif
#ifdef KGENMACRO_CATV
#define CATV 1
#else
#define CATV 0
#endif
#ifdef KGENMACRO_MODINFO
#define MODINFO 1
#else
#define MODINFO 0
#endif
#if (((defined KGENMACRO_MDEV&&(KGEN_x449))||((KGEN_x433)&&(KGEN_x449)&&(defined KGENMACRO_MDEV_CONF||(KGEN_x433)))))
#ifdef KGENMACRO_MDEV_CONF
#define MDEV_CONF 1
#else
#define MDEV_CONF 0
#endif
#endif
#if (((KGEN_x419)&&(KGEN_x423)))
#ifdef KGENMACRO_MKNOD_Z
#define MKNOD_Z 1
#else
#define MKNOD_Z 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x531))||((KGEN_x37)&&(KGEN_x531)&&((KGEN_x37)||defined KGENMACRO_SETPROP))))
#ifdef KGENMACRO_SETPROP
#define SETPROP 1
#else
#define SETPROP 0
#endif
#endif
#ifdef KGENMACRO_IPCS
#define IPCS 1
#else
#define IPCS 0
#endif
#ifdef KGENMACRO_FREERAMDISK
#define FREERAMDISK 1
#else
#define FREERAMDISK 0
#endif
#ifdef KGENMACRO_TEST_MANY_OPTIONS
#define TEST_MANY_OPTIONS 1
#else
#define TEST_MANY_OPTIONS 0
#endif
#ifdef KGENMACRO_UNIX2DOS
#define UNIX2DOS 1
#else
#define UNIX2DOS 0
#endif
#if (((defined KGENMACRO_TOYBOX_FLOAT&&(KGEN_x416))||((KGEN_x131)&&(KGEN_x416)&&((KGEN_x131)||defined KGENMACRO_SEQ))))
#ifdef KGENMACRO_SEQ
#define SEQ 1
#else
#define SEQ 0
#endif
#endif
#ifdef KGENMACRO_ASCII
#define ASCII 1
#else
#define ASCII 0
#endif
#if (((KGEN_x385)&&(KGEN_x388)))
#ifdef KGENMACRO_TOYBOX_FORK
#define TOYBOX_FORK 1
#else
#define TOYBOX_FORK 0
#endif
#endif
#ifdef KGENMACRO_TEST_UTF8TOWC
#define TEST_UTF8TOWC 1
#else
#define TEST_UTF8TOWC 0
#endif
#ifdef KGENMACRO_LSUSB
#define LSUSB 1
#else
#define LSUSB 0
#endif
#ifdef KGENMACRO_PS
#define PS 1
#else
#define PS 0
#endif
#ifdef KGENMACRO_SYNC
#define SYNC 1
#else
#define SYNC 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBZ&&(KGEN_x576))||((KGEN_x164)&&(KGEN_x576)&&((KGEN_x164)||defined KGENMACRO_GZIP))))
#ifdef KGENMACRO_GZIP
#define GZIP 1
#else
#define GZIP 0
#endif
#endif
#ifdef KGENMACRO_CHRT
#define CHRT 1
#else
#define CHRT 0
#endif
#if (((defined KGENMACRO_TOYBOX_FORK&&(KGEN_x120))||((KGEN_x95)&&(KGEN_x120)&&(defined KGENMACRO_NBD_CLIENT||(KGEN_x95)))))
#ifdef KGENMACRO_NBD_CLIENT
#define NBD_CLIENT 1
#else
#define NBD_CLIENT 0
#endif
#endif
#ifdef KGENMACRO_FTPGET
#define FTPGET 1
#else
#define FTPGET 0
#endif
#ifdef KGENMACRO_RMMOD
#define RMMOD 1
#else
#define RMMOD 0
#endif
#ifdef KGENMACRO_TAIL
#define TAIL 1
#else
#define TAIL 0
#endif
#ifdef KGENMACRO_MORE
#define MORE 1
#else
#define MORE 0
#endif
#ifdef KGENMACRO_CMP
#define CMP 1
#else
#define CMP 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBZ&&(KGEN_x189))||((KGEN_x164)&&(KGEN_x189)&&(defined KGENMACRO_GUNZIP||(KGEN_x164)))))
#ifdef KGENMACRO_GUNZIP
#define GUNZIP 1
#else
#define GUNZIP 0
#endif
#endif
#ifdef KGENMACRO_UNAME
#define UNAME 1
#else
#define UNAME 0
#endif
#ifdef KGENMACRO_UNAME_RELEASE
#define UNAME_RELEASE "5.4.0-139-generic"
#else
#define UNAME_RELEASE ""
#endif
#ifdef KGENMACRO_TAC
#define TAC 1
#else
#define TAC 0
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x65))||((KGEN_x25)&&(KGEN_x65)&&((KGEN_x25)||defined KGENMACRO_LOAD_POLICY))))
#ifdef KGENMACRO_LOAD_POLICY
#define LOAD_POLICY 1
#else
#define LOAD_POLICY 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x101))||((KGEN_x103)&&(KGEN_x101)&&(defined KGENMACRO_GETPROP||(KGEN_x103)))))
#ifdef KGENMACRO_GETPROP
#define GETPROP 1
#else
#define GETPROP 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_FIFREEZE&&(KGEN_x502))||((KGEN_x479)&&(KGEN_x502)&&(defined KGENMACRO_FSFREEZE||(KGEN_x479)))))
#ifdef KGENMACRO_FSFREEZE
#define FSFREEZE 1
#else
#define FSFREEZE 0
#endif
#endif
#ifdef KGENMACRO_MV
#define MV 1
#else
#define MV 0
#endif
#ifdef KGENMACRO_PATCH
#define PATCH 1
#else
#define PATCH 0
#endif
#ifdef KGENMACRO_PKILL
#define PKILL 1
#else
#define PKILL 0
#endif
#ifdef KGENMACRO_DOS2UNIX
#define DOS2UNIX 1
#else
#define DOS2UNIX 0
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x302))||((KGEN_x37)&&(KGEN_x302)&&((KGEN_x37)||defined KGENMACRO_SENDEVENT))))
#ifdef KGENMACRO_SENDEVENT
#define SENDEVENT 1
#else
#define SENDEVENT 0
#endif
#endif
#ifdef KGENMACRO_ACPI
#define ACPI 1
#else
#define ACPI 0
#endif
#ifdef KGENMACRO_TEST_SCANKEY
#define TEST_SCANKEY 1
#else
#define TEST_SCANKEY 0
#endif
#ifdef KGENMACRO_MKTEMP
#define MKTEMP 1
#else
#define MKTEMP 0
#endif
#ifdef KGENMACRO_READLINK
#define READLINK 1
#else
#define READLINK 0
#endif
#ifdef KGENMACRO_DF
#define DF 1
#else
#define DF 0
#endif
#if (((defined KGENMACRO_TOYBOX_HELP&&(KGEN_x359))||((KGEN_x197)&&(KGEN_x359)&&((KGEN_x197)||defined KGENMACRO_TOYBOX_HELP_DASHDASH))))
#ifdef KGENMACRO_TOYBOX_HELP_DASHDASH
#define TOYBOX_HELP_DASHDASH 1
#else
#define TOYBOX_HELP_DASHDASH 0
#endif
#endif
#ifdef KGENMACRO_BZCAT
#define BZCAT 1
#else
#define BZCAT 0
#endif
#ifdef KGENMACRO_DIFF
#define DIFF 1
#else
#define DIFF 0
#endif
#ifdef KGENMACRO_TRUNCATE
#define TRUNCATE 1
#else
#define TRUNCATE 0
#endif
#ifdef KGENMACRO_DECOMPRESS
#define DECOMPRESS 1
#else
#define DECOMPRESS 0
#endif
#ifdef KGENMACRO_YES
#define YES 1
#else
#define YES 0
#endif
#ifdef KGENMACRO_ARP
#define ARP 1
#else
#define ARP 0
#endif
#if (((KGEN_x554)&&(KGEN_x560)))
#ifdef KGENMACRO_ID_Z
#define ID_Z 1
#else
#define ID_Z 0
#endif
#endif
#ifdef KGENMACRO_HOST
#define HOST 1
#else
#define HOST 0
#endif
#ifdef KGENMACRO_FOLD
#define FOLD 1
#else
#define FOLD 0
#endif
#ifdef KGENMACRO_SHA1SUM
#define SHA1SUM 1
#else
#define SHA1SUM 0
#endif
#ifdef KGENMACRO_TEST_HUMAN_READABLE
#define TEST_HUMAN_READABLE 1
#else
#define TEST_HUMAN_READABLE 0
#endif
#if (defined KGENMACRO_TOYBOX_SHADOW)
#ifdef KGENMACRO_TOYBOX_SHADOW
#define TOYBOX_SHADOW 1
#else
#define TOYBOX_SHADOW 0
#endif
#endif
#ifdef KGENMACRO_USLEEP
#define USLEEP 1
#else
#define USLEEP 0
#endif
#ifdef KGENMACRO_NICE
#define NICE 1
#else
#define NICE 0
#endif
#ifdef KGENMACRO_RFKILL
#define RFKILL 1
#else
#define RFKILL 0
#endif
#if (((defined KGENMACRO_LSPCI&&(KGEN_x328))||((KGEN_x305)&&(KGEN_x328)&&(defined KGENMACRO_LSPCI_TEXT||(KGEN_x305)))))
#ifdef KGENMACRO_LSPCI_TEXT
#define LSPCI_TEXT 1
#else
#define LSPCI_TEXT 0
#endif
#endif
#ifdef KGENMACRO_GETFATTR
#define GETFATTR 1
#else
#define GETFATTR 0
#endif
#if ((!defined KGENMACRO_EXIT))
#ifdef KGENMACRO_EXIT
#define EXIT 1
#else
#define EXIT 0
#endif
#endif
#ifdef KGENMACRO_VCONFIG
#define VCONFIG 1
#else
#define VCONFIG 0
#endif
#ifdef KGENMACRO_SETFATTR
#define SETFATTR 1
#else
#define SETFATTR 0
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x583))||((KGEN_x37)&&(KGEN_x583)&&((KGEN_x37)||defined KGENMACRO_START))))
#ifdef KGENMACRO_START
#define START 1
#else
#define START 0
#endif
#endif
#ifdef KGENMACRO_TRACEROUTE
#define TRACEROUTE 1
#else
#define TRACEROUTE 0
#endif
#ifdef KGENMACRO_TEE
#define TEE 1
#else
#define TEE 0
#endif
#ifdef KGENMACRO_TEST
#define TEST 1
#else
#define TEST 0
#endif
#ifdef KGENMACRO_ID
#define ID 1
#else
#define ID 0
#endif
#ifdef KGENMACRO_TOYBOX_SUID
#define TOYBOX_SUID 1
#else
#define TOYBOX_SUID 0
#endif
#ifdef KGENMACRO_TFTP
#define TFTP 1
#else
#define TFTP 0
#endif
#ifdef KGENMACRO_FDISK
#define FDISK 1
#else
#define FDISK 0
#endif
#ifdef KGENMACRO_BUNZIP2
#define BUNZIP2 1
#else
#define BUNZIP2 0
#endif
#ifdef KGENMACRO_MOUNT
#define MOUNT 1
#else
#define MOUNT 0
#endif
#if (defined KGENMACRO_TOYBOX)
#ifdef KGENMACRO_TOYBOX
#define TOYBOX 1
#else
#define TOYBOX 0
#endif
#endif
#ifdef KGENMACRO_HOSTID
#define HOSTID 1
#else
#define HOSTID 0
#endif
#ifdef KGENMACRO_EXPR
#define EXPR 1
#else
#define EXPR 0
#endif
#ifdef KGENMACRO_CP
#define CP 1
#else
#define CP 0
#endif
#ifdef KGENMACRO_MICROCOM
#define MICROCOM 1
#else
#define MICROCOM 0
#endif
#ifdef KGENMACRO_PARTPROBE
#define PARTPROBE 1
#else
#define PARTPROBE 0
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x239))||((KGEN_x25)&&(KGEN_x239)&&((KGEN_x25)||defined KGENMACRO_RUNCON))))
#ifdef KGENMACRO_RUNCON
#define RUNCON 1
#else
#define RUNCON 0
#endif
#endif
#ifdef KGENMACRO_SPLIT
#define SPLIT 1
#else
#define SPLIT 0
#endif
#ifdef KGENMACRO_SED
#define SED 1
#else
#define SED 0
#endif
#ifdef KGENMACRO_RESET
#define RESET 1
#else
#define RESET 0
#endif
#ifdef KGENMACRO_WGET
#define WGET 1
#else
#define WGET 0
#endif
#if (((KGEN_x25)||(!defined KGENMACRO_TOYBOX_SMACK)))
#ifdef KGENMACRO_TOYBOX_SELINUX
#define TOYBOX_SELINUX 1
#else
#define TOYBOX_SELINUX 0
#endif
#endif
#ifdef KGENMACRO_NOHUP
#define NOHUP 1
#else
#define NOHUP 0
#endif
#ifdef KGENMACRO_IP
#define IP 1
#else
#define IP 0
#endif
#if ((!defined KGENMACRO_TOYBOX_PRLIMIT))
#ifdef KGENMACRO_TOYBOX_PRLIMIT
#define TOYBOX_PRLIMIT 1
#else
#define TOYBOX_PRLIMIT 0
#endif
#endif
#ifdef KGENMACRO_LSPCI
#define LSPCI 1
#else
#define LSPCI 0
#endif
#ifdef KGENMACRO_HEAD
#define HEAD 1
#else
#define HEAD 0
#endif
#ifdef KGENMACRO_TOYBOX_I18N
#define TOYBOX_I18N 1
#else
#define TOYBOX_I18N 0
#endif
#ifdef KGENMACRO_UMOUNT
#define UMOUNT 1
#else
#define UMOUNT 0
#endif
#ifdef KGENMACRO_DIRNAME
#define DIRNAME 1
#else
#define DIRNAME 0
#endif
#if (((defined KGENMACRO_TOYBOX&&defined KGENMACRO_HELP&&(KGEN_x510))||((KGEN_x517)&&(KGEN_x510)&&(defined KGENMACRO_HELP_EXTRAS||(KGEN_x517)))))
#ifdef KGENMACRO_HELP_EXTRAS
#define HELP_EXTRAS 1
#else
#define HELP_EXTRAS 0
#endif
#endif
#ifdef KGENMACRO_CLEAR
#define CLEAR 1
#else
#define CLEAR 0
#endif
#ifdef KGENMACRO_PASTE
#define PASTE 1
#else
#define PASTE 0
#endif
#if ((!defined KGENMACRO_CD))
#ifdef KGENMACRO_CD
#define CD 1
#else
#define CD 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_FLOAT&&(KGEN_x207))||((KGEN_x131)&&(KGEN_x207)&&((KGEN_x131)||defined KGENMACRO_TIMEOUT))))
#ifdef KGENMACRO_TIMEOUT
#define TIMEOUT 1
#else
#define TIMEOUT 0
#endif
#endif
#ifdef KGENMACRO_VI
#define VI 1
#else
#define VI 0
#endif
#ifdef KGENMACRO_STRINGS
#define STRINGS 1
#else
#define STRINGS 0
#endif
#if (((KGEN_x98)||((!defined KGENMACRO_TOYBOX_SHADOW)&&(!defined KGENMACRO_SULOGIN))))
#ifdef KGENMACRO_SULOGIN
#define SULOGIN 1
#else
#define SULOGIN 0
#endif
#endif
#ifdef KGENMACRO_CKSUM
#define CKSUM 1
#else
#define CKSUM 0
#endif
#if (((defined KGENMACRO_KILL&&(KGEN_x337))||((KGEN_x314)&&(KGEN_x337)&&(defined KGENMACRO_KILLALL5||(KGEN_x314)))))
#ifdef KGENMACRO_KILLALL5
#define KILLALL5 1
#else
#define KILLALL5 0
#endif
#endif
#ifdef KGENMACRO_SETSID
#define SETSID 1
#else
#define SETSID 0
#endif
#ifdef KGENMACRO_GROUPADD
#define GROUPADD 1
#else
#define GROUPADD 0
#endif
#if (((KGEN_x518)&&(KGEN_x519)))
#ifdef KGENMACRO_FGREP
#define FGREP 1
#else
#define FGREP 0
#endif
#endif
#ifdef KGENMACRO_MKFIFO
#define MKFIFO 1
#else
#define MKFIFO 0
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x590))||((KGEN_x25)&&(KGEN_x590)&&((KGEN_x25)||defined KGENMACRO_RESTORECON))))
#ifdef KGENMACRO_RESTORECON
#define RESTORECON 1
#else
#define RESTORECON 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_CONTAINER&&(KGEN_x104))||((KGEN_x85)&&(KGEN_x104)&&(defined KGENMACRO_NSENTER||(KGEN_x85)))))
#ifdef KGENMACRO_NSENTER
#define NSENTER 1
#else
#define NSENTER 0
#endif
#endif
#ifdef KGENMACRO_TOYBOX_FLOAT
#define TOYBOX_FLOAT 1
#else
#define TOYBOX_FLOAT 0
#endif
#ifdef KGENMACRO_ENV
#define ENV 1
#else
#define ENV 0
#endif
#ifdef KGENMACRO_STAT
#define STAT 1
#else
#define STAT 0
#endif
#ifdef KGENMACRO_TELNET
#define TELNET 1
#else
#define TELNET 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBCRYPTO&&(KGEN_x279))||((KGEN_x141)&&(KGEN_x279)&&((KGEN_x141)||defined KGENMACRO_SHA384SUM))))
#ifdef KGENMACRO_SHA384SUM
#define SHA384SUM 1
#else
#define SHA384SUM 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_UTMPX&&(KGEN_x286))||((KGEN_x180)&&(KGEN_x286)&&((KGEN_x180)||defined KGENMACRO_UPTIME))))
#ifdef KGENMACRO_UPTIME
#define UPTIME 1
#else
#define UPTIME 0
#endif
#endif
#ifdef KGENMACRO_LS
#define LS 1
#else
#define LS 0
#endif
#ifdef KGENMACRO_PRINTF
#define PRINTF 1
#else
#define PRINTF 0
#endif
#ifdef KGENMACRO_LOGNAME
#define LOGNAME 1
#else
#define LOGNAME 0
#endif
#ifdef KGENMACRO_BLKID
#define BLKID 1
#else
#define BLKID 0
#endif
#ifdef KGENMACRO_PGREP
#define PGREP 1
#else
#define PGREP 0
#endif
#if (((defined KGENMACRO_SORT&&(KGEN_x488))||((KGEN_x466)&&(KGEN_x488)&&(defined KGENMACRO_SORT_BIG||(KGEN_x466)))))
#ifdef KGENMACRO_SORT_BIG
#define SORT_BIG 1
#else
#define SORT_BIG 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_LIBCRYPTO&&(KGEN_x214))||((KGEN_x141)&&(KGEN_x214)&&((KGEN_x141)||defined KGENMACRO_SHA512SUM))))
#ifdef KGENMACRO_SHA512SUM
#define SHA512SUM 1
#else
#define SHA512SUM 0
#endif
#endif
#if ((((KGEN_x37)&&(KGEN_x460))||(KGEN_x483)))
#ifdef KGENMACRO_MKPASSWD
#define MKPASSWD 1
#else
#define MKPASSWD 0
#endif
#endif
#ifdef KGENMACRO_PWDX
#define PWDX 1
#else
#define PWDX 0
#endif
#ifdef KGENMACRO_SHRED
#define SHRED 1
#else
#define SHRED 0
#endif
#if (((defined KGENMACRO_TOYBOX_SHADOW&&(KGEN_x58))||((KGEN_x42)&&(KGEN_x58)&&(defined KGENMACRO_PASSWD||(KGEN_x42)))))
#ifdef KGENMACRO_PASSWD
#define PASSWD 1
#else
#define PASSWD 0
#endif
#endif
#ifdef KGENMACRO_CAL
#define CAL 1
#else
#define CAL 0
#endif
#ifdef KGENMACRO_INOTIFYD
#define INOTIFYD 1
#else
#define INOTIFYD 0
#endif
#if (((KGEN_x138)||((!defined KGENMACRO_TOYBOX_FORK)&&(!defined KGENMACRO_CRONTAB))))
#ifdef KGENMACRO_CRONTAB
#define CRONTAB 1
#else
#define CRONTAB 0
#endif
#endif
#ifdef KGENMACRO_TASKSET
#define TASKSET 1
#else
#define TASKSET 0
#endif
#ifdef KGENMACRO_BRCTL
#define BRCTL 1
#else
#define BRCTL 0
#endif
#ifdef KGENMACRO_LAST
#define LAST 1
#else
#define LAST 0
#endif
#ifdef KGENMACRO_WC
#define WC 1
#else
#define WC 0
#endif
#if (((defined KGENMACRO_MKE2FS&&(defined KGENMACRO_MKE2FS||(!defined KGENMACRO_MKE2FS_EXTENDED)))||((!defined KGENMACRO_MKE2FS)&&(!defined KGENMACRO_MKE2FS_EXTENDED))))
#ifdef KGENMACRO_MKE2FS_EXTENDED
#define MKE2FS_EXTENDED 1
#else
#define MKE2FS_EXTENDED 0
#endif
#endif
#ifdef KGENMACRO_MKE2FS
#define MKE2FS 1
#else
#define MKE2FS 0
#endif
#ifdef KGENMACRO_TOYBOX_FREE
#define TOYBOX_FREE 1
#else
#define TOYBOX_FREE 0
#endif
#ifdef KGENMACRO_SWAPON
#define SWAPON 1
#else
#define SWAPON 0
#endif
#ifdef KGENMACRO_CHMOD
#define CHMOD 1
#else
#define CHMOD 0
#endif
#ifdef KGENMACRO_TFTPD
#define TFTPD 1
#else
#define TFTPD 0
#endif
#ifdef KGENMACRO_REALPATH
#define REALPATH 1
#else
#define REALPATH 0
#endif
#ifdef KGENMACRO_UNIQ
#define UNIQ 1
#else
#define UNIQ 0
#endif
#if (defined KGENMACRO_TOYBOX_FIFREEZE)
#ifdef KGENMACRO_TOYBOX_FIFREEZE
#define TOYBOX_FIFREEZE 1
#else
#define TOYBOX_FIFREEZE 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_UTMPX&&(KGEN_x200))||((KGEN_x180)&&(KGEN_x200)&&(defined KGENMACRO_WHO||(KGEN_x180)))))
#ifdef KGENMACRO_WHO
#define WHO 1
#else
#define WHO 0
#endif
#endif
#ifdef KGENMACRO_HWCLOCK
#define HWCLOCK 1
#else
#define HWCLOCK 0
#endif
#ifdef KGENMACRO_DMESG
#define DMESG 1
#else
#define DMESG 0
#endif
#ifdef KGENMACRO_MKNOD
#define MKNOD 1
#else
#define MKNOD 0
#endif
#ifdef KGENMACRO_MOUNTPOINT
#define MOUNTPOINT 1
#else
#define MOUNTPOINT 0
#endif
#if (defined KGENMACRO_TOYBOX_FALLOCATE)
#ifdef KGENMACRO_TOYBOX_FALLOCATE
#define TOYBOX_FALLOCATE 1
#else
#define TOYBOX_FALLOCATE 0
#endif
#endif
#ifdef KGENMACRO_KILLALL
#define KILLALL 1
#else
#define KILLALL 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBCRYPTO&&(KGEN_x161))||((KGEN_x141)&&(KGEN_x161)&&(defined KGENMACRO_SHA224SUM||(KGEN_x141)))))
#ifdef KGENMACRO_SHA224SUM
#define SHA224SUM 1
#else
#define SHA224SUM 0
#endif
#endif
#ifdef KGENMACRO_DHCPD
#define DHCPD 1
#else
#define DHCPD 0
#endif
#ifdef KGENMACRO_SLEEP
#define SLEEP 1
#else
#define SLEEP 0
#endif
#ifdef KGENMACRO_INSTALL
#define INSTALL 1
#else
#define INSTALL 0
#endif
#if (((defined KGENMACRO_TOYBOX_UTMPX&&(KGEN_x352))||((KGEN_x180)&&(KGEN_x352)&&((KGEN_x180)||defined KGENMACRO_W))))
#ifdef KGENMACRO_W
#define W 1
#else
#define W 0
#endif
#endif
#ifdef KGENMACRO_BASE64
#define BASE64 1
#else
#define BASE64 0
#endif
#if (((defined KGENMACRO_TOYBOX_FALLOCATE&&(KGEN_x295))||((KGEN_x269)&&(KGEN_x295)&&(defined KGENMACRO_FALLOCATE||(KGEN_x269)))))
#ifdef KGENMACRO_FALLOCATE
#define FALLOCATE 1
#else
#define FALLOCATE 0
#endif
#endif
#ifdef KGENMACRO_KLOGD
#define KLOGD 1
#else
#define KLOGD 0
#endif
#ifdef KGENMACRO_INSMOD
#define INSMOD 1
#else
#define INSMOD 0
#endif
#ifdef KGENMACRO_MKSWAP
#define MKSWAP 1
#else
#define MKSWAP 0
#endif
#ifdef KGENMACRO_RENICE
#define RENICE 1
#else
#define RENICE 0
#endif
#ifdef KGENMACRO_CHATTR
#define CHATTR 1
#else
#define CHATTR 0
#endif
#ifdef KGENMACRO_NETSTAT
#define NETSTAT 1
#else
#define NETSTAT 0
#endif
#ifdef KGENMACRO_OD
#define OD 1
#else
#define OD 0
#endif
#if (((defined KGENMACRO_DHCPD&&(defined KGENMACRO_DHCPD||(!defined KGENMACRO_DEBUG_DHCP)))||((!defined KGENMACRO_DHCPD)&&(!defined KGENMACRO_DEBUG_DHCP))))
#ifdef KGENMACRO_DEBUG_DHCP
#define DEBUG_DHCP 1
#else
#define DEBUG_DHCP 0
#endif
#endif
#ifdef KGENMACRO_TOYBOX_DEBUG
#define TOYBOX_DEBUG 1
#else
#define TOYBOX_DEBUG 0
#endif
#ifdef KGENMACRO_TTY
#define TTY 1
#else
#define TTY 0
#endif
#ifdef KGENMACRO_DU
#define DU 1
#else
#define DU 0
#endif
#ifdef KGENMACRO_CROND
#define CROND 1
#else
#define CROND 0
#endif
#ifdef KGENMACRO_TOYBOX_MUSL_NOMMU_IS_BROKEN
#define TOYBOX_MUSL_NOMMU_IS_BROKEN 1
#else
#define TOYBOX_MUSL_NOMMU_IS_BROKEN 0
#endif
#ifdef KGENMACRO_PWD
#define PWD 1
#else
#define PWD 0
#endif
#if (((KGEN_x428)&&(KGEN_x430)))
#ifdef KGENMACRO_EGREP
#define EGREP 1
#else
#define EGREP 0
#endif
#endif
#if (((KGEN_x556)||((!defined KGENMACRO_TOYBOX_FORK)&&(!defined KGENMACRO_BOOTCHARTD))))
#ifdef KGENMACRO_BOOTCHARTD
#define BOOTCHARTD 1
#else
#define BOOTCHARTD 0
#endif
#endif
#ifdef KGENMACRO_COMM
#define COMM 1
#else
#define COMM 0
#endif
#ifdef KGENMACRO_ONEIT
#define ONEIT 1
#else
#define ONEIT 0
#endif
#ifdef KGENMACRO_UNLINK
#define UNLINK 1
#else
#define UNLINK 0
#endif
#ifdef KGENMACRO_NETCAT
#define NETCAT 1
#else
#define NETCAT 0
#endif
#if (((defined KGENMACRO_PASSWD&&(defined KGENMACRO_PASSWD||(!defined KGENMACRO_PASSWD_SAD)))||((!defined KGENMACRO_PASSWD)&&(!defined KGENMACRO_PASSWD_SAD))))
#ifdef KGENMACRO_PASSWD_SAD
#define PASSWD_SAD 1
#else
#define PASSWD_SAD 0
#endif
#endif
#ifdef KGENMACRO_HEXEDIT
#define HEXEDIT 1
#else
#define HEXEDIT 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBCRYPTO&&(KGEN_x402))||((KGEN_x141)&&(KGEN_x402)&&((KGEN_x141)||defined KGENMACRO_SHA256SUM))))
#ifdef KGENMACRO_SHA256SUM
#define SHA256SUM 1
#else
#define SHA256SUM 0
#endif
#endif
#ifdef KGENMACRO_CHVT
#define CHVT 1
#else
#define CHVT 0
#endif
#ifdef KGENMACRO_FLOCK
#define FLOCK 1
#else
#define FLOCK 0
#endif
#ifdef KGENMACRO_XARGS
#define XARGS 1
#else
#define XARGS 0
#endif
#ifdef KGENMACRO_FSTYPE
#define FSTYPE 1
#else
#define FSTYPE 0
#endif
#ifdef KGENMACRO_LSMOD
#define LSMOD 1
#else
#define LSMOD 0
#endif
#ifdef KGENMACRO_MIX
#define MIX 1
#else
#define MIX 0
#endif
#ifdef KGENMACRO_INIT
#define INIT 1
#else
#define INIT 0
#endif
#ifdef KGENMACRO_DEALLOCVT
#define DEALLOCVT 1
#else
#define DEALLOCVT 0
#endif
#if (((defined KGENMACRO_TAIL&&(KGEN_x511))||((KGEN_x486)&&(KGEN_x511)&&(defined KGENMACRO_TAIL_SEEK||(KGEN_x486)))))
#ifdef KGENMACRO_TAIL_SEEK
#define TAIL_SEEK 1
#else
#define TAIL_SEEK 0
#endif
#endif
#ifdef KGENMACRO_BASENAME
#define BASENAME 1
#else
#define BASENAME 0
#endif
#ifdef KGENMACRO_RM
#define RM 1
#else
#define RM 0
#endif
#ifdef KGENMACRO_LN
#define LN 1
#else
#define LN 0
#endif
#if (((KGEN_x266)||((!defined KGENMACRO_TOYBOX_ICONV)&&(!defined KGENMACRO_ICONV))))
#ifdef KGENMACRO_ICONV
#define ICONV 1
#else
#define ICONV 0
#endif
#endif
#ifdef KGENMACRO_FIND
#define FIND 1
#else
#define FIND 0
#endif
#if (((defined KGENMACRO_MKE2FS&&(defined KGENMACRO_MKE2FS||(!defined KGENMACRO_MKE2FS_JOURNAL)))||((!defined KGENMACRO_MKE2FS)&&(!defined KGENMACRO_MKE2FS_JOURNAL))))
#ifdef KGENMACRO_MKE2FS_JOURNAL
#define MKE2FS_JOURNAL 1
#else
#define MKE2FS_JOURNAL 0
#endif
#endif
#ifdef KGENMACRO_MODPROBE
#define MODPROBE 1
#else
#define MODPROBE 0
#endif
#ifdef KGENMACRO_CUT
#define CUT 1
#else
#define CUT 0
#endif
#if (((defined KGENMACRO_MKE2FS&&(defined KGENMACRO_MKE2FS||(!defined KGENMACRO_MKE2FS_LABEL)))||((!defined KGENMACRO_MKE2FS)&&(!defined KGENMACRO_MKE2FS_LABEL))))
#ifdef KGENMACRO_MKE2FS_LABEL
#define MKE2FS_LABEL 1
#else
#define MKE2FS_LABEL 0
#endif
#endif
#ifdef KGENMACRO_XXD
#define XXD 1
#else
#define XXD 0
#endif
#ifdef KGENMACRO_XZCAT
#define XZCAT 1
#else
#define XZCAT 0
#endif
#ifdef KGENMACRO_HELLO
#define HELLO 1
#else
#define HELLO 0
#endif
#if (((KGEN_x146)||((!defined KGENMACRO_KLOGD)&&(!defined KGENMACRO_KLOGD_SOURCE_RING_BUFFER))))
#ifdef KGENMACRO_KLOGD_SOURCE_RING_BUFFER
#define KLOGD_SOURCE_RING_BUFFER 1
#else
#define KLOGD_SOURCE_RING_BUFFER 0
#endif
#endif
#ifdef KGENMACRO_COUNT
#define COUNT 1
#else
#define COUNT 0
#endif
#if (((KGEN_x229)&&(KGEN_x231)))
#ifdef KGENMACRO_SORT_FLOAT
#define SORT_FLOAT 1
#else
#define SORT_FLOAT 0
#endif
#endif
#ifdef KGENMACRO_MD5SUM
#define MD5SUM 1
#else
#define MD5SUM 0
#endif
#if (defined KGENMACRO_TOYBOX_UID_SYS)
#ifdef KGENMACRO_TOYBOX_UID_SYS
#define TOYBOX_UID_SYS 100
#else
#define TOYBOX_UID_SYS 0
#endif
#endif
#ifdef KGENMACRO_FALSE
#define FALSE 1
#else
#define FALSE 0
#endif
#ifdef KGENMACRO_TAR
#define TAR 1
#else
#define TAR 0
#endif
#if (((defined KGENMACRO_TOYBOX_SHADOW&&(KGEN_x409))||((KGEN_x42)&&(KGEN_x409)&&((KGEN_x42)||defined KGENMACRO_LOGIN))))
#ifdef KGENMACRO_LOGIN
#define LOGIN 1
#else
#define LOGIN 0
#endif
#endif
#ifdef KGENMACRO_MAKEDEVS
#define MAKEDEVS 1
#else
#define MAKEDEVS 0
#endif
#ifdef KGENMACRO_PRINTENV
#define PRINTENV 1
#else
#define PRINTENV 0
#endif
#ifdef KGENMACRO_TOYBOX_LIBCRYPTO
#define TOYBOX_LIBCRYPTO 1
#else
#define TOYBOX_LIBCRYPTO 0
#endif
#ifdef KGENMACRO_PING
#define PING 1
#else
#define PING 0
#endif
#if (((KGEN_x74)&&(KGEN_x80)))
#ifdef KGENMACRO_MKDIR_Z
#define MKDIR_Z 1
#else
#define MKDIR_Z 0
#endif
#endif
#if (((defined KGENMACRO_CAT&&(defined KGENMACRO_CAT||(!defined KGENMACRO_CAT_V)))||((!defined KGENMACRO_CAT)&&(!defined KGENMACRO_CAT_V))))
#ifdef KGENMACRO_CAT_V
#define CAT_V 1
#else
#define CAT_V 0
#endif
#endif
#ifdef KGENMACRO_IOTOP
#define IOTOP 1
#else
#define IOTOP 0
#endif
#ifdef KGENMACRO_COMPRESS
#define COMPRESS 1
#else
#define COMPRESS 0
#endif
#if ((!defined KGENMACRO_TOYBOX_ON_ANDROID))
#ifdef KGENMACRO_TOYBOX_ON_ANDROID
#define TOYBOX_ON_ANDROID 1
#else
#define TOYBOX_ON_ANDROID 0
#endif
#endif
#ifdef KGENMACRO_FSYNC
#define FSYNC 1
#else
#define FSYNC 0
#endif
#ifdef KGENMACRO_ECHO
#define ECHO 1
#else
#define ECHO 0
#endif
#ifdef KGENMACRO_TELNETD
#define TELNETD 1
#else
#define TELNETD 0
#endif
#ifdef KGENMACRO_TRUE
#define TRUE 1
#else
#define TRUE 0
#endif
#ifdef KGENMACRO_CPIO
#define CPIO 1
#else
#define CPIO 0
#endif
#if (((KGEN_x456)&&(KGEN_x458)))
#ifdef KGENMACRO_MKFIFO_Z
#define MKFIFO_Z 1
#else
#define MKFIFO_Z 0
#endif
#endif
#ifdef KGENMACRO_FSCK
#define FSCK 1
#else
#define FSCK 0
#endif
#if (defined KGENMACRO_TOYBOX_UID_USR)
#ifdef KGENMACRO_TOYBOX_UID_USR
#define TOYBOX_UID_USR 500
#else
#define TOYBOX_UID_USR 0
#endif
#endif
#ifdef KGENMACRO_CHGRP
#define CHGRP 1
#else
#define CHGRP 0
#endif
#ifdef KGENMACRO_MDEV
#define MDEV 1
#else
#define MDEV 0
#endif
#ifdef KGENMACRO_TR
#define TR 1
#else
#define TR 0
#endif
#ifdef KGENMACRO_DHCP
#define DHCP 1
#else
#define DHCP 0
#endif
#ifdef KGENMACRO_GROUPDEL
#define GROUPDEL 1
#else
#define GROUPDEL 0
#endif
#ifdef KGENMACRO_EXPAND
#define EXPAND 1
#else
#define EXPAND 0
#endif
#ifdef KGENMACRO_CAT
#define CAT 1
#else
#define CAT 0
#endif
#ifdef KGENMACRO_SWAPOFF
#define SWAPOFF 1
#else
#define SWAPOFF 0
#endif
#if (((defined KGENMACRO_TOYBOX_HELP&&(KGEN_x223))||((KGEN_x197)&&(KGEN_x223)&&(defined KGENMACRO_HELP||(KGEN_x197)))))
#ifdef KGENMACRO_HELP
#define HELP 1
#else
#define HELP 0
#endif
#endif
#ifdef KGENMACRO_DD
#define DD 1
#else
#define DD 0
#endif
#ifdef KGENMACRO_RMDIR
#define RMDIR 1
#else
#define RMDIR 0
#endif
#ifdef KGENMACRO_GREP
#define GREP 1
#else
#define GREP 0
#endif
#ifdef KGENMACRO_BLOCKDEV
#define BLOCKDEV 1
#else
#define BLOCKDEV 0
#endif
#ifdef KGENMACRO_UUENCODE
#define UUENCODE 1
#else
#define UUENCODE 0
#endif
#ifdef KGENMACRO_TUNCTL
#define TUNCTL 1
#else
#define TUNCTL 0
#endif
#ifdef KGENMACRO_TOYBOX_PEDANTIC_ARGS
#define TOYBOX_PEDANTIC_ARGS 1
#else
#define TOYBOX_PEDANTIC_ARGS 0
#endif
#ifdef KGENMACRO_IORENICE
#define IORENICE 1
#else
#define IORENICE 0
#endif
#if (((KGEN_x566)&&(KGEN_x568)))
#ifdef KGENMACRO_SLEEP_FLOAT
#define SLEEP_FLOAT 1
#else
#define SLEEP_FLOAT 0
#endif
#endif
#ifdef KGENMACRO_PIDOF
#define PIDOF 1
#else
#define PIDOF 0
#endif
#ifdef KGENMACRO_CHOWN
#define CHOWN 1
#else
#define CHOWN 0
#endif
#ifdef KGENMACRO_CHROOT
#define CHROOT 1
#else
#define CHROOT 0
#endif
#ifdef KGENMACRO_VMSTAT
#define VMSTAT 1
#else
#define VMSTAT 0
#endif
#ifdef KGENMACRO_SKELETON_ALIAS
#define SKELETON_ALIAS 1
#else
#define SKELETON_ALIAS 0
#endif
#ifdef KGENMACRO_NL
#define NL 1
#else
#define NL 0
#endif
#ifdef KGENMACRO_PIVOT_ROOT
#define PIVOT_ROOT 1
#else
#define PIVOT_ROOT 0
#endif
#if (((defined KGENMACRO_TOYBOX_LIBZ&&(KGEN_x246))||((KGEN_x164)&&(KGEN_x246)&&((KGEN_x164)||defined KGENMACRO_ZCAT))))
#ifdef KGENMACRO_ZCAT
#define ZCAT 1
#else
#define ZCAT 0
#endif
#endif
#ifdef KGENMACRO_PMAP
#define PMAP 1
#else
#define PMAP 0
#endif
#if (((defined KGENMACRO_TOYBOX_SHADOW&&(KGEN_x547))||((KGEN_x42)&&(KGEN_x547)&&((KGEN_x42)||defined KGENMACRO_SU))))
#ifdef KGENMACRO_SU
#define SU 1
#else
#define SU 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x319))||((KGEN_x37)&&(KGEN_x319)&&((KGEN_x37)||defined KGENMACRO_STOP))))
#ifdef KGENMACRO_STOP
#define STOP 1
#else
#define STOP 0
#endif
#endif
#if (((defined KGENMACRO_LS&&(KGEN_x272))||((KGEN_x252)&&(KGEN_x272)&&(defined KGENMACRO_LS_COLOR||(KGEN_x252)))))
#ifdef KGENMACRO_LS_COLOR
#define LS_COLOR 1
#else
#define LS_COLOR 0
#endif
#endif
#ifdef KGENMACRO_DUMPLEASES
#define DUMPLEASES 1
#else
#define DUMPLEASES 0
#endif
#ifdef KGENMACRO_HOSTNAME
#define HOSTNAME 1
#else
#define HOSTNAME 0
#endif
#ifdef KGENMACRO_SYSCTL
#define SYSCTL 1
#else
#define SYSCTL 0
#endif
#ifdef KGENMACRO_NPROC
#define NPROC 1
#else
#define NPROC 0
#endif
#ifdef KGENMACRO_ROUTE
#define ROUTE 1
#else
#define ROUTE 0
#endif
#ifdef KGENMACRO_LSOF
#define LSOF 1
#else
#define LSOF 0
#endif
#ifdef KGENMACRO_USERDEL
#define USERDEL 1
#else
#define USERDEL 0
#endif
#ifdef KGENMACRO_LOSETUP
#define LOSETUP 1
#else
#define LOSETUP 0
#endif
#if (defined KGENMACRO_TOYBOX_UTMPX)
#ifdef KGENMACRO_TOYBOX_UTMPX
#define TOYBOX_UTMPX 1
#else
#define TOYBOX_UTMPX 0
#endif
#endif
#ifdef KGENMACRO_TOYBOX_LIBZ
#define TOYBOX_LIBZ 1
#else
#define TOYBOX_LIBZ 0
#endif
#ifdef KGENMACRO_REV
#define REV 1
#else
#define REV 0
#endif
#ifdef KGENMACRO_SH
#define SH 1
#else
#define SH 0
#endif
#ifdef KGENMACRO_IPCRM
#define IPCRM 1
#else
#define IPCRM 0
#endif
#ifdef KGENMACRO_LINK
#define LINK 1
#else
#define LINK 0
#endif
#if (defined KGENMACRO_TOYBOX_ICONV)
#ifdef KGENMACRO_TOYBOX_ICONV
#define TOYBOX_ICONV 1
#else
#define TOYBOX_ICONV 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_PRLIMIT&&(KGEN_x255))||((KGEN_x234)&&(KGEN_x255)&&(defined KGENMACRO_ULIMIT||(KGEN_x234)))))
#ifdef KGENMACRO_ULIMIT
#define ULIMIT 1
#else
#define ULIMIT 0
#endif
#endif
#ifdef KGENMACRO_DATE
#define DATE 1
#else
#define DATE 0
#endif
#ifdef KGENMACRO_WHOAMI
#define WHOAMI 1
#else
#define WHOAMI 0
#endif
#if (((defined KGENMACRO_MKE2FS&&(defined KGENMACRO_MKE2FS||(!defined KGENMACRO_MKE2FS_GEN)))||((!defined KGENMACRO_MKE2FS)&&(!defined KGENMACRO_MKE2FS_GEN))))
#ifdef KGENMACRO_MKE2FS_GEN
#define MKE2FS_GEN 1
#else
#define MKE2FS_GEN 0
#endif
#endif
#ifdef KGENMACRO_GETTY
#define GETTY 1
#else
#define GETTY 0
#endif
#ifdef KGENMACRO_FTPPUT
#define FTPPUT 1
#else
#define FTPPUT 0
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x389))||((KGEN_x25)&&(KGEN_x389)&&((KGEN_x25)||defined KGENMACRO_SETENFORCE))))
#ifdef KGENMACRO_SETENFORCE
#define SETENFORCE 1
#else
#define SETENFORCE 0
#endif
#endif
#ifdef KGENMACRO_TOP
#define TOP 1
#else
#define TOP 0
#endif
#ifdef KGENMACRO_EJECT
#define EJECT 1
#else
#define EJECT 0
#endif
#if (((KGEN_x23)||(KGEN_x25))) && (((KGEN_x23)||(KGEN_x28)))
#ifdef KGENMACRO_TOYBOX_LSM_NONE
#define TOYBOX_LSM_NONE 1
#else
#define TOYBOX_LSM_NONE 0
#endif
#endif
#ifdef KGENMACRO_FILE
#define FILE 1
#else
#define FILE 0
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x311))||((KGEN_x25)&&(KGEN_x311)&&((KGEN_x25)||defined KGENMACRO_CHCON))))
#ifdef KGENMACRO_CHCON
#define CHCON 1
#else
#define CHCON 0
#endif
#endif
#ifdef KGENMACRO_SORT
#define SORT 1
#else
#define SORT 0
#endif
#ifdef KGENMACRO_SKELETON
#define SKELETON 1
#else
#define SKELETON 0
#endif
#if (((defined KGENMACRO_TOYBOX_FORK&&(defined KGENMACRO_TOYBOX_FORK||(!defined KGENMACRO_TCPSVD)))||((!defined KGENMACRO_TOYBOX_FORK)&&(!defined KGENMACRO_TCPSVD))))
#ifdef KGENMACRO_TCPSVD
#define TCPSVD 1
#else
#define TCPSVD 0
#endif
#endif
#ifdef KGENMACRO_TOUCH
#define TOUCH 1
#else
#define TOUCH 0
#endif
#ifdef KGENMACRO_REBOOT
#define REBOOT 1
#else
#define REBOOT 0
#endif
#if ((!defined KGENMACRO_TOYBOX_CONTAINER))
#ifdef KGENMACRO_TOYBOX_CONTAINER
#define TOYBOX_CONTAINER 1
#else
#define TOYBOX_CONTAINER 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_FLOAT&&(KGEN_x152))||((KGEN_x131)&&(KGEN_x152)&&(defined KGENMACRO_TIME||(KGEN_x131)))))
#ifdef KGENMACRO_TIME
#define TIME 1
#else
#define TIME 0
#endif
#endif
#ifdef KGENMACRO_READAHEAD
#define READAHEAD 1
#else
#define READAHEAD 0
#endif
#ifdef KGENMACRO_SYSLOGD
#define SYSLOGD 1
#else
#define SYSLOGD 0
#endif
#ifdef KGENMACRO_TOYBOX_SMACK
#define TOYBOX_SMACK 1
#else
#define TOYBOX_SMACK 0
#endif
#if (((defined KGENMACRO_NETCAT&&(KGEN_x382))||((KGEN_x355)&&(KGEN_x382)&&(defined KGENMACRO_NETCAT_LISTEN||(KGEN_x355)))))
#ifdef KGENMACRO_NETCAT_LISTEN
#define NETCAT_LISTEN 1
#else
#define NETCAT_LISTEN 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_SELINUX&&(KGEN_x373))||((KGEN_x25)&&(KGEN_x373)&&((KGEN_x25)||defined KGENMACRO_GETENFORCE))))
#ifdef KGENMACRO_GETENFORCE
#define GETENFORCE 1
#else
#define GETENFORCE 0
#endif
#endif
#ifdef KGENMACRO_FREE
#define FREE 1
#else
#define FREE 0
#endif
#if (((defined KGENMACRO_XARGS&&(defined KGENMACRO_XARGS||(!defined KGENMACRO_XARGS_PEDANTIC)))||((!defined KGENMACRO_XARGS)&&(!defined KGENMACRO_XARGS_PEDANTIC))))
#ifdef KGENMACRO_XARGS_PEDANTIC
#define XARGS_PEDANTIC 1
#else
#define XARGS_PEDANTIC 0
#endif
#endif
#if (((defined KGENMACRO_TOYBOX_ON_ANDROID&&(KGEN_x48))||((KGEN_x37)&&(KGEN_x48)&&(defined KGENMACRO_LOG||(KGEN_x37)))))
#ifdef KGENMACRO_LOG
#define LOG 1
#else
#define LOG 0
#endif
#endif
#ifdef KGENMACRO_ARPING
#define ARPING 1
#else
#define ARPING 0
#endif
#if (((defined KGENMACRO_CP&&(KGEN_x440))||((KGEN_x425)&&(KGEN_x440)&&(defined KGENMACRO_CP_PRESERVE||(KGEN_x425)))))
#ifdef KGENMACRO_CP_PRESERVE
#define CP_PRESERVE 1
#else
#define CP_PRESERVE 0
#endif
#endif
#else
#error
#endif