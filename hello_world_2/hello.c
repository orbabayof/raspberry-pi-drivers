#include "linux/module.h"
#include "linux/init.h"


static int init_handle(void);
static void exit_handle(void);

static int __init init_handle(void)
{
  printk("init\n");
  return 0;
}

static void __exit exit_handle(void)
{
  printk("exit\n");
}

module_init(init_handle);
module_exit(exit_handle);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Or Babayof");
MODULE_DESCRIPTION("hello_world_2");



