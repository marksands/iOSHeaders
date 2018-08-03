//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import "SFAirDropClassroomTransferManagerProtocol.h"

@class NSString;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>
{
    id <SFAirDropClassroomTransferDelegate> _delegate;
}

@property(nonatomic) __weak id <SFAirDropClassroomTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)activate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

