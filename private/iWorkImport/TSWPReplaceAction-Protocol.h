//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSWPStorage;

@protocol TSWPReplaceAction <NSObject>
- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(TSWPStorage *)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(void (^)(TSWPSelection *, NSString *))arg5;
@end

