//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OpusKit/UIDynamicItem-Protocol.h>

@class NSArray, NSString, UIBezierPath, UIDynamicItemBehavior;
@protocol OKDynamicItemProxiedObject;

@interface OKDynamicItemProxy : NSObject <UIDynamicItem>
{
    _Bool _enabled;
    _Bool _gravityDisabled;
    id <OKDynamicItemProxiedObject> _proxiedObject;
    UIDynamicItemBehavior *_bodyBehavior;
    NSArray *_collisionGroups;
    NSArray *_attachmentBehaviors;
    NSArray *_pushGroups;
    struct CGPoint _center;
    struct CGRect _bounds;
    struct CGAffineTransform _transform;
}

@property(retain, nonatomic) NSArray *pushGroups; // @synthesize pushGroups=_pushGroups;
@property(retain, nonatomic) NSArray *attachmentBehaviors; // @synthesize attachmentBehaviors=_attachmentBehaviors;
@property(retain, nonatomic) NSArray *collisionGroups; // @synthesize collisionGroups=_collisionGroups;
@property(readonly) UIDynamicItemBehavior *bodyBehavior; // @synthesize bodyBehavior=_bodyBehavior;
@property(nonatomic) _Bool gravityDisabled; // @synthesize gravityDisabled=_gravityDisabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void)setProxiedObject:(id)arg1;
@property(readonly) id <OKDynamicItemProxiedObject> proxiedObject; // @synthesize proxiedObject=_proxiedObject;
- (void)enforceInitialCenter:(struct CGPoint)arg1 size:(struct CGSize)arg2 andTransform:(struct CGAffineTransform)arg3;
- (void)resetInitialValues;
- (void)dealloc;
- (id)initWithProxiedObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
