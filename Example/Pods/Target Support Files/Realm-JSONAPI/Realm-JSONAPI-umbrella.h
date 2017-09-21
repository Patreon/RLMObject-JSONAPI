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

#import "JSONAPIParserUtilities.h"
#import "JSONAPIResourceRegistry.h"
#import "JSONAPIURLUtilities.h"
#import "NSDate+ISO8601.h"
#import "NSDictionary+URLEncoding.h"
#import "RLMObject+JSONAPI.h"
#import "RLMObject+JSONAPIParser.h"
#import "RLMObject+JSONAPIResource.h"
#import "RLMObject+JSONAPISerializer.h"
#import "RLMObject+JSONAPIURL.h"
#import "RLMObjectWithSubclass.h"

FOUNDATION_EXPORT double Realm_JSONAPIVersionNumber;
FOUNDATION_EXPORT const unsigned char Realm_JSONAPIVersionString[];

