//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class CLNotifierData;
@protocol CLNotifierServiceClientProtocol;

@protocol CLNotifierServiceProtocol <CLIntersiloServiceProtocol>
- (void)forget:(byref id <CLNotifierServiceClientProtocol>)arg1;
- (void)unregister:(byref id <CLNotifierServiceClientProtocol>)arg1 forNotification:(int)arg2;
- (void)register:(byref id <CLNotifierServiceClientProtocol>)arg1 forNotification:(int)arg2 registrationInfo:(CLNotifierData *)arg3;
@end
