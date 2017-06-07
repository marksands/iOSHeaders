//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSURL;
@protocol OS_dispatch_queue;

@interface WebBookmarkChangeSet : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _lastBookmarkIDForAddingInMemoryBookmark;
    NSMutableOrderedSet *_changes;
    NSMutableDictionary *_bookmarkIDToChanges;
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;
    NSMutableDictionary *_folderIDToAddedChildrenChanges;
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;
    NSURL *_fileURL;
}

+ (id)sharedChangeSet;
+ (void)setSharedChangeSet:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)_readPersistedChanges;
- (void)persistChangesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)bookmarkIsAddedInMemory:(int)arg1;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1;
- (id)modifiedBookmarksInBookmarkFolder:(int)arg1;
- (id)addedBookmarksInBookmarkFolder:(int)arg1;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)arg1;
- (_Bool)isBookmarkDeleted:(int)arg1;
- (long long)replayChangesToBookmark:(id)arg1;
- (void)_removeAllChanges;
- (void)removeAllChanges;
- (void)removeChange:(id)arg1;
- (void)_addChange:(id)arg1;
- (void)addChange:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *changes;
- (int)nextBookmarkIDForAddingBookmarkInMemory;
- (id)initWithFileURL:(id)arg1;
- (id)init;

@end

