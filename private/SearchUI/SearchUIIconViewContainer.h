//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint;

@interface SearchUIIconViewContainer : UIView
{
    NSArray *_iconViews;
    NSLayoutConstraint *_trailingConstraint;
    NSArray *_spacerLayoutGuides;
    NSArray *_spacerLayoutGuideWidthConstraints;
    NSArray *_iconViewWidthConstraints;
}

+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (unsigned long long)maximumNumberOfColumns;
+ (unsigned long long)numberOfColumnsForLandscape;
+ (unsigned long long)numberOfColumnsForPortrait;
@property(retain) NSArray *iconViewWidthConstraints; // @synthesize iconViewWidthConstraints=_iconViewWidthConstraints;
@property(retain) NSArray *spacerLayoutGuideWidthConstraints; // @synthesize spacerLayoutGuideWidthConstraints=_spacerLayoutGuideWidthConstraints;
@property(retain) NSArray *spacerLayoutGuides; // @synthesize spacerLayoutGuides=_spacerLayoutGuides;
@property(retain) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain) NSArray *iconViews; // @synthesize iconViews=_iconViews;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;

@end

