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
	{ 0xb89a34a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2a9581d2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x12f9b834, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x16e17547, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9efe4b22, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x1517e931, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x6316c77e, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1b0b1a52, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd46a1c3e, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x97630f43, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x8fe740cc, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x622622cd, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x6745a85a, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xd9270c8f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x432bfffd, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x32cf010d, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xfadc213a, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xb543d26c, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x4f65cbf1, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x2dca2b1f, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb27aca39, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x7483a4b, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xbb784897, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe6cf7f06, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9dcf965a, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x8e1ed134, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf84f8e94, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdf78515, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x231819af, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x60c65a2e, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x4e54810e, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x6c863d9, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x293d0278, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1de3d193, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x71d23b78, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6d47ef96, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x778cab78, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x11f9e26c, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xcd4f8f87, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xfa7b0206, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x92673c7d, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x25185789, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x26112641, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4d708950, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xba38e43d, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x89a58deb, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x3a9cd2db, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x93248fef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5fb86d2d, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xad1540f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3d52a133, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x66de8f16, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xa2d092a2, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xf1637684, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x2d15177d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xbd0f7ebc, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xd7accd15, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x347a90b, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x1f666220, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x867effa0, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x6881632a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x815c317d, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x37ab5f2a, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xc9f00fb3, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1393ad33, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x215b2e40, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcc759d9e, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4c1182cb, __VMLINUX_SYMBOL_STR(bitmap_scnprintf) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x751fc5d8, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0x16f5b7de, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2cd298be, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x9fe57074, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x82191082, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x3823e3d6, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x150d1bc, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xd1c169a, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xa3cdb550, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6733dfe2, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xf15efc38, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd94c659f, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0xf616dc6d, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xafd68e01, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xd0474d35, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x96ba028e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa25dbb, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x4b0ca254, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x6ead7a92, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x3abb2b8c, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xb77e8464, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb4d47ff1, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa384d563, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x5236d502, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x8f43d3d4, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3eda6fbd, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x830138cb, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x2b3297e6, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xc58e39c4, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x7c1f80b1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdf7deeeb, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x9e09d914, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x3b88f3a0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4af6a4f0, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8b1a3e68, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xb3853188, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xd51289c1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xfac394ef, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x7e24fc71, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xec702803, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x77f559a6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x520482a, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd5125645, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4444c21c, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xb96a25f3, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x9fc805c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x3f701978, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xf33670c2, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xaae5c78b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6390b830, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6f84d055, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xbb236d24, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xfe57c25a, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x7a5557e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x6216e9a3, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4f5e9e81, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xa43d3e1d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x96c9a71a, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x1a546d34, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x74a0f548, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x2860968c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd74a757b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf5528cfc, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x90a7bfe6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xf177da0a, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
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
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1482513D9690373C026C3A8");
