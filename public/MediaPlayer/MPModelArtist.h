//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson
{
}

+ (id)__libraryAddedDate_KEY;
+ (id)__albumCount_KEY;
+ (id)__songCount_KEY;
+ (id)__genre_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__hasBiography_KEY;
+ (id)kindWithAlbumKind:(id)arg1;
- (id)editorialArtworkCatalog;
- (id)artworkCatalog;

// Remaining properties
@property(nonatomic) long long albumCount; // @dynamic albumCount;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @dynamic editorialArtworkCatalogBlock;
@property(copy, nonatomic) MPModelGenre *genre; // @dynamic genre;
@property(nonatomic) _Bool hasBiography; // @dynamic hasBiography;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @dynamic libraryAddedDate;
@property(nonatomic) long long songCount; // @dynamic songCount;

@end

