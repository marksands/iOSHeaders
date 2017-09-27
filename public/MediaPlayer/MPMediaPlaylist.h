//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItemCollection.h>

@class MPMediaQuery, NSArray, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection
{
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

+ (_Bool)_isValidPlaylistProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (_Bool)canFilterByProperty:(id)arg1;
- (void).cxx_destruct;
- (void)setUserSelectedArtworkImage:(id)arg1;
- (_Bool)canPlayUsingNetworkType:(long long)arg1;
- (_Bool)isCloudMix;
- (id)seedTracksQuery;
- (id)representativeArtists;
- (id)multiverseIdentifier;
- (id)representativeItem;
- (unsigned long long)mediaTypes;
- (unsigned long long)count;
- (id)items;
- (void)removeFirstItem;
@property(readonly, nonatomic) NSString *authorDisplayName;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSArray *seedItems;
@property(readonly, nonatomic) unsigned long long playlistAttributes;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long persistentID;
- (_Bool)existsInLibrary;
- (void)addMediaItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;
- (id)artworkCatalog;

@end

