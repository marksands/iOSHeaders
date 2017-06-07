//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSyncAnchorRangeMap, NSError, _HKArchiveCreator;

@interface _HDCloudSyncSessionContext : NSObject
{
    _Bool _isComplete;
    _Bool _success;
    _Bool _hasOpenSequence;
    _HKArchiveCreator *_archiveCreator;
    HDSyncAnchorRangeMap *_anchorRangeMap;
    HDSyncAnchorRangeMap *_fullUploadAnchorRangeMap;
    unsigned long long _changesetCount;
    unsigned long long _archiveCount;
    CDUnknownBlockType _completion;
    NSError *_error;
}

+ (_Bool)_updateAnchorRangeMap:(id)arg1 withChange:(id)arg2 outError:(id *)arg3;
+ (id)_assetFileHandleForArchiveURL:(id)arg1 fileManager:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool hasOpenSequence; // @synthesize hasOpenSequence=_hasOpenSequence;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long archiveCount; // @synthesize archiveCount=_archiveCount;
@property(nonatomic) unsigned long long changesetCount; // @synthesize changesetCount=_changesetCount;
@property(readonly, nonatomic) HDSyncAnchorRangeMap *fullUploadAnchorRangeMap; // @synthesize fullUploadAnchorRangeMap=_fullUploadAnchorRangeMap;
@property(readonly, nonatomic) HDSyncAnchorRangeMap *anchorRangeMap; // @synthesize anchorRangeMap=_anchorRangeMap;
@property(readonly, nonatomic) _HKArchiveCreator *archiveCreator; // @synthesize archiveCreator=_archiveCreator;
- (void).cxx_destruct;
- (_Bool)addChangeData:(id)arg1 changes:(id)arg2 sessionIdentifier:(id)arg3 outError:(id *)arg4;
- (_Bool)resetInvalidArchiveCreatorWithSessionUUID:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long archiveSize;
- (id)init;

@end

