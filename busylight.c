#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>

MODULE_AUTHOR("Bartosz Bartyzel <barbart1@gmail.com>");
MODULE_DESCRIPTION("Busylight UC Omega Linux driver");
MODULE_LICENSE("GPL");

static int __init busylight_init(void) {
	printk(KERN_INFO "Busylight driver loaded\n");
	return 0;
}

static void __exit busylight_exit(void) {
	printk(KERN_INFO "Busylight driver unloaded\n");
}

module_init(busylight_init);
module_exit(busylight_exit);
