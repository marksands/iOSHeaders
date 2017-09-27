//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISFrameCache;

@interface ISAnimatedImage : NSObject
{
    struct CGImageSource *_imageSource;
    double *_frameDelayTimes;
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    double _duration;
    ISFrameCache *_frameCache;
    struct CGSize _pixelSize;
}

@property(readonly, nonatomic) ISFrameCache *frameCache; // @synthesize frameCache=_frameCache;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (void).cxx_destruct;
- (void)_preloadDelayTimes;
@property(nonatomic) long long cacheStrategy;
- (double)frameDelayAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)initWithData:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

