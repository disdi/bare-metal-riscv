/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <ctype.h>
#include <stdnoreturn.h>
#include "pico/stdlib.h"

int main() {
	stdio_init_all();
	printf("RISC-V from RPI\n");
}