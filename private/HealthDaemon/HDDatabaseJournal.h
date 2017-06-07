//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSLock, NSString;

@interface HDDatabaseJournal : NSObject
{
    NSString *_path;
    NSLock *_journalLock;
    NSFileHandle *_fileHandle;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 database:(id)arg3 error:(id *)arg4;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id *)arg8;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id *)arg8;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileHandle:(id)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6 error:(id *)arg7;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 error:(id *)arg4;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (_Bool)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id *)arg4 error:(id *)arg5;
- (_Bool)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id *)arg2 error:(id *)arg3;
- (id)_loadJournalEntry:(id)arg1;
- (id)_sortedListOfJournalFiles;
- (id)_nameOfNextJournalFile;
- (_Bool)_appendData:(id)arg1 error:(id *)arg2;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (_Bool)mergeWithProfile:(id)arg1;
- (_Bool)addJournalEntries:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;

@end
