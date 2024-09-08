################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DaysOfChristmas_smallCode.cpp \
../src/DaysOfChristmas_switch.cpp \
../src/assign3.cpp 

CPP_DEPS += \
./src/DaysOfChristmas_smallCode.d \
./src/DaysOfChristmas_switch.d \
./src/assign3.d 

OBJS += \
./src/DaysOfChristmas_smallCode.o \
./src/DaysOfChristmas_switch.o \
./src/assign3.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/DaysOfChristmas_smallCode.d ./src/DaysOfChristmas_smallCode.o ./src/DaysOfChristmas_switch.d ./src/DaysOfChristmas_switch.o ./src/assign3.d ./src/assign3.o

.PHONY: clean-src

