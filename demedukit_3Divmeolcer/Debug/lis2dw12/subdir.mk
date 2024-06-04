################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lis2dw12/lis2dw12_reg.c 

OBJS += \
./lis2dw12/lis2dw12_reg.o 

C_DEPS += \
./lis2dw12/lis2dw12_reg.d 


# Each subdirectory must supply rules for building sources it contributes
lis2dw12/%.o lis2dw12/%.su lis2dw12/%.cyclo: ../lis2dw12/%.c lis2dw12/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G030xx -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/hasan/STM32CubeIDE/workspace_1.15.0/demedukit_3Divmeolcer/lis2dw12" -I"C:/Users/hasan/STM32CubeIDE/workspace_1.15.0/demedukit_3Divmeolcer/ssd1306" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-lis2dw12

clean-lis2dw12:
	-$(RM) ./lis2dw12/lis2dw12_reg.cyclo ./lis2dw12/lis2dw12_reg.d ./lis2dw12/lis2dw12_reg.o ./lis2dw12/lis2dw12_reg.su

.PHONY: clean-lis2dw12

