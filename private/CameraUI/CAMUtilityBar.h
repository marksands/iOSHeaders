//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMFilterScrubberView;

@interface CAMUtilityBar : UIView
{
    CAMFilterScrubberView *_filterScrubberView;
    unsigned long long _visibleContent;
}

@property(nonatomic) unsigned long long visibleContent; // @synthesize visibleContent=_visibleContent;
@property(retain, nonatomic) CAMFilterScrubberView *filterScrubberView; // @synthesize filterScrubberView=_filterScrubberView;
- (void).cxx_destruct;
- (void)_layoutFilterScrubberView;
- (void)layoutSubviews;
- (void)_updateVisibleViewAnimated:(_Bool)arg1;
- (void)setVisibleContent:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2;

@end

