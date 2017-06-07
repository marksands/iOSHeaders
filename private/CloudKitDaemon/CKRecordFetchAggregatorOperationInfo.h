//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo
{
    _Bool _fetchAssetContents;
    _Bool _preserveOrdering;
    _Bool _forceDecryptionAttempt;
    NSSet *_desiredKeys;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
}

@property(nonatomic) _Bool forceDecryptionAttempt; // @synthesize forceDecryptionAttempt=_forceDecryptionAttempt;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) _Bool preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(nonatomic) _Bool fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
- (void).cxx_destruct;
- (id)init;

@end

