//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, PKPass;

@protocol PKEditTableViewControllerCachingDelegate <NSObject>
- (void)prefetchItemsAtIndexPaths:(NSArray *)arg1;
- (_Bool)passExistsWithUniqueIdentifier:(NSString *)arg1;
- (PKPass *)passAtIndexPath:(NSIndexPath *)arg1;
@end

