obj-m += lwh2f.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

# TARGET = test

# ALT_DEVICE_FAMILY ?= soc_cv_av
# SOCEDS_ROOT ?= $(SOCEDS_DEST_ROOT)
# HWLIBS_ROOTS = $(SOCEDS_ROOT)/ip/altera/hps/altera_hps/hwlib
# CROSS_COMPILE = arm-linux-gnueabihf-
# CFLAGS = -g -Wall -D$(ALT_DEVICE_FAMILY) -I$(HWLIBS_ROOT)/include/$(ALT_DEVICE_FAMILY) -I$(HWLIBS_ROOT)/include/
# LDFLAGS = -g -Wall
# CC = $(CROSS_COMPILE)gcc
# ARCH = arm

# build: $(TARGET)
# $(TARGET): main.o lwh2f.o
# 	$(CC) $(LDFLAGS) $^ -o $@
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# .PHONY: clean
# clean:
# 	rm -f $(TARGET) *.a *.o *~	