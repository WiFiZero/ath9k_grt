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
	{ 0xf2a45e42, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xcf50c3c9, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x10b6c882, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x769dc43f, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x74bd437c, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0xee0c9522, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdbe0ea20, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x4f9f2289, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xaa56e84d, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa1601843, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa73da8c7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x90206ede, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x25a9bb4b, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf3f4d4f4, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A134C4D2BDD28C91FF1C223");
