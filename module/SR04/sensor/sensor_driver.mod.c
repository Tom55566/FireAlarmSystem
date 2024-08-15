#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcaec5711, "module_layout" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xf0462214, "class_destroy" },
	{ 0x78770421, "device_destroy" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4d64ff, "gpiod_to_irq" },
	{ 0x3abd11c6, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5d3eb04, "device_create" },
	{ 0x84e8af7f, "__class_create" },
	{ 0x615c316, "__register_chrdev" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf1af98fe, "gpiod_direction_output_raw" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6b9e430b, "gpiod_get_raw_value" },
	{ 0x8bfb4418, "gpio_to_desc" },
	{ 0xc5850110, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "460FBF3D461F31914AF4E14");
