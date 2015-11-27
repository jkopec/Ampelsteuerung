################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Ampelsteuerung.elf

dependents:
	-cd /Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Debug && $(MAKE) all

# Tool invocations
Ampelsteuerung.elf: $(OBJS) $(USER_OBJS) /Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Debug/libstm32f3discovery_hal_lib.a
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -L"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Debug" -T"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/Ampelsteuerung/LinkerScript.ld" -Wl,-Map=output.map -Wl,--gc-sections -lm -o "Ampelsteuerung.elf" @"objects.list" $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O binary "Ampelsteuerung.elf" "Ampelsteuerung.bin"
	arm-none-eabi-size "Ampelsteuerung.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build
/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Debug/libstm32f3discovery_hal_lib.a:

-include ../makefile.targets
