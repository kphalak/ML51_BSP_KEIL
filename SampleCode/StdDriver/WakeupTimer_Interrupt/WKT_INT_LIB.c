/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2020 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

/************************************************************************************************************/
/*  File Function: ML51 Wakeup timer demo code with interrupt                                               */
/************************************************************************************************************/

#include "ML51.h"


/************************************************************************************************************
*    Main function 
************************************************************************************************************/
void main (void)
{
   
    P32_PUSHPULL_MODE;

/*
/*  WKT initial  check wkt interrupt vector in wkt.c  
*/

//    WKT_AutoReload_Interrupt_Initial_MS(LIRC,200);   /* WKT delay 200 ms */
    WKT_AutoReload_Interrupt_Initial_S(LIRC,2);      /* WKT delay 2s */
    ENABLE_GLOBAL_INTERRUPT;

    while(1);

}

