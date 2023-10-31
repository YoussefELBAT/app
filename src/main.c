/*
 * Copyright (c) 2023 Sycon 
 *
 * SPDX-License-Identifier: Apache-2.0
 */



/*    
*  This file is used to define the threads, their priority and their parameters
*
*
*/

/* Zone of inclusion of default libraries */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <string.h>


/* ZONE OF inclusion of our libraries */

#ifdef CONFIG_LIBRARY
#include "library.h"
#endif


/*  ZONE OF DEFINITION OF STACKSIZE  */


/*  ZONE OF DEFINITION OF PRIORITIES  */




#define SLEEP_TIME_MS  1000



void main(void)
{
while(1){


    printk("____________________SALEM et Youssef _______________________\n\r");



}
  

     k_msleep(SLEEP_TIME_MS); 
}





