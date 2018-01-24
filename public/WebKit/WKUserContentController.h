//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "WKObject.h"

@class NSArray, NSString;

@interface WKUserContentController : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> _userContentControllerProxy;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) struct Object *_apiObject;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)removeAllContentRuleLists;
- (void)removeContentRuleList:(id)arg1;
- (void)addContentRuleList:(id)arg1;
- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *userScripts;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;
- (void)_removeAllUserStyleSheetsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeAllUserStyleSheets;
- (void)_removeUserStyleSheet:(id)arg1;
- (void)_addUserStyleSheet:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_userStyleSheets;
- (void)_removeAllUserContentFilters;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_addUserContentFilter:(id)arg1;
- (void)_removeAllUserScriptsAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeUserScript:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

