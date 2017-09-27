//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLTelemetryController.h"

@class NSString;

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>
{
}

- (void)captureItemRemoval:(id)arg1;
- (void)captureItemView:(id)arg1;
- (void)captureItemAddition:(id)arg1;
- (void)captureClientRemoval:(id)arg1;
- (void)captureClientAddition:(id)arg1;
- (void)captureGroupRemoval:(id)arg1;
- (void)captureGroupAddition:(id)arg1;
- (void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

