//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString, _WKAutomationSessionConfiguration;

@interface _WKAutomationSession : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebAutomationSession> _session;
    struct RetainPtr<_WKAutomationSessionConfiguration> _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic, getter=isSimulatingUserInteraction) _Bool simulatingUserInteraction;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property(copy, nonatomic) NSString *sessionIdentifier;
@property(nonatomic) __weak id <_WKAutomationSessionDelegate> delegate;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

