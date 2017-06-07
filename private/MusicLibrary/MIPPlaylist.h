//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPMultiverseIdentifier, MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying>
{
    long long _authorStoreId;
    long long _cloudLastUpdateTime;
    long long _creationDateTime;
    long long _lastPlayedDateTime;
    long long _minRefreshInterval;
    long long _modificationDateTime;
    long long _storeId;
    NSString *_artworkId;
    NSString *_authorDisplayName;
    NSString *_authorHandle;
    NSString *_authorStoreURL;
    NSMutableArray *_childIdentifiers;
    NSString *_cloudGlobalId;
    NSString *_cloudUniversalLibraryId;
    NSString *_cloudVersionHash;
    int _distinguishedKind;
    NSString *_externalVendorDisplayName;
    NSString *_externalVendorIdentifier;
    NSString *_externalVendorTag;
    MIPMultiverseIdentifier *_geniusSeedTrackIdentifier;
    NSMutableArray *_items;
    int _likedState;
    NSString *_name;
    MIPMultiverseIdentifier *_parentIdentifier;
    int _playCount;
    NSString *_playlistDescription;
    int _remoteSourceType;
    NSString *_secondaryArtworkId;
    int _secondaryArtworkSourceType;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _sortType;
    int _subscriberCount;
    int _subscriberLikedCount;
    int _subscriberPlayCount;
    NSString *_subscriberURL;
    int _type;
    _Bool _cloudIsCuratorPlaylist;
    _Bool _cloudIsSharingDisabled;
    _Bool _cloudIsSubscribed;
    _Bool _editable;
    _Bool _externalVendorPlaylist;
    _Bool _hidden;
    _Bool _owner;
    _Bool _reversedSorting;
    _Bool _shared;
    _Bool _visible;
    struct {
        unsigned int authorStoreId:1;
        unsigned int cloudLastUpdateTime:1;
        unsigned int creationDateTime:1;
        unsigned int lastPlayedDateTime:1;
        unsigned int minRefreshInterval:1;
        unsigned int modificationDateTime:1;
        unsigned int storeId:1;
        unsigned int distinguishedKind:1;
        unsigned int likedState:1;
        unsigned int playCount:1;
        unsigned int remoteSourceType:1;
        unsigned int secondaryArtworkSourceType:1;
        unsigned int sortType:1;
        unsigned int subscriberCount:1;
        unsigned int subscriberLikedCount:1;
        unsigned int subscriberPlayCount:1;
        unsigned int type:1;
        unsigned int cloudIsCuratorPlaylist:1;
        unsigned int cloudIsSharingDisabled:1;
        unsigned int cloudIsSubscribed:1;
        unsigned int editable:1;
        unsigned int externalVendorPlaylist:1;
        unsigned int hidden:1;
        unsigned int owner:1;
        unsigned int reversedSorting:1;
        unsigned int shared:1;
        unsigned int visible:1;
    } _has;
}

