#ifndef __ZQRESOURCE_H__
#define __ZQRESOURCE_H__

#define __N2S2__(x) #x
#define __N2S__(x) __N2S2__(x)
#define ZQ_PRODUCT_NAME			"CRM_A3Message.dll" " " __N2S__(ZQ_PRODUCT_VER_MAJOR) "." __N2S__(ZQ_PRODUCT_VER_MINOR) "." __N2S__(ZQ_PRODUCT_VER_PATCH) "." __N2S__(ZQ_PRODUCT_VER_BUILD)
#define ZQ_PRODUCT_NAME_SHORT	"CRM_A3Message" " " __N2S__(ZQ_PRODUCT_VER_MAJOR) "." __N2S__(ZQ_PRODUCT_VER_MINOR)

#include "../../../build/ZQSrcTreeVer.h" // defines the version number of the source tree

#define ZQ_TIANSHAN_VERSION		"TianShan " __N2S__(ZQ_PRODUCT_VER_MAJOR) "." __N2S__(ZQ_PRODUCT_VER_MINOR)
#define ZQ_FILE_DESCRIPTION     "CRM_A3Message.dll"
#define ZQ_INTERNAL_FILE_NAME   "CRM_A3Message"
#define ZQ_FILE_NAME            "CRM_A3Message.dll"
#define ZQ_PRODUCT_COMMENT      ZQ_PRODUCT_NAME

#endif // __ZQRESOURCE_H__

