#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
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

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi";

MODULE_ALIAS("dmi*:pn*P870DM*:");
MODULE_ALIAS("dmi*:pn*P7xxDM(-G)*:");
MODULE_ALIAS("dmi*:pn*P750ZM*:");
MODULE_ALIAS("dmi*:pn*P370SM-A*:");
MODULE_ALIAS("dmi*:pn*P17SM-A*:");
MODULE_ALIAS("dmi*:pn*P15SM1-A*:");
MODULE_ALIAS("dmi*:pn*P15SM-A*:");
MODULE_ALIAS("dmi*:pn*P17SM*:");
MODULE_ALIAS("dmi*:pn*P15SM*:");
MODULE_ALIAS("dmi*:pn*P150EM*:");
MODULE_ALIAS("dmi*:pn*P65_67RSRP*:");
MODULE_ALIAS("dmi*:pn*P65xRP*:");
MODULE_ALIAS("dmi*:pn*P15xEMx*:");
MODULE_ALIAS("dmi*:pn*P7xxDM2(-G)*:");
MODULE_ALIAS("dmi*:pn*P95_HP,HR,HQ*:");
MODULE_ALIAS("dmi*:pn*N85_N87*:");
MODULE_ALIAS("dmi*:pn*P775DM3(-G)*:");
MODULE_ALIAS("dmi*:pn*N85_N87*:");
MODULE_ALIAS("dmi*:pn*N85_N87,HJ,HJ1,HK1*:");
MODULE_ALIAS("dmi*:pn*Deimos/Phobos1x15S*:");
MODULE_ALIAS("dmi*:pn*P5ProSE*:");
MODULE_ALIAS("dmi*:pn*P5Pro*:");
MODULE_ALIAS("dmi*:pn*P7xxTM1*:");
MODULE_ALIAS("dmi*:svn*ECT*:rn*P750ZM*:");

MODULE_INFO(srcversion, "058579BE8B70EB7E8F8E89C");
