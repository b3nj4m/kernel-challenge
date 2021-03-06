#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Robbins <ben.robbins@gmail.com>");
MODULE_DESCRIPTION("Hello, World! kernel module");

static int __init hello_world_init(void) {
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}
 
static void __exit hello_world_exit(void) {
  printk(KERN_DEBUG "Goodbye World!\n");
}
 
module_init(hello_world_init);
module_exit(hello_world_exit);
