#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb89a34a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x16e17547, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x293d0278, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x89a58deb, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x3a9cd2db, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16f5b7de, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2cd298be, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3b88f3a0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd51289c1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x2217d929, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc0d5f10d, __VMLINUX_SYMBOL_STR(ath_hw_keyreset) },
	{ 0xdf01986, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211,ath9k_hw,ath";


MODULE_INFO(srcversion, "50297023DA06CB0C907A2CA");
