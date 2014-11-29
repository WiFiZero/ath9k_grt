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
	{ 0x38ccd568, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0x2a9581d2, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xda6d1ba4, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x12f9b834, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x16e17547, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x98710f14, __VMLINUX_SYMBOL_STR(_pcim_iomap_table) },
	{ 0x9efe4b22, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x1517e931, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x1f4a0cf0, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x6316c77e, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1b0b1a52, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe332ec8b, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x3cd0867a, __VMLINUX_SYMBOL_STR(_pci_set_master) },
	{ 0x509aa856, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xdad3ac0f, __VMLINUX_SYMBOL_STR(_pcie_capability_read_word) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc5a00c2b, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc741fc2, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_start) },
	{ 0x97630f43, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x8fe740cc, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x622622cd, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x6745a85a, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xd9270c8f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xe6bd25a4, __VMLINUX_SYMBOL_STR(relay_file_operations) },
	{ 0xb62ab5e3, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xc0fa2fc7, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x4e1d2576, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x432bfffd, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x32cf010d, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x60d57585, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xfadc213a, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xb543d26c, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x53ef4928, __VMLINUX_SYMBOL_STR(_pci_write_config_dword) },
	{ 0x6a54bca7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x3aef1b33, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xbc45ceb3, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x4f65cbf1, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x2dca2b1f, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x899d9173, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3f1f2673, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xde6a2556, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0xb27aca39, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x7483a4b, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xbb784897, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x52d9f598, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xf1369c4, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x9dcf965a, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x8e1ed134, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd463be10, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_apply_pattern) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf84f8e94, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbdf78515, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x13a10260, __VMLINUX_SYMBOL_STR(ath_gen_timer_free) },
	{ 0x231819af, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x60c65a2e, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x4e54810e, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x6c863d9, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x293d0278, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x1de3d193, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x71d23b78, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdc964853, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0xd526b210, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0xc0c042c0, __VMLINUX_SYMBOL_STR(_pci_get_drvdata) },
	{ 0x99fa394b, __VMLINUX_SYMBOL_STR(relay_switch_subbuf) },
	{ 0x19b39bf0, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6d47ef96, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xcf9dcd2a, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf32) },
	{ 0x778cab78, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x11f9e26c, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xd0f1d620, __VMLINUX_SYMBOL_STR(_pcie_capability_clear_word) },
	{ 0xdaefb8a1, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x92673c7d, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x25185789, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x5c67c976, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_wakeup) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8a931e00, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x7520950f, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x2f3bbadb, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x26112641, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4d708950, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xba38e43d, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xe6faa9ec, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xc0d0d907, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xbcf8a641, __VMLINUX_SYMBOL_STR(relay_close) },
	{ 0x89a58deb, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x265daf1b, __VMLINUX_SYMBOL_STR(_pci_set_drvdata) },
	{ 0x3a9cd2db, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x93248fef, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2c46e298, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xad1540f4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x89315264, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3d52a133, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x540760ee, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xf2a91a8d, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0x66de8f16, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xa2d092a2, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xf1637684, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x2d15177d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xbd0f7ebc, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xd7accd15, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x347a90b, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x1f666220, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x867effa0, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x815c317d, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x990d543, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_stop) },
	{ 0x49dd56cb, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x37ab5f2a, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xc9f00fb3, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1393ad33, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x215b2e40, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xcc759d9e, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1d1e7cee, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x706a489, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xc517dfa, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7585e9b5, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0x193b7ca5, __VMLINUX_SYMBOL_STR(_pci_unregister_driver) },
	{ 0x751fc5d8, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x16f5b7de, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4fe0fdf8, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x2cd298be, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x9fe57074, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xeaefedde, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x82191082, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x82b3babd, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x3823e3d6, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x150d1bc, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xd1c169a, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x8c4346bd, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xa3cdb550, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xcaa08f92, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0x61db4cab, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x6733dfe2, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xf1c86ce, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_enable) },
	{ 0xf15efc38, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd94c659f, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0x1fdaab96, __VMLINUX_SYMBOL_STR(_pcim_enable_device) },
	{ 0xafd68e01, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xd0474d35, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfa25dbb, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x91fc76f5, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_event_to_string) },
	{ 0x81241a62, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x4b0ca254, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x6ead7a92, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb77e8464, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0x6262c8aa, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb4d47ff1, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x639b1816, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3a6605d9, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0x8f43d3d4, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3eda6fbd, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xa04f0cdb, __VMLINUX_SYMBOL_STR(_pci_set_consistent_dma_mask) },
	{ 0x651dd1ba, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x37e9e3a0, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x3bd5a0a1, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x12dac5b3, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x7758ce3b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0x8a2e32ec, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xe60507dc, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x830138cb, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x57e35d23, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x25595de0, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x2b3297e6, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x11b1581d, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x8cf3a747, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7c1f80b1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x229cef0a, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xdf7deeeb, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xb2c5ac76, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x9e09d914, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x3b88f3a0, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7aa51956, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x4af6a4f0, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5e938c86, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x8b1a3e68, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xb3853188, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7d894389, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x8436e332, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xfac394ef, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x498af10d, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7e24fc71, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x77f559a6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xec702803, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xeaa37c21, __VMLINUX_SYMBOL_STR(_pci_read_config_dword) },
	{ 0x520482a, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xd72625cb, __VMLINUX_SYMBOL_STR(ieee80211_parse_p2p_noa) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd5125645, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x4444c21c, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9fc805c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0x6efa31c2, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x848ea53e, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x35a249ab, __VMLINUX_SYMBOL_STR(_pci_read_config_byte) },
	{ 0xb3dbc830, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x1c469229, __VMLINUX_SYMBOL_STR(_pci_set_dma_mask) },
	{ 0xc68f288d, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0x3f701978, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x7d18b1d9, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xf33670c2, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6ac1ae6c, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x6f84d055, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x6e9ff21a, __VMLINUX_SYMBOL_STR(_pci_write_config_byte) },
	{ 0xbb236d24, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfe57c25a, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xba5dfcd0, __VMLINUX_SYMBOL_STR(relay_open) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5f2cff9c, __VMLINUX_SYMBOL_STR(ath_gen_timer_alloc) },
	{ 0x4f5e9e81, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x574293ca, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc1379ae, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa43d3e1d, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x500f35b5, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x42e5c599, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x96c9a71a, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x1a546d34, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2217d929, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x269dc3cd, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1a627ddf, __VMLINUX_SYMBOL_STR(_pci_register_driver) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x74a0f548, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xd74a757b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf5528cfc, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xa1ddb670, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xa1d63eb8, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x77ea65c4, __VMLINUX_SYMBOL_STR(ieee80211_update_p2p_noa) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9cbc3e5b, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0xb2022b69, __VMLINUX_SYMBOL_STR(_pcim_iomap_regions) },
	{ 0xdf01986, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0x3817405b, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,grt_redirect,ath9k_common,cfg80211,ath";

MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");
MODULE_ALIAS("platform:qca953x_wmac");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BED70256C0E0D5426135E48");
