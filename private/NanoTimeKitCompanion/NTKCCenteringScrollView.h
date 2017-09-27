//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIView;

@interface NTKCCenteringScrollView : UIScrollView <UIScrollViewDelegate>
{
    struct CGRect _originalCrop;
    UIView *_centeredView;
    double _maximumZoomRatio;
    struct CGSize _minimumDisplaySize;
    struct CGRect _cropRect;
}

@property(nonatomic) double maximumZoomRatio; // @synthesize maximumZoomRatio=_maximumZoomRatio;
@property(nonatomic) struct CGSize minimumDisplaySize; // @synthesize minimumDisplaySize=_minimumDisplaySize;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) UIView *centeredView; // @synthesize centeredView=_centeredView;
- (void).cxx_destruct;
- (void)_updateCrop;
- (void)_centerOnCrop;
- (void)_updateInsets;
- (void)_updateZoomScales;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

