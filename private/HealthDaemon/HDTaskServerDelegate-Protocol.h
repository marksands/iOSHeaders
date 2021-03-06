//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@protocol HDTaskServerDelegate <NSObject>
- (void)removeTaskServerObserver:(id <HDTaskServerObserver>)arg1;
- (void)removeObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (void)addObserver:(id <HDTaskServerObserver>)arg1 forTaskServerUUID:(NSUUID *)arg2;
- (id <HDTaskServer>)taskServerWithUUID:(NSUUID *)arg1;
- (void)taskServerDidInvalidate:(id <HDTaskServer>)arg1;
- (void)taskServerDidFailToInitializeForUUID:(NSUUID *)arg1;
- (void)taskServerDidFinishInitialization:(id <HDTaskServer>)arg1;

@optional
- (id <HDSampleSaving>)sampleSavingDelegate;
@end

