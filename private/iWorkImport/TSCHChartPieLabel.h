//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCHChartPieLabel : NSObject
{
    struct CGRect mRect;
    struct CGRect mErasableFrame;
    struct CGSize mSize;
    struct CGAffineTransform mTransform;
    NSString *mTitle;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=mTitle;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=mTransform;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(readonly, nonatomic) struct CGRect erasableFrame; // @synthesize erasableFrame=mErasableFrame;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=mRect;
- (void).cxx_destruct;
- (void)concatenateTransformWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithRect:(struct CGRect)arg1 erasableFrame:(struct CGRect)arg2 size:(struct CGSize)arg3 transform:(struct CGAffineTransform)arg4 title:(id)arg5;
@property(readonly, nonatomic) struct CGRect erasableFrameInCombinedLabelSpace;
@property(readonly, nonatomic) struct CGRect rectInCombinedLabelSpace;

@end

