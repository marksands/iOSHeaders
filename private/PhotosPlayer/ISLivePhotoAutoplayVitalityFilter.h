//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosPlayer/ISLivePhotoVitalityFilter.h>

@class NSDate;

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter
{
    _Bool _isVisible;
    _Bool _hasTargetVisibilityOffset;
    _Bool _isScrolling;
    _Bool _isDecelerating;
    double _visibilityOffset;
    double _targetVisibilityOffset;
    NSDate *_estimatedScrollEndDate;
    long long __state;
}

@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(nonatomic, setter=setDecelerating:) _Bool isDecelerating; // @synthesize isDecelerating=_isDecelerating;
@property(nonatomic, setter=setScrolling:) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSDate *estimatedScrollEndDate; // @synthesize estimatedScrollEndDate=_estimatedScrollEndDate;
@property(nonatomic) double targetVisibilityOffset; // @synthesize targetVisibilityOffset=_targetVisibilityOffset;
@property(nonatomic) _Bool hasTargetVisibilityOffset; // @synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset;
@property(nonatomic) double visibilityOffset; // @synthesize visibilityOffset=_visibilityOffset;
@property(nonatomic, setter=setVisible:) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void).cxx_destruct;
- (void)_startAutoplay;
- (void)updateOutput;

@end

