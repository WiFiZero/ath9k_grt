#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xcc65d1ac, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xb52af3cd, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x2f7c36b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x68ac809d, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x21e8b0c6, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fb7d225, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9e7745b0, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x308e3b3d, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x258183b5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xd604f66d, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xed403bb5, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x579ee14f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x68222be4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xed94600a, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xbdc494ee, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xa4f66064, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x38f92ff1, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x18e4ed79, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x7393541c, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xb2481c30, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xf0f4acb3, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5dca6911, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xada49ccf, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdca96084, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xee4e3d28, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xa0ecd01f, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x5e21143a, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xaf0d3053, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x4474c6c2, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xbb9ca457, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ea6996d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6b1c85fb, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xce78696e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x3669d163, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb7827051, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xa79860e6, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4bce7a33, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7ba6f396, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xba025087, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xd74047d6, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x4740fda4, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x33e7e3bc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf73546d1, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7ab1c1a3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x2f3960d5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xff92e29c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x6d39bcdb, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x85cf6df2, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x4420fcb4, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xa799c6b4, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x82783356, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x98dd1db1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4c1182cb, __VMLINUX_SYMBOL_STR(bitmap_scnprintf) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa82a5eb8, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xe88929fa, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xa10c6f21, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x5c77406c, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x9cf94504, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2e12f5e5, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x627eaab3, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x8ed7a69c, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4b0778b7, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x1faf4bb4, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xe9b6e96e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x24e829d0, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd40211b1, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x77f62b28, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xe056082a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xf5a8b5b3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3e62dcee, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0x2174b794, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb79c5eaf, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd8db6059, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x7486f88d, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xfc76caa5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7842af6f, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xd2db6121, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xc4e54872, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xdde90289, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x1586ea2f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd5d52b50, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x521414ec, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x68ab69d4, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x3892e21a, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xcd13b66b, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x84bc73c, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xfc5abd1d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x3dd0962, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1333e3c0, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e53258, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdef01f2d, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xe5495276, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x922fa169, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x5ec34bc8, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd37bada7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12a425d3, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa535c61e, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xe228631b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x43224639, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x6ed8ca0a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x565aa423, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x44335ef3, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0xa6a439f2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6ab776fd, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7768e72, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1b6773d7, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6c2ec4b8, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xddfa03c5, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x61dc5785, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3C7A1F403C2EA2A62A60BD4");
