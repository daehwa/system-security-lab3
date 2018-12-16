#include <asm/uaccess.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/fs.h>
#include <linux/sched.h>
#include <linux/thread_info.h>

MODULE_LICENSE("GPL");
static int file_device_init(void) {

    struct file* f;
    const struct file_operations* fop;
    return 0;
}

static void file_device_exit(void) {
    return;
}

module_init(file_device_init);
module_exit(file_device_exit);

