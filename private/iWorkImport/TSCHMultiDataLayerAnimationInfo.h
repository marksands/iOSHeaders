//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CAMediaTimingFunction, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataLayerAnimationInfo : NSObject <NSCopying>
{
    _Bool mShouldAnimate;
    _Bool mAboveIntercept;
    _Bool mCrossesIntercept;
    NSArray *mKeyTimes;
    struct CGRect mInterceptRect;
    _Bool mHorizontalChart;
    double mDuration;
    struct CGRect mChartBodyFrameInRepElementSpace;
    NSMutableArray *mLayerAnimationValues;
    CAMediaTimingFunction *mTimingFunction;
    _Bool mElementUndefined;
    _Bool mAtIntercept;
    _Bool mCurrentAtIntercept;
    _Bool mCurrentAboveIntercept;
}

+ (id)animationInfo;
@property(nonatomic) _Bool currentAboveIntercept; // @synthesize currentAboveIntercept=mCurrentAboveIntercept;
@property(nonatomic) _Bool atIntercept; // @synthesize atIntercept=mAtIntercept;
@property(nonatomic) _Bool currentAtIntercept; // @synthesize currentAtIntercept=mCurrentAtIntercept;
@property(nonatomic) _Bool elementUndefined; // @synthesize elementUndefined=mElementUndefined;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=mTimingFunction;
@property(readonly, nonatomic) NSArray *layerAnimationValues; // @synthesize layerAnimationValues=mLayerAnimationValues;
@property(nonatomic) struct CGRect chartBodyFrameInRepElementSpace; // @synthesize chartBodyFrameInRepElementSpace=mChartBodyFrameInRepElementSpace;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
@property(nonatomic) _Bool horizontalChart; // @synthesize horizontalChart=mHorizontalChart;
@property(nonatomic) struct CGRect interceptRect; // @synthesize interceptRect=mInterceptRect;
@property(copy, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=mKeyTimes;
@property(nonatomic) _Bool crossesIntercept; // @synthesize crossesIntercept=mCrossesIntercept;
@property(nonatomic) _Bool aboveIntercept; // @synthesize aboveIntercept=mAboveIntercept;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=mShouldAnimate;
- (void)addImageContentsAnimationForLayer:(id)arg1 fromImage:(id)arg2 toImage:(id)arg3 keyTimes:(id)arg4;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(_Bool)arg5;
- (void)addAnimationForLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

