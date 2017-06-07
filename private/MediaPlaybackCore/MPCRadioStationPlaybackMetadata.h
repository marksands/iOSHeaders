//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSMutableCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL, RadioArtworkCollection, RadioStation;

@interface MPCRadioStationPlaybackMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    RadioArtworkCollection *_artworkCollection;
    _Bool _hasSetArtworkCollection;
    _Bool _hasSetStationHash;
    _Bool _hasSetStationID;
    _Bool _hasSetStationName;
    _Bool _hasSetStationStringID;
    _Bool _hasValidRadioStation;
    RadioStation *_station;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationName;
    NSString *_stationStringID;
    NSURL *_stationURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (id)_station;
- (id)_copyWithZone:(struct _NSZone *)arg1 class:(Class)arg2;
- (_Bool)isEffectivelyEqualStationWithPlaybackMetadata:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stationStringID;
@property(readonly, copy, nonatomic) NSString *stationName;
@property(readonly, nonatomic) long long stationID;
@property(readonly, copy, nonatomic) NSString *stationHash;
@property(readonly, copy, nonatomic) NSDictionary *stationDictionary;
@property(readonly, nonatomic) RadioArtworkCollection *artworkCollection;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStationStringID:(id)arg1;
- (id)initWithStation:(id)arg1;

@end

