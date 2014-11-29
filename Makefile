obj-$(CONFIG_ATH9K_HW)		+= ath9k/

obj-m		+= grt_redirect/

obj-$(CONFIG_ATH_COMMON)	+= ath.o

ath-objs :=	main.o \
		regd.o \
		hw.o \
		key.o \
		dfs_pattern_detector.o \
		dfs_pri_detector.o

ath-$(CONFIG_ATH_DEBUG) += debug.o
ccflags-y += -D__CHECK_ENDIAN__
