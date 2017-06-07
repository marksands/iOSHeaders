//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, _OSLogCollectionReference;

__attribute__((visibility("hidden")))
@interface _OSLogIndex : NSObject
{
    NSMutableArray *_fileq;
    NSMutableSet *_oversizeChunks;
    _OSLogCollectionReference *_lcr;
    NSString *_file;
    NSMutableArray *_files;
    CDStruct_b8fedf57 _metadata;
    _Bool _metadataValid;
    struct _os_timesync_db_s *_tsdb;
}

@property(readonly, nonatomic) struct _os_timesync_db_s *timesync; // @synthesize timesync=_tsdb;
- (void).cxx_destruct;
- (void)enumerateFilesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)insertChunkStore:(id)arg1;
@property(readonly, nonatomic) unsigned long long endWalltime;
@property(readonly, nonatomic) unsigned long long specialStartWalltime;
@property(readonly, nonatomic) unsigned long long persistStartWalltime;
- (void)_storeOversizeChunk:(id)arg1;
- (_Bool)_buildSingleFileIndex:(id *)arg1;
- (_Bool)_buildFileIndex:(id *)arg1;
- (_Bool)_addFileToIndex:(const char *)arg1 error:(id *)arg2;
- (_Bool)_openTimesyncDatabase:(id *)arg1;
- (_Bool)_readArchiveMetadata:(id *)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 buildLocalIndex:(_Bool)arg2 error:(id *)arg3;

@end
