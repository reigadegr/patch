/* Copyright Abandoned 1996, 1999, 2001 MySQL AB
   This file is public domain and comes with NO WARRANTY of any kind */

/* Version numbers for protocol & mysqld */

#ifndef _mariadb_version_h_
#define _mariadb_version_h_

#ifdef _CUSTOMCONFIG_
#include <custom_conf.h>
#else
#define PROTOCOL_VERSION		10
#define MARIADB_CLIENT_VERSION_STR	"11.4.2"
#define MARIADB_BASE_VERSION		"mariadb-11.4"
#define MARIADB_VERSION_ID		110402
#define MARIADB_PORT	        	3306
#define MARIADB_UNIX_ADDR               "/run/mysqld/mysqld.sock"
#ifndef MYSQL_UNIX_ADDR
#define MYSQL_UNIX_ADDR MARIADB_UNIX_ADDR
#endif
#ifndef MYSQL_PORT
#define MYSQL_PORT MARIADB_PORT
#endif

#define MYSQL_CONFIG_NAME               "my"
#define MYSQL_VERSION_ID                110402
#define MYSQL_SERVER_VERSION            "11.4.2-MariaDB"

#define MARIADB_PACKAGE_VERSION "3.4.0"
#define MARIADB_PACKAGE_VERSION_ID 30400
#define MARIADB_SYSTEM_TYPE "Linux"
#define MARIADB_MACHINE_TYPE "aarch64"
#define MARIADB_PLUGINDIR "/usr/lib/mysql/plugin"

/* mysqld compile time options */
#ifndef MYSQL_CHARSET
#define MYSQL_CHARSET			""
#endif
#endif

/* Source information */
#define CC_SOURCE_REVISION "cc985fab30321d098372f95141bf2b3bbbbedf9b"

#endif /* _mariadb_version_h_ */
