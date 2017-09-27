//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

@class PLAggregateAlbumList;

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification
{
    PLAggregateAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_note;
    unsigned long long _indexOffet;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;
- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)changedObjects;
- (id)insertedObjects;
- (id)deletedObjects;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;
- (id)changedIndexesRelativeToSnapshot;
- (id)changedIndexes;
- (void)enumerateMovesWithBlock:(CDUnknownBlockType)arg1;
- (id)insertedIndexes;
- (id)deletedIndexes;
- (_Bool)shouldReload;
- (struct NSObject *)albumList;
- (id)object;
- (void)dealloc;
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

@end

