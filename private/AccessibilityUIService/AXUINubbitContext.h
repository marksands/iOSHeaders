//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXAssertion, AXDispatchTimer, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIGravityBehavior, UIPanGestureRecognizer, UISnapBehavior, UIView;

@interface AXUINubbitContext : NSObject
{
    UIView *_nubbit;
    id <AXUINubbitDelegate> _delegate;
    AXAssertion *_disableSystemGesturesAssertion;
    AXAssertion *_disableDashBoardSystemGesturesAssertion;
    UIPanGestureRecognizer *_moveNubbitGestureRecognizer;
    AXDispatchTimer *_fadeTimer;
    UIDynamicAnimator *_dynamicAnimator;
    UIGravityBehavior *_gravityBehavior;
    UIAttachmentBehavior *_followPanBehavior;
    UISnapBehavior *_snapToBoundaryBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIDynamicItemBehavior *_dynamicItemBehavior;
    double _originalAlpha;
}

@property(nonatomic) double originalAlpha; // @synthesize originalAlpha=_originalAlpha;
@property(retain, nonatomic) UIDynamicItemBehavior *dynamicItemBehavior; // @synthesize dynamicItemBehavior=_dynamicItemBehavior;
@property(retain, nonatomic) UICollisionBehavior *collisionBehavior; // @synthesize collisionBehavior=_collisionBehavior;
@property(retain, nonatomic) UISnapBehavior *snapToBoundaryBehavior; // @synthesize snapToBoundaryBehavior=_snapToBoundaryBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *followPanBehavior; // @synthesize followPanBehavior=_followPanBehavior;
@property(retain, nonatomic) UIGravityBehavior *gravityBehavior; // @synthesize gravityBehavior=_gravityBehavior;
@property(retain, nonatomic) UIDynamicAnimator *dynamicAnimator; // @synthesize dynamicAnimator=_dynamicAnimator;
@property(retain, nonatomic) AXDispatchTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property(retain, nonatomic) UIPanGestureRecognizer *moveNubbitGestureRecognizer; // @synthesize moveNubbitGestureRecognizer=_moveNubbitGestureRecognizer;
@property(retain, nonatomic) AXAssertion *disableDashBoardSystemGesturesAssertion; // @synthesize disableDashBoardSystemGesturesAssertion=_disableDashBoardSystemGesturesAssertion;
@property(retain, nonatomic) AXAssertion *disableSystemGesturesAssertion; // @synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion;
@property(nonatomic) __weak id <AXUINubbitDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *nubbit; // @synthesize nubbit=_nubbit;
- (void).cxx_destruct;

@end

