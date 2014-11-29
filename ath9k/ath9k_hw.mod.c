#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb89a34a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x16e17547, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x25185789, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd64cf982, __VMLINUX_SYMBOL_STR(ath_hw_get_listen_time) },
	{ 0xf357f14, __VMLINUX_SYMBOL_STR(ath_regd_get_band_ctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x3bd5a0a1, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3b88f3a0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4af6a4f0, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x68e05d57, __VMLINUX_SYMBOL_STR(getrawmonotonic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x2217d929, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath";


MODULE_INFO(srcversion, "82ED87AB9ED63AE3894F105");
