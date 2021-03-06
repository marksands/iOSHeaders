//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFBufferedQueue.h"

@class MFIMAPConnection, MFLibraryIMAPStore, NSArray, NSMutableArray, NSString;

@interface MFBaseSyncResponseQueue : MFBufferedQueue
{
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSString *_url;
    unsigned long long _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_libraryDetails;
    _Bool _shouldCompact;
    _Bool _shouldFetch;
    _Bool _isSearching;
}

- (void)dealloc;
- (_Bool)shouldSyncFlags;
- (id)sequenceIdentifierForItem:(id)arg1;
- (unsigned long long)flagsForItem:(id)arg1;
- (unsigned long long)uidForItem:(id)arg1;
- (_Bool)handleItems:(id)arg1;
- (id)init;

@end

