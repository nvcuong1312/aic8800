#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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

KSYMTAB_FUNC(get_fw_path, "", "");
KSYMTAB_FUNC(get_testmode, "", "");
KSYMTAB_FUNC(set_testmode, "", "");
KSYMTAB_FUNC(get_hardware_info, "", "");
KSYMTAB_FUNC(get_userconfig_xtal_cap, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_idx, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_ofst, "", "");
KSYMTAB_FUNC(aicwf_prealloc_txq_alloc, "", "");

SYMBOL_CRC(get_fw_path, 0x2986c864, "");
SYMBOL_CRC(get_testmode, 0x3a13f8bb, "");
SYMBOL_CRC(set_testmode, 0x81d11f06, "");
SYMBOL_CRC(get_hardware_info, 0xef93fea4, "");
SYMBOL_CRC(get_userconfig_xtal_cap, 0x12789d30, "");
SYMBOL_CRC(get_userconfig_txpwr_idx, 0x27e5f257, "");
SYMBOL_CRC(get_userconfig_txpwr_ofst, 0x377c82c7, "");
SYMBOL_CRC(aicwf_prealloc_txq_alloc, 0x6cbe61e4, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x9b70472b, "filp_open" },
	{ 0x913d6153, "usb_alloc_urb" },
	{ 0xddc67fa6, "usb_anchor_urb" },
	{ 0xcb7842d5, "usb_free_urb" },
	{ 0xa323e9a7, "skb_put" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd3402d66, "__kmalloc_noprof" },
	{ 0x9415a9e8, "consume_skb" },
	{ 0x0ca54fee, "_test_and_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc37335b0, "complete" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x49970de8, "finish_wait" },
	{ 0x2e438d6a, "usb_register_driver" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x9d669763, "memcpy" },
	{ 0x037a0cba, "kfree" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x637493f3, "__wake_up" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xadf29a41, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x01000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbbfc83b6, "__tracepoint_sched_set_state_tp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xcfd9054d, "usb_submit_urb" },
	{ 0x0800473f, "__cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x626b9804, "skb_pull" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb6c4379f, "system_percpu_wq" },
	{ 0x4a331da5, "vmalloc_noprof" },
	{ 0xac21f1ac, "kmem_cache_free" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x71c90087, "memcmp" },
	{ 0xb245bb1a, "kthread_stop" },
	{ 0x7e8c0e42, "usb_deregister" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x5f754e5a, "memset" },
	{ 0xe273a528, "kernel_read" },
	{ 0x597a658c, "skb_dequeue_tail" },
	{ 0xfac01629, "kmem_cache_alloc_noprof" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1debdd91, "__netdev_alloc_skb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x8e16026b, "usb_unanchor_urb" },
	{ 0xae14def2, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3ed7586e, "skb_unlink" },
	{ 0x9a4dc064, "kthread_create_on_node" },
	{ 0x999e8297, "vfree" },
	{ 0x3096be16, "names_cachep" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x03fba701, "wait_for_completion_killable_timeout" },
	{ 0x05f7f201, "filp_close" },
	{ 0x8205ec7f, "__kmalloc_cache_noprof" },
	{ 0xa01822b3, "usb_kill_urb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf952ee91, "send_sig" },
	{ 0x97255bdf, "strlen" },
	{ 0xf779af67, "dev_kfree_skb_any_reason" },
	{ 0x7360fbf7, "param_ops_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2fdbae1d, "kmalloc_caches" },
	{ 0x53bbefe1, "__trace_set_current_state" },
	{ 0x2fb2fd4b, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:vA69Cp8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4E417C2DE9076782B67B07A");
