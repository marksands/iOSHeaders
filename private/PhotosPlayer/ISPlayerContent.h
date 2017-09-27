//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, NSNumber;

@interface ISPlayerContent : NSObject
{
    _Bool _photoHasColorAdjustments;
    _Bool _photoIsOriginal;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    AVPlayerItem *_videoPlayerItem;
    NSNumber *_variationIdentifier;
    CDStruct_1b6d18a9 _photoTime;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_1b6d18a9 _prePhotoFrameTime;
    CDStruct_1b6d18a9 _postPhotoFrameTime;
}

@property(readonly, nonatomic) NSNumber *variationIdentifier; // @synthesize variationIdentifier=_variationIdentifier;
@property(readonly, nonatomic) _Bool photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) CDStruct_1b6d18a9 postPhotoFrameTime; // @synthesize postPhotoFrameTime=_postPhotoFrameTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 prePhotoFrameTime; // @synthesize prePhotoFrameTime=_prePhotoFrameTime;
@property(readonly, nonatomic) _Bool photoHasColorAdjustments; // @synthesize photoHasColorAdjustments=_photoHasColorAdjustments;
@property(readonly, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(CDStruct_1b6d18a9)arg4 videoDuration:(CDStruct_1b6d18a9)arg5 photoHasColorAdjustments:(_Bool)arg6 videoPlayerItem:(id)arg7 prePhotoFrameTime:(CDStruct_1b6d18a9)arg8 postPhotoFrameTime:(CDStruct_1b6d18a9)arg9 variationIdentifier:(id)arg10;

@end

