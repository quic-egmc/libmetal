/*
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	zephyr/poll.c
 * @brief	Zephyr poll handling.
 */

#include <metal/io.h>
#include <metal/sys.h>

#include <sys/arch_interface.h>

/**
 * @brief poll function until some event happens
 */
void metal_weak metal_generic_default_poll(void)
{
	arch_cpu_idle();
}
