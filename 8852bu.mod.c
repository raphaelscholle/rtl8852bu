#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

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
	{ 0xf704969, "module_layout" },
	{ 0x17341d99, "PDE_DATA" },
	{ 0x2a5df4af, "dev_alloc_name" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x254928dc, "__cfg80211_alloc_event_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x45f788d2, "unregister_netdev" },
	{ 0x54e36067, "cfg80211_ch_switch_started_notify" },
	{ 0x1dce120e, "skb_dequeue" },
	{ 0x7c797b6, "kmem_cache_alloc_trace" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xea55bc79, "skb_push" },
	{ 0xe6ee620, "__pskb_pull_tail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcaabc7ca, "cfg80211_get_bss" },
	{ 0x2bb9762c, "skb_trim" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x978ed33e, "usb_put_dev" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1742abed, "wiphy_free" },
	{ 0x21a33afb, "wiphy_register" },
	{ 0x92997ed8, "_printk" },
	{ 0x1cb07b17, "kernel_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21a4b9b0, "usb_get_dev" },
	{ 0x51e08620, "param_ops_uint" },
	{ 0x40a1aaac, "netif_carrier_on" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xbe503d2d, "seq_read" },
	{ 0x5486d56, "usb_alloc_coherent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xa17316e3, "skb_clone" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x408bdc34, "__netdev_alloc_skb" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x4c55f5ef, "pv_ops" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2e76dd85, "cfg80211_connect_done" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4290976a, "cfg80211_external_auth_request" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x97c32d92, "skb_copy" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9166fada, "strncpy" },
	{ 0xa48ab2b9, "cfg80211_michael_mic_failure" },
	{ 0x66a9afcc, "alloc_etherdev_mqs" },
	{ 0xba51479d, "__cfg80211_send_event_skb" },
	{ 0xbd8582e0, "skb_queue_tail" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x999e8297, "vfree" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xdaef3116, "remove_proc_entry" },
	{ 0xd731cdd9, "kmalloc_caches" },
	{ 0x533a83c6, "napi_enable" },
	{ 0xf016ac3, "cfg80211_disconnected" },
	{ 0xdce9f68d, "param_ops_charp" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc544c8ee, "cfg80211_rx_mgmt_khz" },
	{ 0x220925f6, "usb_alloc_urb" },
	{ 0x6b6e9230, "usb_free_urb" },
	{ 0x58a4e5fe, "ethtool_op_get_link" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27d06596, "seq_open" },
	{ 0xec42670, "cfg80211_unlink_bss" },
	{ 0x9106a75f, "kfree_skb_list" },
	{ 0xf09937a3, "__napi_schedule" },
	{ 0x148653, "vsnprintf" },
	{ 0x4417a589, "__dev_kfree_skb_any" },
	{ 0xa11a85dc, "param_array_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6c0ff9b, "cfg80211_put_bss" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9898d6aa, "netif_tx_wake_queue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x157d8ff7, "unregister_netdevice_queue" },
	{ 0xfacd8c28, "nla_put" },
	{ 0x359f0950, "single_release" },
	{ 0x519dd77a, "kthread_create_on_node" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x54f0e2ac, "skb_pull" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xb6862311, "usb_control_msg" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5e7d3f3, "wake_up_process" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xe17e5ac2, "cfg80211_remain_on_channel_expired" },
	{ 0xb08275c2, "eth_type_trans" },
	{ 0xd100d473, "wiphy_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb7f634e0, "usb_deregister" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x37af9a98, "usb_submit_urb" },
	{ 0xc7937ded, "device_init_wakeup" },
	{ 0x43fc4d7e, "netif_receive_skb" },
	{ 0x56470118, "__warn_printk" },
	{ 0x17dd1f39, "netif_tx_stop_all_queues" },
	{ 0x71ac5e55, "netif_rx" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xb920480, "usb_autopm_put_interface" },
	{ 0x75911ce0, "cfg80211_mgmt_tx_status" },
	{ 0x7f17f471, "cfg80211_roamed" },
	{ 0x1fdef34d, "kill_pid" },
	{ 0x62a1aae1, "filp_close" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xbe282964, "napi_gro_receive" },
	{ 0x67468117, "usb_autopm_get_interface" },
	{ 0xf0e57402, "wiphy_new_nm" },
	{ 0xcf2a6966, "up" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x21e8379e, "cfg80211_new_sta" },
	{ 0xbbdf1ef8, "__cfg80211_alloc_reply_skb" },
	{ 0xe13d8d5, "cfg80211_scan_done" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x8765dc84, "__netif_napi_del" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f63b77a, "usb_register_driver" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xfb578fc5, "memset" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf7dddfea, "netif_napi_add" },
	{ 0xbae137f0, "regulatory_set_wiphy_regd_sync" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x58b6ca1d, "cfg80211_inform_bss_frame_data" },
	{ 0xed361e40, "cfg80211_ready_on_channel" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb23734c0, "register_netdevice" },
	{ 0x2aa20293, "kthread_stop" },
	{ 0xd78b86c9, "seq_printf" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5d053422, "single_open" },
	{ 0xf4102303, "nla_put_nohdr" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x25aedfb3, "filp_open" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x10523fe2, "kernel_read" },
	{ 0xe03b84e4, "ieee80211_get_channel_khz" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3d9d351b, "seq_lseek" },
	{ 0xfc8b7ff6, "free_netdev" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x4423ce56, "flush_signals" },
	{ 0x231c7c88, "cfg80211_ch_switch_notify" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x2e85cc64, "proc_mkdir_data" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x760a0f4f, "yield" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xf4c88f8f, "cfg80211_ibss_joined" },
	{ 0xb4b1b04b, "single_open_size" },
	{ 0x89056038, "netdev_set_default_ethtool_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x18554f24, "current_task" },
	{ 0xb946c955, "napi_complete_done" },
	{ 0xf247fba3, "param_ops_int" },
	{ 0x65e5ba3d, "skb_copy_bits" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9ad827c2, "proc_create_data" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae9b3820, "usb_kill_urb" },
	{ 0xa916b694, "strnlen" },
	{ 0xc727161f, "cfg80211_vendor_cmd_reply" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdb0f1622, "seq_release" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd96b58e2, "netif_carrier_off" },
	{ 0x5a921311, "strncmp" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa21071e2, "init_net" },
	{ 0x349cba85, "strchr" },
	{ 0xb6bb7c44, "kern_path" },
	{ 0x2facf335, "find_vpid" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x3978d7a7, "proc_get_parent_data" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xd77689b1, "dev_get_by_name" },
	{ 0x7efaf36f, "cfg80211_del_sta_sinfo" },
	{ 0x3273d6b6, "napi_schedule_prep" },
	{ 0x5a1f8d90, "skb_put" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xb0e602eb, "memmove" },
	{ 0x56860d2, "register_netdev" },
	{ 0x53a7536d, "usb_free_coherent" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0x4dc25fe9, "napi_disable" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x1000e51, "schedule" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDApB832d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB83Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB852d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB85Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApA85Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0586p3428d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0B05p1A62d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "33135F45304E16E335447B0");