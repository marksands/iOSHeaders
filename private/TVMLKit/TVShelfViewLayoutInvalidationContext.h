//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutInvalidationContext.h"

@class NSIndexPath;

@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateLayout;
    _Bool _invalidateVerticalBumps;
    NSIndexPath *_focusedItemIndexPath;
}

@property(retain, nonatomic) NSIndexPath *focusedItemIndexPath; // @synthesize focusedItemIndexPath=_focusedItemIndexPath;
@property(nonatomic) _Bool invalidateVerticalBumps; // @synthesize invalidateVerticalBumps=_invalidateVerticalBumps;
@property(nonatomic) _Bool invalidateLayout; // @synthesize invalidateLayout=_invalidateLayout;
- (void).cxx_destruct;

@end

