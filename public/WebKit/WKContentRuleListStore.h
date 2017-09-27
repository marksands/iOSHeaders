//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject>
{
    struct ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;
}

+ (id)storeWithURL:(id)arg1;
+ (id)defaultStore;
+ (id)storeWithURLAndLegacyFilename:(id)arg1;
+ (id)defaultStoreWithLegacyFilename;
@property(readonly) struct Object *_apiObject;
- (void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAvailableContentRuleListIdentifiers:(CDUnknownBlockType)arg1;
- (void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 releasesArgument:(_Bool)arg4;
- (void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateContentRuleListVersionForIdentifier:(id)arg1;
- (void)_removeAllContentRuleLists;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

