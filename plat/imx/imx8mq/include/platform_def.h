#define PLATFORM_LINKER_FORMAT		"elf64-littleaarch64"
#define PLATFORM_LINKER_ARCH		aarch64

#define PLATFORM_STACK_SIZE		0X400
#define CACHE_WRITEBACK_GRANULE		64

#define PLAT_PRIMARY_CPU		0x0
#define PLATFORM_MAX_CPU_PER_CLUSTER	4
#define PLATFORM_CLUSTER_COUNT		1
#define PLATFORM_CLUSTER0_CORE_COUNT	4
#define PLATFORM_CLUSTER1_CORE_COUNT	4
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER0_CORE_COUNT)

#define IMX_PWR_LVL0		MPIDR_AFFLVL0
#define IMX_PWR_LVL1		MPIDR_AFFLVL1
#define IMX_PWR_LVL2		MPIDR_AFFLVL2

#define PWR_DOMAIN_AT_MAX_LVL		1
#define PLAT_MAX_PWR_LVL		2
#define PLAT_MAX_OFF_STATE		2
#define PLAT_MAX_RET_STATE		1

#define BL31_BASE			0x40001000
#define BL31_LIMIT			0x40021000

/* non-secure uboot base */
#define PLAT_NS_IMAGE_OFFSET		0x40021000

/* GICv3 base address */
#define PLAT_GICD_BASE			0x38800000
#define PLAT_GICR_BASE			0x38880000

#define PLAT_FSL_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_VIRT_ADDR_SPACE_SIZE	(1ull << 32)
#define PLAT_PHY_ADDR_SPACE_SIZE	(1ull << 32)

#define MAX_XLAT_TABLES			4
#define MAX_MMAP_REGIONS		16

#define IMX_BOOT_UART_BASE		0x30860000
#define IMX_BOOT_UART_CLK_IN_HZ		25000000 /* Select 25Mhz oscillator */
#define PLAT_CRASH_UART_BASE		IMX_BOOT_UART_BASE
#define PLAT__CRASH_UART_CLK_IN_HZ	25000000
#define IMX_CONSOLE_BAUDRATE		115200

#define IMX_ANAMIX_BASE	0x30360000
#define IMX_SRC_BASE	0x30390000
#define IMX_GPC_BASE	0x303a0000

#define COUNTER_FREQUENCY		8000000 /* 8MHz */

#define DEBUG_CONSOLE			0
#define PLAT_IMX8M			1