+ (Class)itemsType;
+ (Class)childIdentifiersType;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *childIdentifiers; // @synthesize childIdentifiers=_childIdentifiers;
@property(retain, nonatomic) NSString *secondaryArtworkId; // @synthesize secondaryArtworkId=_secondaryArtworkId;
@property(nonatomic) int secondaryArtworkSourceType; // @synthesize secondaryArtworkSourceType=_secondaryArtworkSourceType;
@property(retain, nonatomic) NSString *cloudUniversalLibraryId; // @synthesize cloudUniversalLibraryId=_cloudUniversalLibraryId;
@property(retain, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(retain, nonatomic) NSString *subscriberURL; // @synthesize subscriberURL=_subscriberURL;
@property(nonatomic) int subscriberLikedCount; // @synthesize subscriberLikedCount=_subscriberLikedCount;
@property(nonatomic) int subscriberPlayCount; // @synthesize subscriberPlayCount=_subscriberPlayCount;
@property(nonatomic) int subscriberCount; // @synthesize subscriberCount=_subscriberCount;
@property(nonatomic) long long cloudLastUpdateTime; // @synthesize cloudLastUpdateTime=_cloudLastUpdateTime;
@property(nonatomic) long long minRefreshInterval; // @synthesize minRefreshInterval=_minRefreshInterval;
@property(retain, nonatomic) NSString *authorHandle; // @synthesize authorHandle=_authorHandle;
@property(retain, nonatomic) NSString *authorStoreURL; // @synthesize authorStoreURL=_authorStoreURL;
@property(retain, nonatomic) NSString *authorDisplayName; // @synthesize authorDisplayName=_authorDisplayName;
@property(nonatomic) long long authorStoreId; // @synthesize authorStoreId=_authorStoreId;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic) int playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool owner; // @synthesize owner=_owner;
@property(nonatomic) int remoteSourceType; // @synthesize remoteSourceType=_remoteSourceType;
@property(nonatomic) int likedState; // @synthesize likedState=_likedState;
@property(retain, nonatomic) NSString *artworkId; // @synthesize artworkId=_artworkId;
@property(retain, nonatomic) NSString *cloudVersionHash; // @synthesize cloudVersionHash=_cloudVersionHash;
@property(nonatomic) _Bool cloudIsSharingDisabled; // @synthesize cloudIsSharingDisabled=_cloudIsSharingDisabled;
@property(nonatomic) long long lastPlayedDateTime; // @synthesize lastPlayedDateTime=_lastPlayedDateTime;
@property(nonatomic) long long modificationDateTime; // @synthesize modificationDateTime=_modificationDateTime;
@property(nonatomic) long long creationDateTime; // @synthesize creationDateTime=_creationDateTime;
@property(nonatomic) _Bool externalVendorPlaylist; // @synthesize externalVendorPlaylist=_externalVendorPlaylist;
@property(retain, nonatomic) NSString *externalVendorTag; // @synthesize externalVendorTag=_externalVendorTag;
@property(retain, nonatomic) NSString *externalVendorDisplayName; // @synthesize externalVendorDisplayName=_externalVendorDisplayName;
@property(retain, nonatomic) NSString *externalVendorIdentifier; // @synthesize externalVendorIdentifier=_externalVendorIdentifier;
@property(nonatomic) _Bool cloudIsCuratorPlaylist; // @synthesize cloudIsCuratorPlaylist=_cloudIsCuratorPlaylist;
@property(nonatomic) _Bool cloudIsSubscribed; // @synthesize cloudIsSubscribed=_cloudIsSubscribed;
@property(retain, nonatomic) NSString *cloudGlobalId; // @synthesize cloudGlobalId=_cloudGlobalId;
@property(nonatomic) int distinguishedKind; // @synthesize distinguishedKind=_distinguishedKind;
@property(retain, nonatomic) MIPMultiverseIdentifier *geniusSeedTrackIdentifier; // @synthesize geniusSeedTrackIdentifier=_geniusSeedTrackIdentifier;
@property(retain, nonatomic) MIPMultiverseIdentifier *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(nonatomic) _Bool reversedSorting; // @synthesize reversedSorting=_reversedSorting;
@property(retain, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo; // @synthesize smartPlaylistInfo=_smartPlaylistInfo;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)childIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)childIdentifiersCount;
- (void)addChildIdentifiers:(id)arg1;
- (void)clearChildIdentifiers;
@property(readonly, nonatomic) _Bool hasSecondaryArtworkId;
@property(nonatomic) _Bool hasSecondaryArtworkSourceType;
@property(readonly, nonatomic) _Bool hasCloudUniversalLibraryId;
@property(readonly, nonatomic) _Bool hasPlaylistDescription;
@property(readonly, nonatomic) _Bool hasSubscriberURL;
@property(nonatomic) _Bool hasSubscriberLikedCount;
@property(nonatomic) _Bool hasSubscriberPlayCount;
@property(nonatomic) _Bool hasSubscriberCount;
@property(nonatomic) _Bool hasCloudLastUpdateTime;
@property(nonatomic) _Bool hasMinRefreshInterval;
@property(readonly, nonatomic) _Bool hasAuthorHandle;
@property(readonly, nonatomic) _Bool hasAuthorStoreURL;
@property(readonly, nonatomic) _Bool hasAuthorDisplayName;
@property(nonatomic) _Bool hasAuthorStoreId;
@property(nonatomic) _Bool hasVisible;
@property(nonatomic) _Bool hasShared;
@property(nonatomic) _Bool hasPlayCount;
@property(nonatomic) _Bool hasEditable;
@property(nonatomic) _Bool hasOwner;
@property(nonatomic) _Bool hasRemoteSourceType;
@property(nonatomic) _Bool hasLikedState;
@property(readonly, nonatomic) _Bool hasArtworkId;
@property(readonly, nonatomic) _Bool hasCloudVersionHash;
@property(nonatomic) _Bool hasCloudIsSharingDisabled;
@property(nonatomic) _Bool hasLastPlayedDateTime;
@property(nonatomic) _Bool hasModificationDateTime;
@property(nonatomic) _Bool hasCreationDateTime;
@property(nonatomic) _Bool hasExternalVendorPlaylist;
@property(readonly, nonatomic) _Bool hasExternalVendorTag;
@property(readonly, nonatomic) _Bool hasExternalVendorDisplayName;
@property(readonly, nonatomic) _Bool hasExternalVendorIdentifier;
@property(nonatomic) _Bool hasCloudIsCuratorPlaylist;
@property(nonatomic) _Bool hasCloudIsSubscribed;
@property(readonly, nonatomic) _Bool hasCloudGlobalId;
@property(nonatomic) _Bool hasDistinguishedKind;
@property(readonly, nonatomic) _Bool hasGeniusSeedTrackIdentifier;
@property(readonly, nonatomic) _Bool hasParentIdentifier;
@property(nonatomic) _Bool hasReversedSorting;
- (int)StringAsSortType:(id)arg1;
- (id)sortTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSortType;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(readonly, nonatomic) _Bool hasSmartPlaylistInfo;
@property(nonatomic) _Bool hasHidden;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasStoreId;
@property(readonly, nonatomic) _Bool hasName;

@end

