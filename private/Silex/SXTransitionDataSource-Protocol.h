//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIView;

@protocol SXTransitionDataSource <NSObject>
@property(readonly, nonatomic) struct CGRect transitionContentFrame;
@property(readonly, nonatomic) struct CGRect transitionContainerFrame;
@property(readonly, nonatomic) struct CGRect transitionVisibleFrame;
@property(readonly, nonatomic) _Bool transitionViewShouldFadeInContent;
@property(readonly, nonatomic) _Bool transitionViewIsVisible;
@property(readonly, nonatomic) _Bool transitionViewUsesThumbnail;
@property(readonly, nonatomic) UIView *transitionContentView;
@property(readonly, nonatomic) UIView *transitionContainerView;
@end

