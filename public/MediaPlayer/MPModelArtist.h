//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelPerson.h>

@class MPModelGenre, NSDate;

@interface MPModelArtist : MPModelPerson
{
    _Bool _hasBiography;
    long long _songCount;
    long long _albumCount;
    MPModelGenre *_genre;
    NSDate *_libraryAddedDate;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
}

+ (id)__MPModelPropertyArtistLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)__MPModelPropertyArtistAlbumCount__PROPERTY;
+ (id)__albumCount__KEY;
+ (id)__MPModelPropertyArtistSongCount__PROPERTY;
+ (id)__songCount__KEY;
+ (id)__MPModelRelationshipArtistGenre__PROPERTY;
+ (id)__genre__KEY;
+ (id)__MPModelPropertyArtistEditorialArtwork__PROPERTY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__MPModelPropertyArtistArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelPropertyArtistHasBiography__PROPERTY;
+ (id)__hasBiography__KEY;
+ (id)kindWithAlbumKind:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(copy, nonatomic) MPModelGenre *genre; // @synthesize genre=_genre;
@property(nonatomic) long long albumCount; // @synthesize albumCount=_albumCount;
@property(nonatomic) long long songCount; // @synthesize songCount=_songCount;
@property(nonatomic) _Bool hasBiography; // @synthesize hasBiography=_hasBiography;
- (void).cxx_destruct;
- (id)editorialArtworkCatalog;
- (id)artworkCatalog;

@end

