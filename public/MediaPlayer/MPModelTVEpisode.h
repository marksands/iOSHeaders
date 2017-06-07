//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelStoreAsset, MPModelTVSeason, MPModelTVShow, NSDate, NSString;

@interface MPModelTVEpisode : MPModelObject
{
    _Bool _musicShow;
    _Bool _hasCloudSyncSource;
    _Bool _libraryAdded;
    _Bool _libraryAddEligible;
    NSString *_title;
    NSString *_descriptionText;
    double _duration;
    long long _episodeNumber;
    long long _explicitRating;
    NSDate *_releaseDate;
    long long _episodeType;
    NSString *_episodeTypeDisplayName;
    MPModelFileAsset *_localFileAsset;
    MPModelPlaybackPosition *_playbackPosition;
    MPModelStoreAsset *_storeAsset;
    MPModelTVSeason *_season;
    MPModelTVShow *_show;
    NSDate *_libraryAddedDate;
    long long _keepLocalEnableState;
    long long _keepLocalManagedStatus;
    CDUnknownBlockType _artworkCatalogBlock;
}

+ (id)__MPModelPropertyTVEpisodeArtwork__PROPERTY;
+ (id)__artworkCatalogBlock__KEY;
+ (id)__MPModelPropertyTVEpisodeKeepLocalManagedStatus__PROPERTY;
+ (id)__keepLocalManagedStatus__KEY;
+ (id)__MPModelPropertyTVEpisodeKeepLocalEnableState__PROPERTY;
+ (id)__keepLocalEnableState__KEY;
+ (id)__MPModelPropertyTVEpisodeLibraryAddEligible__PROPERTY;
+ (id)__libraryAddEligible__KEY;
+ (id)__MPModelPropertyTVEpisodeLibraryAddedDate__PROPERTY;
+ (id)__libraryAddedDate__KEY;
+ (id)__MPModelPropertyTVEpisodeLibraryAdded__PROPERTY;
+ (id)__libraryAdded__KEY;
+ (id)__MPModelPropertyTVEpisodeTypeDisplayName__PROPERTY;
+ (id)__episodeTypeDisplayName__KEY;
+ (id)__MPModelPropertyTVEpisodeType__PROPERTY;
+ (id)__episodeType__KEY;
+ (id)__MPModelPropertyTVEpisodeReleaseDate__PROPERTY;
+ (id)__releaseDate__KEY;
+ (id)__MPModelRelationshipTVEpisodeShow__PROPERTY;
+ (id)__show__KEY;
+ (id)__MPModelRelationshipTVEpisodeSeason__PROPERTY;
+ (id)__season__KEY;
+ (id)__MPModelRelationshipTVEpisodeStoreAsset__PROPERTY;
+ (id)__storeAsset__KEY;
+ (id)__MPModelRelationshipTVEpisodePlaybackPosition__PROPERTY;
+ (id)__playbackPosition__KEY;
+ (id)__MPModelRelationshipTVEpisodeLocalFileAsset__PROPERTY;
+ (id)__localFileAsset__KEY;
+ (id)__MPModelPropertyTVEpisodeExplicitRating__PROPERTY;
+ (id)__explicitRating__KEY;
+ (id)__MPModelPropertyTVEpisodeNumber__PROPERTY;
+ (id)__episodeNumber__KEY;
+ (id)__MPModelPropertyTVEpisodeMusicShow__PROPERTY;
+ (id)__musicShow__KEY;
+ (id)__MPModelPropertyTVEpisodeHasCloudSyncSource__PROPERTY;
+ (id)__hasCloudSyncSource__KEY;
+ (id)__MPModelPropertyTVEpisodeDuration__PROPERTY;
+ (id)__duration__KEY;
+ (id)__MPModelPropertyTVEpisodeDescriptionText__PROPERTY;
+ (id)__descriptionText__KEY;
+ (id)__MPModelPropertyTVEpisodeTitle__PROPERTY;
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
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @synthesize artworkCatalogBlock=_artworkCatalogBlock;
@property(nonatomic) long long keepLocalManagedStatus; // @synthesize keepLocalManagedStatus=_keepLocalManagedStatus;
@property(nonatomic) long long keepLocalEnableState; // @synthesize keepLocalEnableState=_keepLocalEnableState;
@property(nonatomic, getter=isLibraryAddEligible) _Bool libraryAddEligible; // @synthesize libraryAddEligible=_libraryAddEligible;
@property(copy, nonatomic) NSDate *libraryAddedDate; // @synthesize libraryAddedDate=_libraryAddedDate;
@property(nonatomic, getter=isLibraryAdded) _Bool libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property(nonatomic) _Bool hasCloudSyncSource; // @synthesize hasCloudSyncSource=_hasCloudSyncSource;
@property(retain, nonatomic) MPModelTVShow *show; // @synthesize show=_show;
@property(retain, nonatomic) MPModelTVSeason *season; // @synthesize season=_season;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @synthesize localFileAsset=_localFileAsset;
@property(copy, nonatomic) NSString *episodeTypeDisplayName; // @synthesize episodeTypeDisplayName=_episodeTypeDisplayName;
@property(nonatomic) long long episodeType; // @synthesize episodeType=_episodeType;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) long long explicitRating; // @synthesize explicitRating=_explicitRating;
@property(nonatomic) long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic, getter=isMusicShow) _Bool musicShow; // @synthesize musicShow=_musicShow;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)mediaItemPropertyValues;
- (struct MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;

@end
