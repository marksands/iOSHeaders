//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ICCameraFileProperties : NSObject
{
    long long _fileSize;
    _Bool _hasThumbnail;
    _Bool _hasMetadata;
    _Bool _raw;
    struct os_unfair_lock_s _fetchingThumbnailLock;
    _Bool _fetchingThumbnail;
    struct os_unfair_lock_s _fetchingMetadataLock;
    _Bool _fetchingMetadata;
    struct CGImage *_originalThumbnail;
    struct CGImage *_thumbnail;
    NSMutableDictionary *_metadata;
    NSMutableDictionary *_metadata_hidden;
    unsigned long long _orientation;
    _Bool _hasOverriddenOrientation;
    double _duration;
    NSString *_burstUUID;
    _Bool _burstFavorite;
    _Bool _burstPicked;
    _Bool _highFramerate;
    _Bool _timeLapse;
    NSString *_groupUUID;
    NSString *_relatedUUID;
    NSString *_originatingAssetID;
    NSString *_originalFilename;
    NSString *_createdFilename;
    _Bool _retrievedThumbnail;
    _Bool _retrievedMetadata;
    _Bool _firstPicked;
    NSMutableArray *_sidecarFiles;
}

@property _Bool firstPicked; // @synthesize firstPicked=_firstPicked;
@property _Bool retrievedMetadata; // @synthesize retrievedMetadata=_retrievedMetadata;
@property _Bool retrievedThumbnail; // @synthesize retrievedThumbnail=_retrievedThumbnail;
@property(retain) NSString *relatedUUID; // @synthesize relatedUUID=_relatedUUID;
@property(retain) NSString *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(retain) NSString *createdFilename; // @synthesize createdFilename=_createdFilename;
@property(retain) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(retain) NSString *originatingAssetID; // @synthesize originatingAssetID=_originatingAssetID;
@property _Bool timeLapse; // @synthesize timeLapse=_timeLapse;
@property _Bool highFramerate; // @synthesize highFramerate=_highFramerate;
@property _Bool burstFavorite; // @synthesize burstFavorite=_burstFavorite;
@property _Bool burstPicked; // @synthesize burstPicked=_burstPicked;
@property(retain) NSString *burstUUID; // @synthesize burstUUID=_burstUUID;
@property(retain) NSMutableArray *sidecarFiles; // @synthesize sidecarFiles=_sidecarFiles;
@property double duration; // @synthesize duration=_duration;
@property _Bool hasOverriddenOrientation; // @synthesize hasOverriddenOrientation=_hasOverriddenOrientation;
@property unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain) NSMutableDictionary *metadata_hidden; // @synthesize metadata_hidden=_metadata_hidden;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(getter=isRaw) _Bool raw; // @synthesize raw=_raw;
@property _Bool hasMetadata; // @synthesize hasMetadata=_hasMetadata;
@property _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property _Bool fetchingMetadata;
@property _Bool fetchingThumbnail;
@property struct CGImage *originalThumbnail; // @dynamic originalThumbnail;
@property struct CGImage *thumbnail; // @dynamic thumbnail;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

