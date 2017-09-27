//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "_UIMultilineTextContentSizing.h"

@class NSString, UIView;

@interface NUIContentScrollView : UIScrollView <_UIMultilineTextContentSizing>
{
    double _preferredMaxLayoutWidth;
    struct {
        unsigned int determiningPreferredMaxLayoutWidth:1;
        unsigned int inSecondConstraintsPass:1;
    } _containerViewFlags;
    UIView *_contentView;
    long long _horizontalAlignment;
    long long _verticalAlignment;
}

@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)updateConstraints;
- (_Bool)_nui_needsDoubleUpdateConstraintsPass;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

