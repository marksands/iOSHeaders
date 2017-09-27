//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HUQuickControlAuxiliaryView.h"

@class NSArray, NSMutableArray, NSString;

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView>
{
    _Bool _isUsingStackedLayout;
    long long _preferredContentAlignment;
    NSMutableArray *_mutableButtonViews;
    NSArray *_buttonConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) _Bool isUsingStackedLayout; // @synthesize isUsingStackedLayout=_isUsingStackedLayout;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSMutableArray *mutableButtonViews; // @synthesize mutableButtonViews=_mutableButtonViews;
@property(nonatomic) long long preferredContentAlignment; // @synthesize preferredContentAlignment=_preferredContentAlignment;
- (void).cxx_destruct;
- (void)_updateLayoutIfNecessary;
- (_Bool)_shouldUseStackedLayout;
- (void)_clearButtonConstraints;
- (void)_contentSizeCategoryDidChange;
@property(readonly, nonatomic) _Bool hasCenteredContent;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateConstraints;
- (void)contentDidChange;
- (void)removeButtonView:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addButtonView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *buttonViews;
- (id)initWithButtonViews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

