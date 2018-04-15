//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying>
{
    _Bool _artworkUpdates;
    _Bool _keyboardUpdates;
    _Bool _nowPlayingUpdates;
    _Bool _outputDeviceUpdates;
    _Bool _volumeUpdates;
    struct {
        unsigned int artworkUpdates:1;
        unsigned int keyboardUpdates:1;
        unsigned int nowPlayingUpdates:1;
        unsigned int outputDeviceUpdates:1;
        unsigned int volumeUpdates:1;
    } _has;
}

@property(nonatomic) _Bool outputDeviceUpdates; // @synthesize outputDeviceUpdates=_outputDeviceUpdates;
@property(nonatomic) _Bool keyboardUpdates; // @synthesize keyboardUpdates=_keyboardUpdates;
@property(nonatomic) _Bool volumeUpdates; // @synthesize volumeUpdates=_volumeUpdates;
@property(nonatomic) _Bool artworkUpdates; // @synthesize artworkUpdates=_artworkUpdates;
@property(nonatomic) _Bool nowPlayingUpdates; // @synthesize nowPlayingUpdates=_nowPlayingUpdates;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOutputDeviceUpdates;
@property(nonatomic) _Bool hasKeyboardUpdates;
@property(nonatomic) _Bool hasVolumeUpdates;
@property(nonatomic) _Bool hasArtworkUpdates;
@property(nonatomic) _Bool hasNowPlayingUpdates;

@end

