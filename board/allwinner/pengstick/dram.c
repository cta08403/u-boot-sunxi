/* this file is generated, don't edit it yourself */

#include <common.h>
#include <asm/arch/dram.h>

static struct dram_para dram_para = {
	.clock = 384,
	.type = 3,
	.rank_num = 1,
	.density = 4096,
	.io_width = 16,
	.bus_width = 32,
	.cas = 6,
	.zq = 0x7b,
	.odt_en = 0,
	.tpr0 = 0x30926692,
	.tpr1 = 0x1090,
	.tpr2 = 0x1a0c8,
	.tpr3 = 0,
	.emr1 = 0,
	.emr2 = 0x00,
	.emr3 = 0,
};

int sunxi_dram_init(void)
{
	return DRAMC_init(&dram_para);
}
