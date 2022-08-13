#ifndef LIB_OS_OODA_H
#define LIB_OS_OODA_H

void lib_os_ooda_init( void );
void lib_os_ooda_start( void );
void lib_os_ooda_end( void );

#ifdef DEPLOYMENT_OPTION_RUN_UNIT_TESTS
void run_unit_tests__lib_os_ooda( void );
#endif /* DEPLOYMENT_OPTION_RUN_UNIT_TESTS */

#endif /* LIB_OS_OODA_H */
