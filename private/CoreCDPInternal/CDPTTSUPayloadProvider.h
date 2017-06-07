//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCPairingChannel, NSString;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCPairingChannel *_pairingChannel;
    _Bool _complete;
}

- (void).cxx_destruct;
- (_Bool)requiresInitialSync;
- (_Bool)supportsInteractiveAuth;
- (_Bool)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id *)arg2;
- (id)initiatingPayload:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

