/*
 * TAS571x amplifier audio driver
 *
 * Copyright (C) 2015 Google, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _TAS571X_H
#define _TAS571X_H

#include <sound/pcm.h>

#define TAS571X_ID_5711			0x5711
#define TAS571X_ID_5717			0x5717
#define TAS571X_ID_5719			0x5719

/* device registers */
#define TAS571X_SDI_REG			0x04
#define TAS571X_SDI_FMT_MASK		0x0f

#define TAS571X_SYS_CTRL_2_REG		0x05
#define TAS571X_SYS_CTRL_2_SDN_MASK	0x40

#define TAS571X_SOFT_MUTE_REG		0x06
#define TAS571X_SOFT_MUTE_CH_MASK	0x07

#define TAS571X_MVOL_REG		0x07
#define TAS571X_CH1_VOL_REG		0x08
#define TAS571X_CH2_VOL_REG		0x09

#define TAS571X_OSC_TRIM_REG		0x1b

#endif /* _TAS571X_H */
