//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation
{
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
}

+ (id)alloc;
+ (Class)__class;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock; // @synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
- (void).cxx_destruct;

@end

