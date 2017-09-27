//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUI/GKHeaderWithUnderlineView.h>

@class NSLayoutConstraint, UISegmentedControl;

@interface GKSegmentedSelectorView : GKHeaderWithUnderlineView
{
    UISegmentedControl *_segmentedControl;
    id _target;
    NSLayoutConstraint *_widthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)pinningStateChangedTo:(_Bool)arg1;
- (void)prepareForReuse;
- (_Bool)drawsUnderline;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

