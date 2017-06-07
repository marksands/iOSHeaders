//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSArray;
@protocol SYChange;

@protocol MTSyncDataModel <NSObject>
- (void)handleSentChanges:(NSArray *)arg1;
- (NSArray *)everything;
- (NSArray *)changes;
- (void)handleIncomingReset;
- (void)handleIncomingDelete:(id <SYChange>)arg1;
- (void)handleIncomingUpdate:(id <SYChange>)arg1;
- (void)handleIncomingAdd:(id <SYChange>)arg1;
- (long long)supportedDataClasses;
@end

