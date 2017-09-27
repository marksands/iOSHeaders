//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebAllowDenyPolicyListener.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SFWebAllowDenyPolicyListenerShim : NSObject <WebAllowDenyPolicyListener>
{
    CDUnknownBlockType _completionHandler;
    _Bool _completed;
}

- (void).cxx_destruct;
- (_Bool)shouldClearCache;
- (void)denyOnlyThisRequest;
- (void)deny;
- (void)allow;
- (void)_completeWithResult:(_Bool)arg1;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

