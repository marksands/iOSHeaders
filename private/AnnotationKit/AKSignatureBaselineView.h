//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface AKSignatureBaselineView : UIView
{
    double _baselinePercent;
    struct UIEdgeInsets _lastSafeAreaInsets;
}

@property(nonatomic) struct UIEdgeInsets lastSafeAreaInsets; // @synthesize lastSafeAreaInsets=_lastSafeAreaInsets;
@property(nonatomic) double baselinePercent; // @synthesize baselinePercent=_baselinePercent;
- (_Bool)_isRTL;
- (void)_drawBaselineInContext:(struct CGContext *)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)scaleFactor;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

