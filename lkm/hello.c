#include <asm/uaccess.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/thread_info.h>
#include <linux/hrtimer.h>
#include <linux/ktime.h>

// This line lets the Makefile know that his module's license is GPL
// There are some kernel symbols (global variables or functions) that 
// Only the GPL modules can access, to comply with the GPL license.
MODULE_LICENSE("GPL");


// This is the function that we want kernel to call when we insert this module.
// We let the Makefile to deal with it at the end of this file.

static int hello_init(void) {

    int i = 0;
    // You can print some logs with functions like this.
    // There are much more variants but these two would be more than enough.
    // The logs will be printed to the "kernel ring buffer",
    // which you can check with the command "dmesg"
    //
    pr_info("Hello\n");
    pr_debug("Hello (%d)\n",i);

    return 0;
}

// This is the function that we want the kernel to call when this module
// is being removed. Though it's simply printing some messages at this moment,
// Later you may need to do some clean up to avoid crashing the kernel.

static void hello_exit(void) {

    pr_info("Bye\n");
    pr_debug("Bye\n");
    return;
}


// These two statements registers the two functions as something like
// constructor and destructor of this module.
module_init(hello_init);
module_exit(hello_exit);

