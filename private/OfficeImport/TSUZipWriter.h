//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, TSUZipWriterEntry;

__attribute__((visibility("hidden")))
@interface TSUZipWriter : NSObject
{
    unsigned long long _options;
    long long _writeChannelOnceToken;
    id <TSURandomWriteChannel> _writeChannel;
    NSObject<OS_dispatch_semaphore> *_writeChannelCompletionSemaphore;
    NSMutableArray *_entries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    _Bool _calculateSize;
    _Bool _force32BitSize;
    _Bool _calculateCRC;
    unsigned long long _sizeToMatch;
    unsigned int _CRCToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_newEntryLastModificationDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    unsigned long long _entryDataSize;
    NSObject<OS_dispatch_queue> *_channelQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    long long _writtenOffset;
    NSError *_error;
    _Bool _isClosed;
}

- (void).cxx_destruct;
- (id)entryWithName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)handleWriteError:(id)arg1;
@property(readonly, nonatomic) unsigned long long archiveLength;
- (id)prepareWriteChannelWithCloseCompletionHandler:(CDUnknownBlockType)arg1;
- (void)p_writeData:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 entryCount:(unsigned long long)arg3;
- (void)writeCentralFileHeaderDataForEntry:(id)arg1;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (void)closeWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 fromReadChannel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 writeHandler:(CDUnknownBlockType)arg7;
- (void)writeEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 fromReadChannel:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)finishEntry;
- (void)flushEntryData;
- (void)addDataImpl:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addData:(id)arg1;
- (void)beginEntryWithNameImpl:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(_Bool)arg6;
- (void)beginEntryWithName:(id)arg1 force32BitSize:(_Bool)arg2 lastModificationDate:(id)arg3 size:(unsigned long long)arg4 CRC:(unsigned int)arg5 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(_Bool)arg6;
- (id)writeChannel;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

