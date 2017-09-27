//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, NSArray, NSDate, NSDictionary, NSString;

@interface MPModelMovie : MPModelObject
{
    _Bool _hasCloudSyncSource;
    _Bool _libraryAdded;
    _Bool _libraryAddEligible;
    NSString *_title;
    NSString *_descriptionText;
    double _duration;
    long long _explicitRating;
    NSString *_tagline;
    NSDictionary *_movieInfoDictionary;
    NSDate *_releaseDate;
    NSArray *_clips;
    MPModelFileAsset *_localFileAsset;
    MPModelPlaybackPosition *_playbackPosition;
    MPModelStoreAsset *_storeAsset;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
    CDUnknownBlockType _editorialArtworkCatalogBlock;
}

+ (id)__MPModelPropertyMovieKeepLocalManagedStatus__PROPERTY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__MPModelPropertyMovieKeepLocalEnableState__PROPERTY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__MPModelPropertyMovieLibraryAddEligible__PROPERTY;
+ (id)__libraryAddEligible__KEY;
+ (id)__MPModelPropertyMovieLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)__MPModelPropertyMovieLibraryAdded__PROPERTY;
+ (id)__libraryAdded__KEY;
+ (id)__MPModelPropertyMovieHasCloudSyncSource__PROPERTY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__MPModelPropertyMovieDuration__PROPERTY;
+ (id)__duration__KEY;
+ (id)__MPModelPropertyMovieEditorialArtwork__PROPERTY;
+ (id)__editorialArtworkCatalogBlock__KEY;
+ (id)__MPModelPropertyMovieArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelRelationshipMovieStoreAsset__PROPERTY;
+ (id)__storeAsset__KEY;
+ (id)__MPModelRelationshipMoviePlaybackPosition__PROPERTY;
+ (id)__playbackPosition__KEY;
+ (id)__MPModelRelationshipMovieLocalFileAsset__PROPERTY;
+ (id)__localFileAsset__KEY;
+ (id)__MPModelPropertyMovieReleaseDate__PROPERTY;
+ (id)__releaseDate__KEY;
+ (id)__MPModelRelationshipMovieClips__PROPERTY;
+ (id)__clips__KEY;
+ (id)__MPModelPropertyMovieInfoDictionary__PROPERTY;
+ (id)__movieInfoDictionary__KEY;
+ (id)__MPModelPropertyMovieTagline__PROPERTY;
+ (id)__tagline__KEY;
+ (id)__MPModelPropertyMovieExplicitRating__PROPERTY;
+ (id)__explicitRating__KEY;
+ (id)__MPModelPropertyMovieDescriptionText__PROPERTY;
+ (id)__descriptionText__KEY;
+ (id)__MPModelPropertyMovieTitle__PROPERTY;
+ (id)__title__KEY;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (_Bool)supportsLibraryAddStatusObservation;
+ (_Bool)supportsLibraryRemoval;
+ (id)requiredLibraryRemovalProperties;
+ (_Bool)supportsKeepLocalStatusObservation;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (_Bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType editorialArtworkCatalogBlock; // @synthesize editorialArtworkCatalogBlock=_editorialArtworkCatalogBlock;
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property(nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property(nonatomic) _Bool hasCloudSyncSource; // @synthesize hasCloudSyncSource=_hasCloudSyncSource;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @synthesize localFileAsset=_localFileAsset;
@property(copy, nonatomic) NSArray *clips; // @synthesize clips=_clips;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSDictionary *movieInfoDictionary; // @synthesize movieInfoDictionary=_movieInfoDictionary;
@property(copy, nonatomic) NSString *tagline; // @synthesize tagline=_tagline;
@property(nonatomic) long long explicitRating; // @synthesize explicitRating=_explicitRating;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)editorialArtworkCatalog;
- (id)artworkCatalog;
- (id)mediaItemPropertyValues;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;

@end

