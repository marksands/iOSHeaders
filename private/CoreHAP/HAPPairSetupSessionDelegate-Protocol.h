//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HAPPairSetupSession, HAPPairingIdentity, NSData, NSError;

@protocol HAPPairSetupSessionDelegate <NSObject>
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveSetupExchangeData:(NSData *)arg2;
- (_Bool)pairSetupSession:(HAPPairSetupSession *)arg1 didPairWithPeer:(HAPPairingIdentity *)arg2 error:(id *)arg3;
- (HAPPairingIdentity *)pairSetupSession:(HAPPairSetupSession *)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;

@optional
- (void)pairSetupSession:(HAPPairSetupSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)pairSetupSessionDidStart:(HAPPairSetupSession *)arg1;
@end

