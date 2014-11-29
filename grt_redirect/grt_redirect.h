#include <linux/pci.h>
#include <linux/pci-aspm.h>


int _pci_read_config_byte(const struct pci_dev *dev, int where, u8 *val);

static int _pci_write_config_byte(const struct pci_dev *dev, int where, u8 val);

static int _pci_read_config_dword(const struct pci_dev *dev, int where, u32 *val);

static int _pci_write_config_dword(const struct pci_dev *dev, int where, u32 val);

int _pci_register_driver(struct pci_driver* driver);

void _pci_unregister_driver(struct pci_driver* driver);

int _pcie_capability_clear_word(struct pci_dev *dev, int pos, u16 clear);

int _pcie_capability_read_word(struct pci_dev *dev, int pos, u16 *val);

int _pcim_enable_device(struct pci_dev *pdev);

static int _pci_set_dma_mask(struct pci_dev *dev, u64 mask);

static int _pci_set_consistent_dma_mask(struct pci_dev *dev, u64 mask);

void _pci_set_master(struct pci_dev *dev);

int _pcim_iomap_regions(struct pci_dev *pdev, int mask, const char *name);

void _pci_set_drvdata(struct pci_dev *pdev, void *data);

void *_pci_get_drvdata(struct pci_dev *pdev);

void __iomem * const *_pcim_iomap_table(struct pci_dev *pdev);
