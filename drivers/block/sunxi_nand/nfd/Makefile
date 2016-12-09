
obj-$(CONFIG_SUNXI_NAND)  += sunxi_nand.o nand_osal_for_linux.o
sunxi_nand-y := nand_blk.o \
                ../src/format/nand_format.o \
                ../src/logic/bad_manage.o ../src/logic/logic_ctl.o ../src/logic/mapping.o \
                ../src/logic/mapping_base.o ../src/logic/merge.o ../src/logic/read_reclaim.o \
                ../src/logic/wear_levelling.o ../src/logic/logic_cache.o \
                ../src/scan/nand_scan.o ../src/scan/nand_id.o \
                ../src/physic/nand_phy.o ../src/physic/nand_simple_r.o ../src/physic/nand_simple_w.o \
                ../nfc/nfc_r.o ../nfc/nfc_w.o

obj-$(CONFIG_SUNXI_NAND_BOOT_DEV)  += nand_boot.o
obj-$(CONFIG_SUNXI_NAND_BOOT_DEV)  += nand_ota_burn.o
