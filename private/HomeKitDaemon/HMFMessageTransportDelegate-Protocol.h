//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMFMessage, HMFMessageTransport;

@protocol HMFMessageTransportDelegate <NSObject>
- (void)messageTransport:(HMFMessageTransport *)arg1 didReceiveMessage:(HMFMessage *)arg2;
@end

