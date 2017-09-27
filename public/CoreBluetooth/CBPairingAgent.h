//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBPairingAgent : NSObject
{
    _Bool _useOOBMode;
    id <CBPairingAgentDelegate> _delegate;
    id <CBPairingAgentParentDelegate> _parentManager;
}

@property(nonatomic) __weak id <CBPairingAgentParentDelegate> parentManager; // @synthesize parentManager=_parentManager;
@property(nonatomic) _Bool useOOBMode; // @synthesize useOOBMode=_useOOBMode;
@property(nonatomic) __weak id <CBPairingAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2;
- (void)handleUnpaired:(id)arg1;
- (void)handlePairingCompleted:(id)arg1;
- (void)handlePairingRequested:(id)arg1;
- (void)setOOBPairingEnabled:(_Bool)arg1 forPeer:(id)arg2;
- (id)retrieveOOBDataForPeer:(id)arg1;
- (void)respondToPairingRequest:(id)arg1 type:(long long)arg2 accept:(_Bool)arg3 data:(id)arg4;
- (void)unpairPeer:(id)arg1;
- (void)pairPeer:(id)arg1 useMITM:(_Bool)arg2;
- (void)pairPeer:(id)arg1;
- (id)retrievePairedPeers;
- (_Bool)isPeerCloudPaired:(id)arg1;
- (_Bool)isPeerPaired:(id)arg1;
- (void)updateRegistration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithParentManager:(id)arg1;

@end

