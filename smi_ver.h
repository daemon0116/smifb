#ifndef __SMI_VERSION_H__
#define __SMI_VERSION_H__

#include <linux/version.h>
#ifdef RHEL_MAJOR
#undef LINUX_VERSION_CODE
#if RHEL_MAJOR==8
#if RHEL_MINOR==1
#define LINUX_VERSION_CODE 0x050115//5.1.21 
#elif RHEL_MINOR==2
#define LINUX_VERSION_CODE 0x050300//5.3.0
#elif RHEL_MINOR==3
#define LINUX_VERSION_CODE 0x050613//5.6.19 
#elif RHEL_MINOR==4
#define LINUX_VERSION_CODE 0x050900//5.9.0
#elif RHEL_MINOR==5
#define LINUX_VERSION_CODE 0x050c0e//5.12.14 
#elif RHEL_MINOR==6
#define LINUX_VERSION_CODE 0x050e15//5.14.21
#elif RHEL_MINOR==7
#define LINUX_VERSION_CODE 0x051200//5.18  
#elif RHEL_MINOR==8
#define LINUX_VERSION_CODE 0x060000//6.0 
#elif RHEL_MINOR==9
#define LINUX_VERSION_CODE 0x060300//6.3 
#endif
#endif//RHEL_MAJOR==8

#if RHEL_MAJOR==9
#if RHEL_MINOR==0
#define LINUX_VERSION_CODE 0x050e00//5.14 
#elif RHEL_MINOR==1
#define LINUX_VERSION_CODE 0x051200//5.18  
#elif RHEL_MINOR==2
#define LINUX_VERSION_CODE 0x060008//6.0.8  
#elif RHEL_MINOR==3
#define LINUX_VERSION_CODE 0x060300//6.3.0
#endif
#endif//RHEL_MAJOR==9

#endif//RHEL_MAJOR

#endif
