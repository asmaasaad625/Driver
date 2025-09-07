################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/EEPROM/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/SEVEN_SEG/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/Kypad/subdir.mk
-include HAL/BOTTON/subdir.mk
-include HAL/BCD_SEG/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Driveres.lss \

FLASH_IMAGE += \
Driveres.hex \

EEPROM_IMAGE += \
Driveres.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Driveres.elf secondary-outputs

# Tool invocations
Driveres.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Driveres.map -mmcu=atmega32 -o "Driveres.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Driveres.lss: Driveres.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Driveres.elf  >"Driveres.lss"
	@echo 'Finished building: $@'
	@echo ' '

Driveres.hex: Driveres.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Driveres.elf  "Driveres.hex"
	@echo 'Finished building: $@'
	@echo ' '

Driveres.eep: Driveres.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Driveres.elf  "Driveres.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Driveres.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Driveres.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Driveres.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
