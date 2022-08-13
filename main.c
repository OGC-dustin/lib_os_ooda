/*
 * OGC Engineering
 * Observe, Orient, Decide, Act ( OODA )
 * generic main function
 */

#include "app.h"
#include "lib_os_ooda.h"
#include "hal.h"

int main( void )
{
    lib_os_ooda_init();
    hal_init();
    app_init();
    lib_os_ooda_start();
    lib_os_ooda_end();
    return ( 0U );
}
