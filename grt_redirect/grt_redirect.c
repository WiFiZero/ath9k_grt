/*  hello-1.c - The simplest kernel module.
 *
 *  Copyright (C) 2001 by Peter Jay Salzman
 *
 *  08/02/2006 - Updated by Rodrigo Rubira Branco <rodrigo@kernelhacking.com>
 */

/* Kernel Programming */
#define LINUX

#include "grt_redirect.h"
#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */

int _pci_read_config_byte(const struct pci_dev *dev, int where, u8 *val){
	return pci_read_config_byte(   dev,  where,  val);
}
EXPORT_SYMBOL(_pci_read_config_byte);

static int _pci_write_config_byte(const struct pci_dev *dev, int where, u8 val){
	return pci_write_config_byte(   dev,  where,  val);
}
EXPORT_SYMBOL(_pci_write_config_byte);

static int _pci_read_config_dword(const struct pci_dev *dev, int where, u32 *val){
	return pci_read_config_dword(   dev,  where,  val);
}
EXPORT_SYMBOL(_pci_read_config_dword);

static int _pci_write_config_dword(const struct pci_dev *dev, int where, u32 val){
	return pci_write_config_dword(   dev,  where,  val);
}
EXPORT_SYMBOL(_pci_write_config_dword);

int _pci_register_driver(struct pci_driver* driver){
	return pci_register_driver(  driver);
}
EXPORT_SYMBOL(_pci_register_driver);

void _pci_unregister_driver(struct pci_driver* driver){
	return pci_unregister_driver(  driver);
}
EXPORT_SYMBOL(_pci_unregister_driver);

int _pcie_capability_clear_word(struct pci_dev *dev, int pos, u16 clear){
	return pcie_capability_clear_word(  dev,  pos,  clear);
}
EXPORT_SYMBOL(_pcie_capability_clear_word);

int _pcie_capability_read_word(struct pci_dev *dev, int pos, u16 *val){
	return pcie_capability_read_word(  dev,  pos,  val);
}
EXPORT_SYMBOL(_pcie_capability_read_word);

int _pcim_enable_device(struct pci_dev *pdev){
	return pcim_enable_device(  pdev);
}
EXPORT_SYMBOL(_pcim_enable_device);

static int _pci_set_dma_mask(struct pci_dev *dev, u64 mask){
	return pci_set_dma_mask(  dev,  mask);
}
EXPORT_SYMBOL(_pci_set_dma_mask);

static int _pci_set_consistent_dma_mask(struct pci_dev *dev, u64 mask){
	return pci_set_consistent_dma_mask(  dev,  mask);
}
EXPORT_SYMBOL(_pci_set_consistent_dma_mask);

void _pci_set_master(struct pci_dev *dev){
	return pci_set_master(  dev);
}
EXPORT_SYMBOL(_pci_set_master);

int _pcim_iomap_regions(struct pci_dev *pdev, int mask, const char *name){
	return pcim_iomap_regions(  pdev,  mask,   name);
}
EXPORT_SYMBOL(_pcim_iomap_regions);

void _pci_set_drvdata(struct pci_dev *pdev, void *data){
	return pci_set_drvdata(  pdev,  data);
}
EXPORT_SYMBOL(_pci_set_drvdata);

void *_pci_get_drvdata(struct pci_dev *pdev){
	return pci_get_drvdata(  pdev);
}
EXPORT_SYMBOL(_pci_get_drvdata);

void __iomem * const *_pcim_iomap_table(struct pci_dev *pdev){
	return pcim_iomap_table(  pdev);
}
EXPORT_SYMBOL(_pcim_iomap_table);


int init_module(void)
{
   printk("<1>Hello world 1.\n");

   // A non 0 return means init_module failed; module can't be loaded.
   return 0;
}


void cleanup_module(void)
{
  printk(KERN_ALERT "Goodbye world 1.\n");
}

MODULE_LICENSE("GPL");
