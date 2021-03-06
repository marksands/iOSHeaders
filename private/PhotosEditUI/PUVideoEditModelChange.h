//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUViewModelChange.h"

__attribute__((visibility("hidden")))
@interface PUVideoEditModelChange : PUViewModelChange
{
    _Bool _videoDurationChanged;
    _Bool _videoTrimRegionChanged;
    _Bool _videoSizeChanged;
    _Bool _videoBuilderChanged;
}

@property(nonatomic, setter=_setVideoBuilderChanged:) _Bool videoBuilderChanged; // @synthesize videoBuilderChanged=_videoBuilderChanged;
@property(nonatomic, setter=_setVideoSizeChanged:) _Bool videoSizeChanged; // @synthesize videoSizeChanged=_videoSizeChanged;
@property(nonatomic, setter=_setVideoTrimRegionChanged:) _Bool videoTrimRegionChanged; // @synthesize videoTrimRegionChanged=_videoTrimRegionChanged;
@property(nonatomic, setter=_setVideoDurationChanged:) _Bool videoDurationChanged; // @synthesize videoDurationChanged=_videoDurationChanged;
- (_Bool)hasChanges;

@end

