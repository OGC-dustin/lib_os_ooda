/*
 * OGC Engineering
 * Observe, Orient, Decide, Act ( OODA )
 * library
 */

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "lib_os_ooda.h"
#include "hal.h"


void lib_os_ooda_init( void )
{
    return;
}

void lib_os_ooda_start( void )
{
    while ( true )
    {

    }
    return;
}

void lib_os_ooda_end( void )
{
    /* TODO: report any statistics and clean up before continuing oeprations */
}

#ifdef DEPLOYMENT_OPTION_RUN_UNIT_TESTS
void run_unit_tests__lib_os_ooda( void )
{
    /* TODO: add setup, call, and response testing for all functions */
}
#endif /* DEPLOYMENT_OPTION_RUN_UNIT_TESTS */
