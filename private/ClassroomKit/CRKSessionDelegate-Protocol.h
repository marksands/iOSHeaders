//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CATTransport, CRKSession, NSArray;

@protocol CRKSessionDelegate <NSObject>
- (void)sessionDidInvalidate:(CRKSession *)arg1;
- (void)sessionDidDisconnect:(CRKSession *)arg1;
- (void)sessionDidLoseBeacon:(CRKSession *)arg1;
- (void)session:(CRKSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)session:(CRKSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (NSArray *)trustedAnchorCertificatesForSession:(CRKSession *)arg1;
- (id)clientIdentityForSession:(CRKSession *)arg1;
- (void)sessionDidBecomeNotConnectable:(CRKSession *)arg1;
- (void)sessionDidBecomeConnectable:(CRKSession *)arg1;
@end

