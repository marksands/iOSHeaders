//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFCopying.h"

@class NSArray, NSMutableDictionary, NSString;

@protocol NTTodayProtoitem <NFCopying>
@property(readonly, copy, nonatomic) NSString *identifier;
- (id <NTTodayItem>)itemWithContentContext:(id <FCContentContext>)arg1 operationInfo:(id <NTTodayResultOperationInfoProviding>)arg2 sectionDescriptor:(id <NTSectionDescriptor>)arg3 assetFileURLsByRemoteURL:(NSMutableDictionary *)arg4 forLeadingCellAppearance:(_Bool)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6;
- (NSArray *)assetHandlesWithOperationInfo:(id <NTTodayResultOperationInfoProviding>)arg1 forLeadingCellAppearance:(_Bool)arg2;
@end

