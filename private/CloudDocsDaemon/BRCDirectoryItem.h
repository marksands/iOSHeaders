//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

#import "BRCTopLevelShareable.h"

@class BRCAliasItem, BRCDocumentItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>
{
    long long _mtime;
}

@property(readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
- (id)asShareableItem;
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_deleteFromDB:(id)arg1 keepAliases:(_Bool)arg2;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(_Bool)arg1;
- (void)_markLostDirectoryAsAlmostDead;
- (_Bool)_markChildrenLostForDeadParent;
- (_Bool)markChildrenLost;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (_Bool)hasPendingLostChildren;
- (_Bool)hasLostChildren;
- (unsigned long long)childItemCount;
- (_Bool)hasLiveChildren;
- (_Bool)hasDeadChildren;
- (_Bool)changedAtRelativePath:(id)arg1 scanPackage:(_Bool)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(_Bool)arg2;
- (_Bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (_Bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id *)arg4;
- (_Bool)hasShareIDAndIsOwnedByMe;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (_Bool)isDirectoryWithPackageName;
- (_Bool)isDirectory;

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;
@property(readonly, nonatomic) NSString *unsaltedBookmarkData; // @dynamic unsaltedBookmarkData;

@end

