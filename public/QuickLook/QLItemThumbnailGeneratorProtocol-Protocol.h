//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLItem;

@protocol QLItemThumbnailGeneratorProtocol <NSObject>
- (void)generateThumbnailForItem:(QLItem *)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(void (^)(UIImage *))arg5;
@end

