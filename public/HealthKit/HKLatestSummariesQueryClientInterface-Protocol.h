//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKQueryClientInterface.h"

@class NSArray, NSUUID;

@protocol HKLatestSummariesQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverResetSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverUpdatedSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
@end

