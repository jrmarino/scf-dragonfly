/*
 *  Excerpts of Illumos uts/common/sys/uadmin.h
 */

/*
 * Flag representations of fastboot configuration
 */

#define UA_FASTREBOOT_DEFAULT		0x01
#define UA_FASTREBOOT_ONPANIC		0x02

#define FASTREBOOT_DEFAULT		"fastreboot_default"
#define FASTREBOOT_ONPANIC		"fastreboot_onpanic"
#define FASTREBOOT_ONPANIC_CMDLINE	"fastreboot_onpanic_cmdline"

/*
 * FMRI for boot-config service.
 */

#define FMRI_BOOT_CONFIG		"svc:/system/boot-config:default"

/*
 * Property group that contains all Fast Reboot configuration properties
 */

#define BOOT_CONFIG_PG_PARAMS		"config"
