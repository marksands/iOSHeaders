//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

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

