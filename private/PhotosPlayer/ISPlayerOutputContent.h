//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject
{
    _Bool _photoIsOriginal;
    int _photoEXIFOrientation;
    struct CGImage *_photo;
    ISWrappedAVPlayer *_videoPlayer;
    struct CGSize _videoSize;
}

@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(readonly, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) int photoEXIFOrientation; // @synthesize photoEXIFOrientation=_photoEXIFOrientation;
@property(readonly, nonatomic) _Bool photoIsOriginal; // @synthesize photoIsOriginal=_photoIsOriginal;
@property(readonly, nonatomic) struct CGImage *photo; // @synthesize photo=_photo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithPhoto:(struct CGImage *)arg1 photoIsOriginal:(_Bool)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(struct CGSize)arg5;

@end

