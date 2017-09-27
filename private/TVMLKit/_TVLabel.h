//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface _TVLabel : UILabel
{
    long long _previousNumberOfLines;
    struct CGSize _cachedSizeThatFits;
    struct CGSize _previousTargetSize;
    struct CGRect _cachedTextRectForBounds;
    struct CGRect _previousBounds;
}

@property(nonatomic) struct CGSize previousTargetSize; // @synthesize previousTargetSize=_previousTargetSize;
@property(nonatomic) struct CGSize cachedSizeThatFits; // @synthesize cachedSizeThatFits=_cachedSizeThatFits;
@property(nonatomic) long long previousNumberOfLines; // @synthesize previousNumberOfLines=_previousNumberOfLines;
@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(nonatomic) struct CGRect cachedTextRectForBounds; // @synthesize cachedTextRectForBounds=_cachedTextRectForBounds;
- (void)_clearCachedValues;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

