//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewPlaceholderContext.h"
#import "_UICollectionViewDropPlaceholderContext.h"

@class NSIndexPath, NSString, NSUUID, UIDragItem, _UIDropAnimationHandlers;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext>
{
    NSUUID *_shadowUpdateIdentifier;
    NSString *_reuseIdentifier;
    NSIndexPath *_originalInsertionIndexPath;
    CDUnknownBlockType _cellUpdateHandler;
    _UIDropAnimationHandlers *_animationHandlers;
    id <_UICollectionViewPlaceholderContextDelegate> _delegate;
    UIDragItem *_dragItem;
}

@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(nonatomic) __weak id <_UICollectionViewPlaceholderContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIDropAnimationHandlers *animationHandlers; // @synthesize animationHandlers=_animationHandlers;
@property(copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property(retain, nonatomic) NSIndexPath *originalInsertionIndexPath; // @synthesize originalInsertionIndexPath=_originalInsertionIndexPath;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSUUID *shadowUpdateIdentifier; // @synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier;
- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)setNeedsCellUpdate;
- (_Bool)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;
- (_Bool)deletePlaceholder;
- (id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

