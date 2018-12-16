#include <linux/uaccess.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/unistd.h>
#include <asm/page.h>
#include <asm/highmem.h>
#include <linux/mm.h>

MODULE_LICENSE("GPL");

static int __init module2_init( void  ) {
    return 0;
}


void __exit module2_exit( void  ) {
	return;
}

module_init(module2_init);
module_exit(module2_exit);

