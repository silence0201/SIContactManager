#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "SIContachManager.h"
#import "SIContact.h"
#import "SIContactAddress.h"
#import "SIContactBirthday.h"
#import "SIContactEmail.h"
#import "SIContactMessage.h"
#import "SIContactPhone.h"
#import "SIContactRelation.h"
#import "SIContactSocialProfile.h"
#import "SIContactUrlAddress.h"
#import "SISectionContact.h"

FOUNDATION_EXPORT double SIContactManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char SIContactManagerVersionString[];

