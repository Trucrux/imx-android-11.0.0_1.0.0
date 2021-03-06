/*
 * Copyright 2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

/* SPI instance name mapping */
#define LPSPI0 DMA__LPSPI0
#define LPSPI1 DMA__LPSPI1
#define LPSPI2 DMA__LPSPI2
#define LPSPI3 DMA__LPSPI3

/* Driver name mapping. */
#define RTE_SPI0        0
#define RTE_SPI0_DMA_EN 0
#define RTE_SPI1        0
#define RTE_SPI1_DMA_EN 0
#define RTE_SPI2        1
#define RTE_SPI2_DMA_EN 1
#define RTE_SPI3        0
#define RTE_SPI3_DMA_EN 0

/* SPI configuration. */
#define RTE_SPI0_DMA_TX_CH       1
#define RTE_SPI0_DMA_TX_PERI_SEL 1
#define RTE_SPI0_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_SPI0_DMA_RX_CH       0
#define RTE_SPI0_DMA_RX_PERI_SEL 0
#define RTE_SPI0_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_SPI1_DMA_TX_CH       3
#define RTE_SPI1_DMA_TX_PERI_SEL 3
#define RTE_SPI1_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_SPI1_DMA_RX_CH       2
#define RTE_SPI1_DMA_RX_PERI_SEL 2
#define RTE_SPI1_DMA_RX_DMA_BASE DMA__EDMA0

#define RTE_SPI2_PCS_TO_SCK_DELAY       1000
#define RTE_SPI2_SCK_TO_PSC_DELAY       1000
#define RTE_SPI2_BETWEEN_TRANSFER_DELAY 1000
#define RTE_SPI2_SLAVE_PCS_PIN_SEL      kLPSPI_SlavePcs0
#define RTE_SPI2_DMA_TX_CH              5
#define RTE_SPI2_DMA_TX_PERI_SEL        5
#define RTE_SPI2_DMA_TX_DMA_BASE        DMA__EDMA0
#define RTE_SPI2_DMA_RX_CH              4
#define RTE_SPI2_DMA_RX_PERI_SEL        4
#define RTE_SPI2_DMA_RX_DMA_BASE        DMA__EDMA0

#define RTE_SPI3_DMA_TX_CH       7
#define RTE_SPI3_DMA_TX_PERI_SEL 7
#define RTE_SPI3_DMA_TX_DMA_BASE DMA__EDMA0
#define RTE_SPI3_DMA_RX_CH       6
#define RTE_SPI3_DMA_RX_PERI_SEL 6
#define RTE_SPI3_DMA_RX_DMA_BASE DMA__EDMA0

#endif /* __RTE_DEVICE_H */
