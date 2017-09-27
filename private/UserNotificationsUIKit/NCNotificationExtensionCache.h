//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject
{
    struct NSMutableDictionary *_extensions;
}

@property(copy, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (id)_extensionMatchingSection:(id)arg1 category:(id)arg2;
- (id)_customSectionIdentifierForExtension:(id)arg1;
- (id)_categoriesForExtension:(id)arg1;
- (struct NSMutableDictionary *)_sectionDictForSection:(id)arg1;
- (void)_removeAllExtensions;
- (void)_addExtension:(id)arg1;
- (void)registerExtensions:(id)arg1;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)init;

@end

