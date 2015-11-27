################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../startup/startup_stm32f303xc.s 

OBJS += \
./startup/startup_stm32f303xc.o 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/Ampelsteuerung/inc" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/CMSIS/core" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/CMSIS/device" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/HAL_Driver/Inc" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Utilities/Components/Common" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Utilities/Components/l3gd20" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Utilities/Components/lsm303dlhc" -I"/Users/jakubkopec/Dropbox/TGM/5BHIT/SYT/Labor/Weiser/workspace/stm32f3discovery_hal_lib/Utilities/STM32F3-Discovery" -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


