//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSServiceFacility.h"

@interface UISApplicationSupportServer : FBSServiceFacility
{
    id <UISApplicationSupportServerDelegate> _delegate;
    struct {
        unsigned int delegateRequestPasscodeUnlockUI:1;
        unsigned int delegateInitialDisplayContextForClient:1;
        unsigned int delegateScreenEdgeInfo:1;
    } _delegateFlags;
}

@property(nonatomic) __weak id <UISApplicationSupportServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMessage_displayEdgeInfoForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_initialDisplayContextForClient:(id)arg1 withMessage:(id)arg2;
- (void)_handleMessage_requestPasscodeUnlockUIForClient:(id)arg1 withMessage:(id)arg2;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (_Bool)shouldAllowClientConnection:(id)arg1;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;

@end

