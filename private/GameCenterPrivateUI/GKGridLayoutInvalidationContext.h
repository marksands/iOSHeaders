//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutInvalidationContext.h"

@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    _Bool _invalidateIncrementalReveal;
    _Bool _invalidateBoundsChange;
    _Bool _invalidatePlaceholderVisibility;
    _Bool _invalidatePinnableAreas;
}

@property(nonatomic) _Bool invalidatePinnableAreas; // @synthesize invalidatePinnableAreas=_invalidatePinnableAreas;
@property(nonatomic) _Bool invalidatePlaceholderVisibility; // @synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility;
@property(nonatomic) _Bool invalidateBoundsChange; // @synthesize invalidateBoundsChange=_invalidateBoundsChange;
@property(nonatomic) _Bool invalidateIncrementalReveal; // @synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal;

@end

