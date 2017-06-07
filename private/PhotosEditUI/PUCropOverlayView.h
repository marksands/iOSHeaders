//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface PUCropOverlayView : UIView
{
    _Bool _cropGridVisible;
    _Bool _straightenGridVisible;
    _Bool _maskedContentVisible;
    NSArray *__oneThirdCropLines;
    NSArray *__oneNinthCropLines;
    NSArray *__maskViews;
    UIView *__cropWindowView;
    struct CGRect _cropRect;
}

@property(retain, nonatomic, setter=_setCropWindowView:) UIView *_cropWindowView; // @synthesize _cropWindowView=__cropWindowView;
@property(retain, nonatomic, setter=_setMaskViews:) NSArray *_maskViews; // @synthesize _maskViews=__maskViews;
@property(retain, nonatomic, setter=_setOneNinethLines:) NSArray *_oneNinthCropLines; // @synthesize _oneNinthCropLines=__oneNinthCropLines;
@property(retain, nonatomic, setter=_setOneThirdLines:) NSArray *_oneThirdCropLines; // @synthesize _oneThirdCropLines=__oneThirdCropLines;
@property(nonatomic, getter=isMaskedContentVisible) _Bool maskedContentVisible; // @synthesize maskedContentVisible=_maskedContentVisible;
@property(nonatomic, getter=isStraightenGridVisible) _Bool straightenGridVisible; // @synthesize straightenGridVisible=_straightenGridVisible;
@property(nonatomic, getter=isCropGridVisible) _Bool cropGridVisible; // @synthesize cropGridVisible=_cropGridVisible;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (void).cxx_destruct;
- (id)_createMaskView;
- (id)_createLineViewForCount:(unsigned long long)arg1;
- (id)_createConstraintsForLine:(id)arg1 centerMultiplier:(double)arg2 vertical:(_Bool)arg3;
- (id)_addLinesSpacedForCount:(unsigned long long)arg1 drawFirstAndLast:(_Bool)arg2 visible:(_Bool)arg3;
- (unsigned long long)_subviewIndexForLineForCount:(unsigned long long)arg1;
- (void)_setGridViews:(id)arg1 visible:(_Bool)arg2 iVarVisibilePtr:(_Bool *)arg3 animated:(_Bool)arg4;
- (void)setStraightenGridVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCropGridVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMaskedContentVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) id layoutReferenceItem;
- (id)initWithFrame:(struct CGRect)arg1;

@end

