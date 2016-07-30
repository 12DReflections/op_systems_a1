/*  
 *  hello_kernel.c - The simplest kernel module.
*   Source: http://www.tldp.org/LDP/lkmpg/2.6/html/lkmpg.html#AEN1046
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

int init_module(void)
{
	printk(KERN_INFO "Hello Kernel 1.\n");

	/* 
	 * A non 0 return means init_module failed; module can't be loaded. 
	 */
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world 1.\n");
}
