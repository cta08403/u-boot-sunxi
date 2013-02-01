#include <common.h>

#ifdef CONFIG_DISPLAY_BOARDINFO
int checkboard(void) {
 
//#define CONFIG_AUTOBOOT_KEYED 1
//#define CONFIG_AUTOBOOT_PROMPT "Please type ZZZ to stop auto-boot"
//#define CONFIG_AUTOBOOT_STOP_STR "ZZZ"

       //setenv("bootdelay", "0");
       puts("Board: PengPod 700\n");
       //puts("Your changes have an effect2\n");
       return 0;
}
#endif
