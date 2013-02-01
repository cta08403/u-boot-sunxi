#include <common.h>

#ifdef CONFIG_DISPLAY_BOARDINFO
int checkboard(void) {

       puts("Board: PengPod 713\n");
       return 0;
}
#endif
