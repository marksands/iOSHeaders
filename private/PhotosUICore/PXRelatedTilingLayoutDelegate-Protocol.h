//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PXRelatedTilingLayout;

@protocol PXRelatedTilingLayoutDelegate <NSObject>

@optional
- (struct CGRect)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
- (NSString *)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
- (_Bool)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath)arg2;
@end

