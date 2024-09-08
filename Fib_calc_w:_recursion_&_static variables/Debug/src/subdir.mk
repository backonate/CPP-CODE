################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/assign2.cpp \
../src/fibonacci.cpp 

CPP_DEPS += \
./src/assign2.d \
./src/fibonacci.d 

OBJS += \
./src/assign2.o \
./src/fibonacci.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++2a -I/home/xubuntu/Library/Frameworks/BigNumber/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/assign2.d ./src/assign2.o ./src/fibonacci.d ./src/fibonacci.o

.PHONY: clean-src

