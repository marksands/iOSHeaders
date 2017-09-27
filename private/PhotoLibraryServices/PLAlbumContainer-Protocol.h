//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAssetContainerList.h"

@class NSArray, NSIndexSet, NSMutableOrderedSet, NSNumber, NSString;

@protocol PLAlbumContainer <PLAssetContainerList>
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) int filter;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (void)preheatAlbumsAtIndexes:(NSIndexSet *)arg1 forProperties:(NSArray *)arg2 relationships:(NSArray *)arg3;
- (void)preheatAlbumsForProperties:(NSArray *)arg1 relationships:(NSArray *)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (_Bool)canEditAlbums;
- (short)albumListType;
- (_Bool)hasAtLeastOneAlbum;
- (NSMutableOrderedSet *)albums;
- (NSNumber *)identifier;
@end

