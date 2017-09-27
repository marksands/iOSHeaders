//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPlatter.h"
#import "MTTitled.h"

@class UIScrollView, UITapGestureRecognizer;

@protocol NCCustomContentContainingLookView <MTPlatter, MTTitled>
@property(readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property(nonatomic, getter=isActionsHidden) _Bool actionsHidden;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property(nonatomic) _Bool hidesNotificationContent;
@property(readonly, nonatomic) struct CGSize sizeExcludingActions;
@property(readonly, nonatomic) struct CGSize contentSizeExcludingActions;
@property(nonatomic) unsigned long long customContentLocation;
@property(nonatomic) struct CGSize customContentSize;
- (struct CGRect)scrollViewFrame;
- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
@end

