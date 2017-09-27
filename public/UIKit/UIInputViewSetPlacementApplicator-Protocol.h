//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, UIGestureRecognizer, UIInputViewSetPlacement, UIView;

@protocol UIInputViewSetPlacementApplicator <NSObject>
+ (id <UIInputViewSetPlacementApplicator>)applicatorForOwner:(id <UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;
@property(readonly) struct UIEdgeInsets contentInsets;
@property(readonly, retain) UIView *draggableView;
@property(readonly, retain) NSArray *constraints;
@property(readonly) struct CGPoint origin;
- (void)invalidate;
- (void)prepare;
- (void)applyChanges:(NSDictionary *)arg1;
- (_Bool)allConstraintsActive;
- (_Bool)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint)arg2;
- (_Bool)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(_Bool *)arg2;
@end

